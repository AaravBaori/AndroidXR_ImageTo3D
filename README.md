# AndroidXR ImageTo3D

A **Unity (Android XR)** application that lets you capture a photo through your XR headset's passthrough camera, send it to a generative AI backend ([fal.ai](https://fal.ai)), and receive a fully grabbable **3D GLB model** spawned live into your mixed-reality scene.

---

## 🎯 Features

- **Passthrough Camera Capture** — Uses a native Android (CameraX) plugin to take a JPEG photo from the de# AndroidXR ImageTo3D

A **Unity (Android XR)** application that lets you capture a photo through your XR headset's passthrough camera, send it to a generative AI backend ([fal.ai](https://fal.ai)), and receive a fully grabbable **3D GLB model** spawned live into your mixed-reality scene.

---

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Step-by-Step Setup](#step-by-step-setup)
  - [1. Install Unity](#1-install-unity)
  - [2. Install Android Build Support](#2-install-android-build-support)
  - [3. Clone the Repository](#3-clone-the-repository)
  - [4. Open the Project](#4-open-the-project)
  - [5. Configure the OpenUPM Scoped Registry](#5-configure-the-openupm-scoped-registry)
  - [6. Install Unity Packages](#6-install-unity-packages)
  - [7. Configure the fal.ai API Key](#7-configure-the-falai-api-key)
  - [8. Configure Player Settings](#8-configure-player-settings)
  - [9. Configure XR Settings](#9-configure-xr-settings)
  - [10. Build and Deploy](#10-build-and-deploy)
- [Package Reference](#package-reference)
- [Android Gradle Dependencies](#android-gradle-dependencies)
- [Android Permissions](#android-permissions)
- [Project Structure](#project-structure)
- [Architecture](#architecture)
- [Key Scripts](#key-scripts)
- [Known Limitations](#known-limitations)

---

## Features

- **Passthrough Camera Capture** — Uses a native Android (CameraX) plugin to take a JPEG photo from the device camera and hand it off to Unity.
- **AI-Powered Image → 3D Generation** — Submits the captured image to fal.ai's image-to-3D inference API via a custom `FalClientPlugin` Java bridge.
- **Live GLB Loading** — Streams the returned `.glb` model URL directly into the scene using the GLTFast runtime loader.
- **XR Grab Interaction** — Every generated model is automatically equipped with a `Rigidbody` and XR Grab Interactable so you can pick it up, move it, and throw it with hand tracking or controllers.
- **Speech Input (WIP)** — A `SpeechManager` records microphone audio, encodes it to WAV, and forwards it to the fal.ai `transcribeAudio` endpoint for future prompt-driven generation.
- **Android Permission Handling** — A reusable `permissionCheck` component requests runtime permissions (camera, microphone, etc.) with granted/denied Unity Events.

---

## Prerequisites

Before opening the project, make sure you have the following installed on your machine:

| Tool | Version / Notes |
|---|---|
| **Unity Editor** | **6000.3.5f2** (Unity 6, exact version required) |
| **Android Build Support** | Installed via Unity Hub (includes Android SDK, NDK, JDK) |
| **JDK** | Java 17 (bundled with Unity Android support) |
| **Android SDK** | API Level 25 minimum, installed via Unity Hub or Android Studio |
| **Android NDK** | Bundled with Unity Hub's Android support module |
| **Git** | For cloning the repository |
| **fal.ai Account** | An active account at [fal.ai](https://fal.ai) with an API key |
| **Android XR Device** | A physical Android XR headset — the app will not function in the Unity Editor |

---

## Step-by-Step Setup

### 1. Install Unity

1. Download and install **[Unity Hub](https://unity.com/download)**.
2. In Unity Hub, go to **Installs → Add** and select the exact version **6000.3.5f2**.
   - If it does not appear in the list, use **Install Editor → Archive** and locate it, or download from the [Unity download archive](https://unity.com/releases/editor/archive).

### 2. Install Android Build Support

During the Unity 6000.3.5f2 installation (or by clicking the gear icon on an existing install in Unity Hub), add the following modules:

- ✅ **Android Build Support**
  - ✅ Android SDK & NDK Tools
  - ✅ OpenJDK

### 3. Clone the Repository

```bash
git clone https://github.com/AaravBaori/AndroidXR_ImageTo3D.git
```

### 4. Open the Project

1. In Unity Hub, click **Open → Add project from disk**.
2. Navigate to the cloned folder and select it.
3. Unity Hub will warn about the editor version — confirm you are opening it with **6000.3.5f2**.
4. Unity will take a few minutes to import assets and compile packages on first open. Let it finish completely before making any changes.

### 5. Configure the OpenUPM Scoped Registry

The project uses [OpenUPM](https://openupm.com) for the `com.utilities.audio` package. This is already present in `Packages/manifest.json` and should be detected automatically. To verify or add it manually:

1. Go to **Edit → Project Settings → Package Manager**.
2. Under **Scoped Registries**, confirm the following entry exists:

| Field | Value |
|---|---|
| Name | `package.openupm.com` |
| URL | `https://package.openupm.com` |
| Scopes | `com.utilities.async`, `com.utilities.audio`, `com.utilities.extensions` |

3. Click **Apply**. Unity will fetch the packages from OpenUPM automatically.

### 6. Install Unity Packages

All packages are declared in `Packages/manifest.json` and will be auto-installed when you open the project. Verify they appear in **Window → Package Manager** with the correct versions:

| Package Name | Version | Source |
|---|---|---|
| Google XR Extensions (`com.google.xr.extensions`) | latest (git) | GitHub — android-xr-unity-package |
| GLTFast (`com.unity.cloud.gltfast`) | 6.16.1 | Unity Registry |
| Input System (`com.unity.inputsystem`) | 1.17.0 | Unity Registry |
| Universal Render Pipeline (`com.unity.render-pipelines.universal`) | 17.3.0 | Unity Registry |
| AR Foundation (`com.unity.xr.arfoundation`) | 6.3.3 | Unity Registry |
| Android XR OpenXR (`com.unity.xr.androidxr-openxr`) | 1.1.0 | Unity Registry |
| XR Composition Layers (`com.unity.xr.compositionlayers`) | 2.3.0 | Unity Registry |
| XR Hands (`com.unity.xr.hands`) | 1.7.3 | Unity Registry |
| XR Interaction Toolkit (`com.unity.xr.interaction.toolkit`) | 3.3.1 | Unity Registry |
| XR Management (`com.unity.xr.management`) | 4.5.4 | Unity Registry |
| OpenXR Plugin (`com.unity.xr.openxr`) | 1.16.1 | Unity Registry |
| Utilities.Audio (`com.utilities.audio`) | 3.0.3 | OpenUPM |
| AI Navigation (`com.unity.ai.navigation`) | 2.0.9 | Unity Registry |
| TextMesh Pro / UI (`com.unity.ugui`) | 2.0.0 | Unity Registry |

> **If packages are missing:** Open **Window → Package Manager**, switch the dropdown to **Unity Registry**, search for the package by name, and install the listed version. For `com.google.xr.extensions`, use **Add package from git URL** and paste:
> `https://github.com/android/android-xr-unity-package.git`

### 7. Configure the fal.ai API Key

Open `Assets/Scripts/FalClient.cs` and find this line inside `Start()`:

```csharp
string apiKey = "YOUR_FAL_AI_API_KEY";
```

Replace the value with your key from your [fal.ai dashboard](https://fal.ai/dashboard).

> ⚠️ **Security Notice:** The API key is currently stored in plain text in source code. Before sharing or deploying, rotate the key and move it to a `ScriptableObject`, a `Resources` file that is added to `.gitignore`, or a remote config service.

### 8. Configure Player Settings

Go to **Edit → Project Settings → Player** and confirm the following settings under the **Android** tab:

**Identification:**

| Setting | Value |
|---|---|
| Package Name | `com.UnityTechnologies.com.aarav.captureimage` |
| Version | `0.1.0` |
| Bundle Version Code | `1` |

**Other Settings:**

| Setting | Value |
|---|---|
| Minimum API Level | **API Level 25 (Android 7.1 Nougat)** |
| Target API Level | **Automatic (highest installed)** |
| Scripting Backend | **IL2CPP** |
| Target Architectures | **ARM64 only** ✅ (uncheck x86 and ARMv7) |
| Allow 'unsafe' Code | ✅ Enabled |
| Active Input Handling | **Input System Package (New)** |
| Color Space | **Linear** |

**Scripting Define Symbols** (Android platform):
```
USE_INPUT_SYSTEM_POSE_CONTROL;USE_STICK_CONTROL_THUMBSTICKS
```

**Graphics APIs (Android):**
Uncheck **Auto Graphics API** and set the list manually in this order:
1. Vulkan
2. OpenGLES3

**Publishing Settings** — verify these are all checked:

| Setting | Must be |
|---|---|
| Custom Main Manifest | ✅ Enabled |
| Custom Main Gradle Template | ✅ Enabled |
| Custom Launcher Gradle Manifest | ✅ Enabled |
| Custom Gradle Properties Template | ✅ Enabled |

> If any of these get unchecked, the native CameraX and fal.ai plugins will not be included in the build.

**Application Entry Point:**
Set to **GameActivity** (not the legacy `UnityPlayerActivity`).

### 9. Configure XR Settings

Go to **Edit → Project Settings → XR Plug-in Management**:

1. Select the **Android** tab.
2. Check ✅ **OpenXR**.

Go to **Edit → Project Settings → XR Plug-in Management → OpenXR** (Android tab) and enable these features:

- ✅ Android XR (Google) — enable all sub-features
- ✅ Hand Tracking Subsystem
- ✅ Hand Interaction Profile
- ✅ Any controller profile matching your headset

### 10. Build and Deploy

1. Go to **File → Build Settings**.
2. Set platform to **Android** (click **Switch Platform** if it is not already selected).
3. Make sure the scene **`Assets/CaptureImage.unity`** is listed under **Scenes In Build**.
4. Connect your Android XR headset via USB. Enable **Developer Mode** and **USB Debugging** on the device.
5. Select your device in the **Run Device** dropdown.
6. Click **Build and Run**.

> The first build will take several minutes as IL2CPP compiles native code. Subsequent incremental builds are significantly faster.

---

## Package Reference

Full contents of `Packages/manifest.json` for reference:

```json
{
  "dependencies": {
    "com.google.xr.extensions": "https://github.com/android/android-xr-unity-package.git",
    "com.unity.ai.navigation": "2.0.9",
    "com.unity.cloud.gltfast": "6.16.1",
    "com.unity.collab-proxy": "2.11.2",
    "com.unity.ide.rider": "3.0.38",
    "com.unity.ide.visualstudio": "2.0.26",
    "com.unity.inputsystem": "1.17.0",
    "com.unity.mobile.android-logcat": "1.4.7",
    "com.unity.render-pipelines.universal": "17.3.0",
    "com.unity.test-framework": "1.6.0",
    "com.unity.timeline": "1.8.10",
    "com.unity.ugui": "2.0.0",
    "com.unity.visualscripting": "1.9.9",
    "com.unity.xr.androidxr-openxr": "1.1.0",
    "com.unity.xr.arfoundation": "6.3.3",
    "com.unity.xr.compositionlayers": "2.3.0",
    "com.unity.xr.hands": "1.7.3",
    "com.unity.xr.interaction.toolkit": "3.3.1",
    "com.unity.xr.management": "4.5.4",
    "com.unity.xr.openxr": "1.16.1",
    "com.utilities.audio": "3.0.3"
  },
  "scopedRegistries": [
    {
      "name": "package.openupm.com",
      "url": "https://package.openupm.com",
      "scopes": [
        "com.utilities.async",
        "com.utilities.audio",
        "com.utilities.extensions"
      ]
    }
  ]
}
```

---

## Android Gradle Dependencies

These native Android libraries are declared in `Assets/Plugins/Android/mainTemplate.gradle` and are downloaded automatically by Gradle during the build. You do not need to install them manually.

| Library | Version | Purpose |
|---|---|---|
| `androidx.camera:camera-core` | 1.3.0 | CameraX core |
| `androidx.camera:camera-camera2` | 1.3.0 | CameraX Camera2 backend |
| `androidx.camera:camera-lifecycle` | 1.3.0 | CameraX lifecycle integration |
| `ai.fal.client:fal-client-async` | 0.7.1 | fal.ai async HTTP client |
| `androidx.lifecycle:lifecycle-runtime-ktx` | 2.8.7 | Kotlin coroutine lifecycle support |
| `com.google.code.gson:gson` | 2.10.1 | JSON serialisation |
| `com.google.guava:guava` | 31.1-android | Google core utilities |

Java source and target compatibility is set to **Java 17** in the Gradle config.

---

## Android Permissions

Declared in `Assets/Plugins/Android/AndroidManifest.xml`:

```xml
<uses-permission android:name="android.permission.HAND_TRACKING" />
<uses-permission android:name="android.permission.CAMERA" />
<uses-permission android:name="android.permission.SCENE_UNDERSTANDING_COARSE" />
```

The `permissionCheck.cs` component handles requesting these at runtime. Attach it to a GameObject in the scene and set the `m_permissionId` field in the Inspector to the permission string you want to request (e.g. `android.permission.CAMERA`), then wire up the `PermissionGranted` and `PermissionDenied` Unity Events.

---

## Project Structure

```
AndroidXR_ImageTo3D/
├── Assets/
│   ├── Scripts/
│   │   ├── CameraTest.cs              # CameraX plugin lifecycle & photo callbacks
│   │   ├── FalClient.cs               # fal.ai bridge; dynamically loads GLB models
│   │   ├── SpeechManager.cs           # Microphone recording → WAV → transcription
│   │   ├── permissionCheck.cs         # Runtime Android permission request component
│   │   ├── CaptureImage.cs            # Placeholder stub
│   │   └── CheckButton.cs             # Debug button helper
│   ├── Plugins/
│   │   └── Android/
│   │       ├── AndroidScripts/
│   │       │   ├── FalClientPlugin.java   # fal.ai HTTP client (Java)
│   │       │   └── SimpleCameraX.java     # CameraX photo capture (Java)
│   │       ├── AndroidManifest.xml
│   │       ├── mainTemplate.gradle
│   │       ├── launcherTemplate.gradle
│   │       └── gradleTemplate.properties
│   ├── CaptureImage.unity             # Main scene
│   ├── Scenes/
│   ├── Settings/                      # URP renderer assets
│   ├── XR/                            # XR Interaction Toolkit config
│   └── XRI/
├── Packages/
│   └── manifest.json
└── ProjectSettings/
    ├── ProjectVersion.txt             # Unity 6000.3.5f2
    ├── ProjectSettings.asset          # All player/build settings
    └── XRSettings.asset               # XR plugin configuration
```

---

## Architecture

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
                                (via UnitySendMessage → OnModelGenerated)
                                                │
                                                ▼
                                    GLTFast.GltfAsset.Load()
                                                │
                                    Spawned in scene at designated position
                                    + Rigidbody + XR Grab Interactable
```

---

## Key Scripts

### `FalClient.cs` (`FalClientBridge`)
The core Unity-side controller. On start, initialises the `FalClientPlugin` Java singleton with your API key. When `ProcessLocalImage(path)` is called, it passes the captured file path to the plugin. Once the model is generated, `OnModelGenerated(glbUrl)` is invoked by Java via `UnitySendMessage`, which dynamically loads the GLB into the scene using GLTFast and attaches a `Rigidbody` so the object can be grabbed with XR Interaction Toolkit.

### `CameraTest.cs`
Manages the `SimpleCameraX` native plugin lifecycle. Calls `StartCamera()` on Android, handles `OnPhotoCaptured(data)` callbacks (base64-encoded JPEG prefixed with `width,height,`), decodes them into a `Texture2D` for UI preview, and triggers the fal.ai pipeline. The `ARSession` is toggled off during capture and re-enabled afterwards to avoid conflicts.

### `SpeechManager.cs`
Records microphone input using `Utilities.Audio.RecordingManager`, converts the raw PCM float samples into a standard WAV byte array, base64-encodes it, and calls the Java plugin's `transcribeAudio()` method. The result comes back via `OnSpeechRecognized(text)` and is intended to drive prompt-based 3D generation (currently a stub — marked TODO in source).

### `permissionCheck.cs`
A reusable component that requests a single Android runtime permission on `Start()`. Configure `m_permissionId` in the Inspector and wire up the `m_PermissionGranted` / `m_PermissionDenied` Unity Events.

### `FalClientPlugin.java`
The Android-side HTTP client. Handles API key initialisation, image file input mapping, model generation job submission, log polling, and audio transcription — all communicating results back to Unity via `UnityPlayer.UnitySendMessage("FalClientBridge", ...)`.

### `SimpleCameraX.java`
A lightweight CameraX wrapper. Opens the rear camera, captures a single JPEG on request, and returns the result to Unity as `"width,height,base64data"` via `UnitySendMessage("CameraTest", "OnPhotoCaptured", ...)`.

---

## Known Limitations

- **API key is hard-coded** — the key currently in the source has been exposed in the repo. Rotate it on your fal.ai dashboard and store the new key securely before building.
- **Editor-only limitation** — camera capture and all Android JNI calls only work on a physical device. Running in the Editor will show status messages but no actual capture or generation will occur.
- **Speech-to-3D pipeline is incomplete** — `SpeechManager` successfully transcribes audio but the connection to prompt-based generation is marked as TODO in the source.
- **`CaptureImage.cs` and `CheckButton.cs`** are stubs and contain no production logic.
- **Single model at a time** — the "Get 3D" button is disabled during generation and re-enabled on completion. There is no queue; rapid successive captures are not supported.vice camera and hand it off to Unity.
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
