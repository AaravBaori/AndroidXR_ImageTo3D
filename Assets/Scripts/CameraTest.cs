using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

public class CameraTest : MonoBehaviour
{
    [Header("UI References")]
    [SerializeField] private TextMeshProUGUI statusText;
    [SerializeField] private RawImage previewImage; // Add this for showing captured photo
    [SerializeField] private ARSession session;

    private AndroidJavaObject cameraPlugin;
    private int totalFrames = 0;
    private bool cameraReady = false;
    private Texture2D capturedTexture;

    void Start()
    {
        // CRITICAL: GameObject must be named "CameraTest"
        gameObject.name = "CameraTest";

        UpdateStatus("Initializing...");

#if UNITY_ANDROID && !UNITY_EDITOR
        StartCamera();
#else
        UpdateStatus("Android only - won't work in Editor");
#endif
    }

    void StartCamera()
    {
        try
        {
            Debug.Log("Unity: Attempting to load SimpleCameraX...");

            AndroidJavaClass pluginClass = new AndroidJavaClass("com.test.camerax.SimpleCameraX");
            cameraPlugin = pluginClass.CallStatic<AndroidJavaObject>("getInstance");

            Debug.Log("Unity: Calling startCamera...");
            cameraPlugin.Call("startCamera");

            UpdateStatus("Camera starting...");
            Debug.Log("✓ Camera initialized successfully");
        }
        catch (System.Exception e)
        {
            UpdateStatus($"ERROR: {e.Message}");
            Debug.LogError($"❌ Camera init failed: {e.Message}");
            Debug.LogError($"Stack trace: {e.StackTrace}");
        }
    }

    // Called from Java when frame is received
    public void OnFrameReceived(string data)
    {
        try
        {
            string[] parts = data.Split(',');
            int frameNum = int.Parse(parts[0]);
            int width = int.Parse(parts[1]);
            int height = int.Parse(parts[2]);

            totalFrames = frameNum;
            UpdateStatus($"✓ Receiving frames!\nFrame #{frameNum}\n{width}x{height}");

            Debug.Log($"✓ Frame #{frameNum}: {width}x{height}");
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Error in OnFrameReceived: {e.Message}");
        }
    }

    public void OnPhotoCaptured(string data)
    {
        try
        {
            Debug.Log("Photo data received, processing...");

            string[] parts = data.Split(',');
            int width = int.Parse(parts[0]);
            int height = int.Parse(parts[1]);
            string base64Image = parts[2];

            // Decode Base64 to bytes
            byte[] imageBytes = Convert.FromBase64String(base64Image);

            Debug.Log($"Photo: {width}x{height}, size: {imageBytes.Length} bytes");

            // Create texture and load JPEG
            if (capturedTexture == null || capturedTexture.width != width || capturedTexture.height != height)
            {
                capturedTexture = new Texture2D(width, height, TextureFormat.RGB24, false);
            }

            capturedTexture.LoadImage(imageBytes);

            // Display in UI
            if (previewImage != null)
            {
                previewImage.texture = capturedTexture;
                previewImage.gameObject.SetActive(true);
            }

            UpdateStatus($"✓ Photo captured!\n{width}x{height}");
            Debug.Log("✓ Photo displayed successfully");
            session.enabled = true;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Error processing photo: {e.Message}");
            UpdateStatus($"Error: {e.Message}");
        }
    }

    public void OnCaptureError(string error)
    {
        Debug.LogError($"Capture error: {error}");
        UpdateStatus($"Capture failed: {error}");
        session.enabled = true;
    }

    public void CapturePhoto()
    {
        Debug.Log("=== CapturePhoto() called ===");
        

#if UNITY_ANDROID && !UNITY_EDITOR
        if (cameraPlugin == null)
        {
            UpdateStatus("Camera not initialized!");
            Debug.LogError("Camera plugin is null");
            return;
        }

        try
        {
            session.enabled = false;
            Debug.Log("Triggering photo capture...");
            UpdateStatus("Capturing...");
            cameraPlugin.Call("capturePhoto");
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Capture trigger failed: {e.Message}");
            UpdateStatus($"Error: {e.Message}");
        }
#else
        Debug.Log("Running in Editor - photo capture only works on Android device");
        UpdateStatus("Editor mode - build to test");
#endif
    }

    // Called from Java when camera is ready (if using photo capture mode)
    public void OnCameraReady(string message)
    {
        cameraReady = true;
        UpdateStatus("Camera ready!\nPinch button to capture photo");
        Debug.Log("✓ Camera ready for photo capture");
    }


    void Update()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        // Query frame count every second
        if (Time.frameCount % 60 == 0 && cameraPlugin != null)
        {
            try
            {
                int count = cameraPlugin.Call<int>("getFrameCount");
                if (count > totalFrames)
                {
                    UpdateStatus($"✓ Camera working!\nTotal frames: {count}");
                }
            }
            catch { }
        }
#endif
    }



    void UpdateStatus(string message)
    {
        if (statusText != null)
        {
            statusText.text = message;
        }
        Debug.Log(message);
    }

    void OnDestroy()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        if (cameraPlugin != null)
        {
            try
            {
                cameraPlugin.Call("stopCamera");
                Debug.Log("Camera stopped");
            }
            catch { }
        }
#endif

        if (capturedTexture != null)
        {
            Destroy(capturedTexture);
        }
    }
}
