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
import java.nio.ByteBuffer;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

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
        
        // Image capture use case
        imageCapture = new ImageCapture.Builder()
            .setCaptureMode(ImageCapture.CAPTURE_MODE_MINIMIZE_LATENCY)
            .build();
        
        try {
            cameraProvider.unbindAll();
            cameraProvider.bindToLifecycle(
                (LifecycleOwner) activity,
                cameraSelector,
                imageCapture
            );
            
            Log.d(TAG, "Camera bound successfully - ready to capture");
            
            // Notify Unity camera is ready
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
                        // Convert ImageProxy to JPEG bytes
                        byte[] jpegData = imageProxyToJpeg(image);
                        
                        // Convert to Base64 for Unity
                        String base64Image = Base64.encodeToString(jpegData, Base64.NO_WRAP);
                        
                        int width = image.getWidth();
                        int height = image.getHeight();
                        
                        Log.d(TAG, "Photo: " + width + "x" + height + ", size: " + jpegData.length + " bytes");
                        
                        // Send to Unity
                        final String imageData = width + "," + height + "," + base64Image;
                        activity.runOnUiThread(() -> {
                            UnityPlayer.UnitySendMessage(
                                "CameraTest",
                                "OnPhotoCaptured",
                                imageData
                            );
                        });
                        
                    } catch (Exception e) {
                        Log.e(TAG, "Error processing image: " + e.getMessage());
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
            90, // JPEG quality
            out
        );
        
        return out.toByteArray();
    }
    
    public void stopCamera() {
        Log.d(TAG, "Stopping camera...");
        if (cameraProvider != null) {
            cameraProvider.unbindAll();
        }
        if (cameraExecutor != null) {
            cameraExecutor.shutdown();
        }
    }
}