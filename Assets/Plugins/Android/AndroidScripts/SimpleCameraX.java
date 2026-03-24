package com.test.camerax;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.ImageFormat;
import android.graphics.Rect;
import android.graphics.YuvImage;
import android.util.Base64;
import android.util.Log;
import androidx.annotation.NonNull;
import androidx.camera.core.Camera;
import androidx.camera.core.CameraSelector;
import androidx.camera.core.ImageCapture;
import androidx.camera.core.ImageCaptureException;
import androidx.camera.core.ImageProxy;
import androidx.camera.core.Preview;
import androidx.camera.lifecycle.ProcessCameraProvider;
import androidx.core.content.ContextCompat;
import androidx.lifecycle.LifecycleOwner;
import com.google.common.util.concurrent.ListenableFuture;
import com.unity3d.player.UnityPlayer;
import java.io.ByteArrayOutputStream;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import java.util.UUID;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.io.File;

public class SimpleCameraX {
    private static final String TAG = "SimpleCameraX";
    private static SimpleCameraX instance;

    private Activity activity;
    private ExecutorService cameraExecutor;
    private ImageCapture imageCapture;
    private ProcessCameraProvider cameraProvider;

    private SimpleCameraX() {
        this.activity = UnityPlayer.currentActivity;
        this.cameraExecutor = Executors.newSingleThreadExecutor();
    }

    public static SimpleCameraX getInstance() {
        if (instance == null) {
            instance = new SimpleCameraX();
        }
        return instance;
    }

    public void startCamera() {
        Log.d(TAG, "Starting camera...");

        activity.runOnUiThread(() -> {
            ListenableFuture<ProcessCameraProvider> cameraProviderFuture =
                    ProcessCameraProvider.getInstance(activity);

            cameraProviderFuture.addListener(() -> {
                try {
                    cameraProvider = cameraProviderFuture.get();
                    bindCamera(cameraProvider);
                    Log.d(TAG, "Camera started successfully!");
                } catch (Exception e) {
                    Log.e(TAG, "Camera start failed: " + e.getMessage());
                }
            }, ContextCompat.getMainExecutor(activity));
        });
    }

    private void bindCamera(ProcessCameraProvider cameraProvider) {
        CameraSelector cameraSelector = CameraSelector.DEFAULT_BACK_CAMERA;

        // Image capture use case - use JPEG output format
        imageCapture = new ImageCapture.Builder()
                .setCaptureMode(ImageCapture.CAPTURE_MODE_MINIMIZE_LATENCY)
                .setTargetRotation(android.view.Surface.ROTATION_0)
                .build();

        try {
            cameraProvider.unbindAll();
            cameraProvider.bindToLifecycle(
                    (LifecycleOwner) activity,
                    cameraSelector,
                    imageCapture
            );

            Log.d(TAG, "Camera bound successfully - ready to capture");

            activity.runOnUiThread(() -> {
                UnityPlayer.UnitySendMessage(
                        "CameraTest",
                        "OnCameraReady",
                        "Camera ready"
                );
            });

        } catch (Exception e) {
            Log.e(TAG, "Binding failed: " + e.getMessage());
        }
    }

    public void capturePhoto() {
        if (imageCapture == null) {
            Log.e(TAG, "ImageCapture not initialized");
            return;
        }

        Log.d(TAG, "Capturing photo...");

        imageCapture.takePicture(
                cameraExecutor,
                new ImageCapture.OnImageCapturedCallback() {
                    @Override
                    public void onCaptureSuccess(@NonNull ImageProxy image) {
                        Log.d(TAG, "Photo captured successfully!");

                        try {
                            // Log image format for debugging
                            int format = image.getFormat();
                            int planeCount = image.getPlanes().length;
                            Log.d(TAG, "Image format: " + format + ", planes: " + planeCount);

                            // Convert to JPEG
                            byte[] jpegData = imageProxyToJpeg(image);

                            if (jpegData == null) {
                                Log.e(TAG, "Failed to convert image to JPEG");
                                return;
                            }

                            // Convert to Base64
                            String base64Image = Base64.encodeToString(jpegData, Base64.NO_WRAP);

                            // 2. Define custom directory and file
                            File directory = new File(activity.getExternalFilesDir(null), "Pictures");
                            if (!directory.exists()) {
                                directory.mkdirs();
                            }
                            String fileName = String.valueOf(UUID.randomUUID());
                            File photoFile = new File(directory, fileName + ".jpg");

                            // 3. Save to file
                            FileOutputStream fos = new FileOutputStream(photoFile);
                            fos.write(jpegData);
                            fos.close();

                            String savedPath = photoFile.getAbsolutePath();
                            Log.d(TAG, "Photo saved to: " + savedPath);

                            int width = image.getWidth();
                            int height = image.getHeight();

                            Log.d(TAG, "Photo: " + width + "x" + height + ", JPEG size: " + jpegData.length + " bytes");
                            // image.close();
                            // Send to Unity
                            final String imageData = width + "," + height + "," + base64Image;
                            activity.runOnUiThread(() -> {
                                UnityPlayer.UnitySendMessage(
                                        "CameraTest",
                                        "OnPhotoCaptured",
                                        imageData
                                );
                            });

                            String fileAddress = "/storage/emulated/0/Android/data/com.UnityTechnologies.com.unity.aarav.gltf/files/Pictures/" + fileName + ".jpg";
                            activity.runOnUiThread(() -> {
                                UnityPlayer.UnitySendMessage(
                                        "FalClient",
                                        "ProcessLocalImage",
                                        fileAddress
                                );
                            });

                        } catch (Exception e) {
                            Log.e(TAG, "Error processing image: " + e.getMessage());
                            e.printStackTrace();
                        } finally {
                            image.close();
                        }
                    }

                    @Override
                    public void onError(@NonNull ImageCaptureException exception) {
                        Log.e(TAG, "Photo capture failed: " + exception.getMessage());

                        activity.runOnUiThread(() -> {
                            UnityPlayer.UnitySendMessage(
                                    "CameraTest",
                                    "OnCaptureError",
                                    "Capture failed: " + exception.getMessage()
                            );
                        });
                    }
                }
        );
    }  

