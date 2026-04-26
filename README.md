# AndroidXR ImageTo3D

A **Unity (Android XR)** application that lets you capture a photo through your XR headset's passthrough camera, send it to a generative AI backend ([fal.ai](https://fal.ai)), and receive a fully grabbable **3D GLB model** spawned live into your mixed-reality scene.

---

## 🎯 Features

- **Passthrough Camera Capture** — Uses a native Android (CameraX) plugin to take a JPEG photo from the device camera and hand it off to Unity.
- **AI-Powered Image → 3D Generation** — Submits the captured image to fal.ai's image-to-3D inference API via a custom `FalClientPlugin` Java bridge.
- **Live GLB Loading** — Streams the returned `.glb` model URL directly into the scene using the [GLTFast](https://github.com/atteneder/glTFast) runtime loader.
- **XR Grab Interaction** — Every generated model is automatically equipped with a `Rigidbody` and XR Grab Interactable so you can pick it up, move it, and throw it with hand tracking or controllers.
- **Speech Input (WIP)** — A `SpeechManager` records microphone audio, encodes it to WAV, and forwards it to the fal.ai `transcribeAudio` endpoint for future prompt-driven generation.
- **Android Permission Handling** — A reusable `permissionCheck` component requests runtime permissions (camera, microphone, etc.) with granted/denied Unity Events.

---

## 🗂️ Project Structure

```
AndroidXR_ImageTo3D/
├── Assets/
│   ├── Scripts/
│   │   ├── CameraTest.cs          # Manages CameraX plugin lifecycle & photo callbacks
│   │   ├── FalClient.cs           # Bridges fal.ai Java plugin → Unity; loads GLB models
│   │   ├── SpeechManager.cs       # Records audio, encodes to WAV, sends to transcription
│   │   ├── permissionCheck.cs     # Generic runtime permission request component
│   │   ├── CaptureImage.cs        # Placeholder / entry-point stub
│   │   └── CheckButton.cs         # Debug button test helper
│   ├── Plugins/
│   │   └── Android/
│   │       ├── AndroidScripts/
│   │       │   ├── FalClientPlugin.java   # Native Java: fal.ai HTTP client + audio transcription
│   │       │   └── SimpleCameraX.java     # Native Java: CameraX photo capture
│   │       ├── AndroidManifest.xml
│   │       ├── mainTemplate.gradle
│   │       └── launcherTemplate.gradle
│   ├── CaptureImage.unity         # Main scene
│   ├── Scenes/
│   ├── Settings/
│   ├── XR/                        # XR Interaction Toolkit config
│   └── XRI/
├── Packages/
│   └── manifest.json
└── ProjectSettings/
```

---

## 🧩 Architecture

```
[XR Headset Camera]
        │  (CameraX JPEG)
        ▼
SimpleCameraX.java ──OnPhotoCaptured()──▶ CameraTest.cs
                                                │
                                    (base64 image bytes)
                                                │
                                                ▼
                                        FalClient.cs
                                                │
                                   mapInputFromFile() / sendInputAndMonitorLog()
                                                │
                                                ▼
                                    FalClientPlugin.java
                                    (fal.ai REST API call)
                                                │
                                      GLB model URL returned
                                                │
                                                ▼
                                    GLTFast.GltfAsset.Load()
                                                │
                                    Spawned in scene at designated position
                                    + Rigidbody + XR Grab Interactable
```

---

## 🛠️ Requirements

| Requirement | Details |
|---|---|
| Unity Version | 2022.3 LTS or later (tested with Android XR build target) |
| Platform | Android (ARM64), Android XR headset |
| Unity Packages | XR Interaction Toolkit, AR Foundation, GLTFast, TextMeshPro, XR Hands |
| Android Min SDK | API 29+ (CameraX requirement) |
| fal.ai Account | API key required (see Configuration) |

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/AaravBaori/AndroidXR_ImageTo3D.git
```

### 2. Open in Unity

Open the project folder in **Unity Hub**. Unity will import packages automatically.

### 3. Configure the fal.ai API Key

In `Assets/Scripts/FalClient.cs`, locate the following line inside `Start()`:

```csharp
string apiKey = "YOUR_FAL_AI_API_KEY";
```

Replace the placeholder with your key from [fal.ai](https://fal.ai/dashboard).

> ⚠️ **Security Notice:** Do not commit your API key to version control. Consider using a `ScriptableObject`, environment variable, or remote config for production builds.

### 4. Build Settings

- Set the build platform to **Android**.
- Enable **ARM64** under Player Settings → Other Settings → Target Architectures.
- Ensure the following permissions are present in `AndroidManifest.xml` (already included):
  - `android.permission.CAMERA`
  - `android.permission.RECORD_AUDIO`

### 5. Deploy to Device

Connect your Android XR headset, then use **Build and Run** (`Ctrl+B`).

---

## 🔑 Key Scripts

### `FalClient.cs` (`FalClientBridge`)
The core Unity-side controller. On start, it initialises the `FalClientPlugin` Java singleton with your API key. When `ProcessLocalImage(path)` is called, it passes the captured file path to the plugin. Once the model is generated, `OnModelGenerated(glbUrl)` is invoked by Java via `UnitySendMessage`, which dynamically loads the GLB into the scene with GLTFast and makes it grabbable via XR Interaction Toolkit.

### `CameraTest.cs`
Manages the `SimpleCameraX` native plugin lifecycle. Calls `StartCamera()` on Android, handles `OnPhotoCaptured(data)` callbacks (base64-encoded JPEG with width/height prefix), decodes them into a `Texture2D` for UI preview, and triggers the fal.ai pipeline. ARSession is toggled off during capture and re-enabled afterwards.

### `SpeechManager.cs`
Records microphone input using `Utilities.Audio.RecordingManager`, converts the raw PCM float samples to a standard WAV byte array, base64-encodes it, and sends it to the Java plugin's `transcribeAudio()` method for speech-to-text via the fal.ai API.

### `FalClientPlugin.java`
The Android-side HTTP client. Handles API key initialisation, image input mapping, model generation requests, log polling, and audio transcription — communicating results back to Unity via `UnityPlayer.UnitySendMessage`.

### `SimpleCameraX.java`
A lightweight CameraX wrapper that opens the rear camera, captures a single JPEG, and returns it to Unity as a base64-encoded string alongside the resolution.

---

## ⚠️ Known Limitations

- The API key is currently hard-coded in source. Rotate it and store it securely before shipping.
- `CaptureImage.cs` and `CheckButton.cs` are stubs/debug helpers and contain no production logic.
- Speech-to-3D pipeline (`SpeechManager` → prompt-based generation) is noted as work-in-progress in the source.
- Camera capture only functions on a physical Android device; Editor mode shows a placeholder status message.

---

## 📦 Third-Party Dependencies

| Package | Purpose |
|---|---|
| [GLTFast](https://github.com/atteneder/glTFast) | Runtime GLB/GLTF model loading |
| [XR Interaction Toolkit](https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@latest) | XR grab interactables, hand tracking |
| [AR Foundation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@latest) | ARSession management |
| [XR Hands](https://docs.unity3d.com/Packages/com.unity.xr.hands@latest) | Hand tracking support |
| [TextMeshPro](https://docs.unity3d.com/Packages/com.unity.textmeshpro@latest) | UI text rendering |
| [Utilities.Audio](https://github.com/RageAgainstThePixel/com.utilities.audio) | Microphone recording manager |
| [fal.ai](https://fal.ai) | Cloud image-to-3D and speech-to-text inference |

---

## 🤝 Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you'd like to change.

---

## 📄 License

This project does not currently include a license file. Please contact the repository owner before using in commercial projects.