    private byte[] imageProxyToJpeg(ImageProxy image) {
        try {
            int format = image.getFormat();
            int planeCount = image.getPlanes().length;

            Log.d(TAG, "Converting image - Format: " + format + ", Planes: " + planeCount);

            // Handle JPEG format (already compressed)
            if (format == ImageFormat.JPEG) {
                Log.d(TAG, "Image is already JPEG format");
                ByteBuffer buffer = image.getPlanes()[0].getBuffer();
                byte[] bytes = new byte[buffer.remaining()];
                buffer.get(bytes);
                return bytes;
            }

            // Handle YUV formats (need conversion)
            if (format == ImageFormat.YUV_420_888 && planeCount >= 3) {
                Log.d(TAG, "Converting YUV_420_888 to JPEG");
                return convertYuvToJpeg(image);
            }

            // Handle single-plane formats
            if (planeCount == 1) {
                Log.d(TAG, "Single plane format, attempting direct read");
                ByteBuffer buffer = image.getPlanes()[0].getBuffer();
                byte[] bytes = new byte[buffer.remaining()];
                buffer.get(bytes);

                // Try to decode as bitmap and re-encode as JPEG
                Bitmap bitmap = BitmapFactory.decodeByteArray(bytes, 0, bytes.length);
                if (bitmap != null) {
                    ByteArrayOutputStream out = new ByteArrayOutputStream();
                    bitmap.compress(Bitmap.CompressFormat.JPEG, 90, out);
                    bitmap.recycle();
                    return out.toByteArray();
                }

                return bytes;
            }

            Log.e(TAG, "Unsupported image format: " + format + " with " + planeCount + " planes");
            return null;

        } catch (Exception e) {
            Log.e(TAG, "Error converting image: " + e.getMessage());
            e.printStackTrace();
            return null;
        }
    }

    private byte[] convertYuvToJpeg(ImageProxy image) {
        ImageProxy.PlaneProxy[] planes = image.getPlanes();
        ByteBuffer yBuffer = planes[0].getBuffer();
        ByteBuffer uBuffer = planes[1].getBuffer();
        ByteBuffer vBuffer = planes[2].getBuffer();

        int ySize = yBuffer.remaining();
        int uSize = uBuffer.remaining();
        int vSize = vBuffer.remaining();

        byte[] nv21 = new byte[ySize + uSize + vSize];

        yBuffer.get(nv21, 0, ySize);
        vBuffer.get(nv21, ySize, vSize);
        uBuffer.get(nv21, ySize + vSize, uSize);

        YuvImage yuvImage = new YuvImage(nv21, ImageFormat.NV21,
                image.getWidth(), image.getHeight(), null);

        ByteArrayOutputStream out = new ByteArrayOutputStream();
        yuvImage.compressToJpeg(
                new Rect(0, 0, image.getWidth(), image.getHeight()),
                90,
                out
        );

        return out.toByteArray();
    }

    public void stopCamera() {
        // Force this to run on the Android Main Looper
        new android.os.Handler(android.os.Looper.getMainLooper()).post(new Runnable() {
            @Override
            public void run() {
                try {
                    if (cameraProvider != null) {
                        cameraProvider.unbindAll();
                        Log.d("SimpleCameraX", "Successfully unbound on Main Thread");
                    }
                } catch (Exception e) {
                    Log.e("SimpleCameraX", "Error unbinding: " + e.getMessage());
                }
            }
        });
    }
}