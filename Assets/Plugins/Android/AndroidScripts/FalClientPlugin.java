package com.falclient;

import com.google.gson.JsonObject;
import com.unity3d.player.UnityPlayer;

import java.util.Map;
import java.util.concurrent.CompletableFuture;
import android.util.Log;

import ai.fal.client.AsyncFalClient;
import ai.fal.client.Output;
import ai.fal.client.SubscribeOptions;
import ai.fal.client.queue.QueueStatus;

// 1. ADD THESE TWO NEW IMPORTS
import ai.fal.client.ClientConfig;
import ai.fal.client.CredentialsResolver;

public class FalClientPlugin {
    private AsyncFalClient fal;
    private static FalClientPlugin instance;

    private Map<String, Object> input;
    private String prompt;

    public static FalClientPlugin getInstance() {
        if (instance == null){
            instance = new FalClientPlugin();
            instance.initializeWithKey("ec7ecf0c-9fbd-40bf-9a92-1294c25df369:1d165bbeddbf31cf2a38fb0362b2260f");
        }
        return instance;
    }
    public static String getApiKey(){
        return "ec7ecf0c-9fbd-40bf-9a92-1294c25df369:1d165bbeddbf31cf2a38fb0362b2260f";
    }

    // 2. REPLACE YOUR ENTIRE initializeWithKey METHOD WITH THIS
    public void initializeWithKey(String apiKey) {
        System.out.println("Initializing API key via official CredentialsResolver");
        
        try {
            // Build the config using the official fromApiKey method
            ClientConfig config = ClientConfig.withCredentials(CredentialsResolver.fromApiKey(apiKey));
            
            // Initialize the async client using the config
            this.fal = AsyncFalClient.withConfig(config);
            
            System.out.println("Client successfully initialized with direct credentials!");
            
        } catch (Exception e) {
            System.err.println("Failed to initialize client: " + e.getMessage());
        }
    }

    public void mapInput(String imageUrl) {
        this.input = Map.of(
                "image_url", imageUrl,
                "prompt", prompt,
                "detection_threshold", 0.3 // Lowers the strictness (default is usually higher)
        );
    }

        public boolean mapInputFromFile(String path) {
        try {
            java.io.File file = new java.io.File(path);
            
            // Validation handled in Java
            if (!file.exists() || file.length() < 1000) {
                Log.e("FalPlugin", "File invalid or too small");
                return false;
            }

            byte[] bytes = java.nio.file.Files.readAllBytes(file.toPath());
            String base64 = android.util.Base64.encodeToString(bytes, android.util.Base64.NO_WRAP);
            
            // Map the input internally
            mapInput("data:image/jpeg;base64," + base64);
            return true; 
        } catch (Exception e) {
            Log.e("FalPlugin", "Java processing error: " + e.getMessage());
            return false;
        }
    } 

    public void sendInputAndMonitorLog(){
        CompletableFuture<Output<JsonObject>> futureResult = fal.subscribe("fal-ai/sam-3/3d-objects",
                SubscribeOptions.<JsonObject>builder()
                        .input(input)
                        .logs(true)
                        .resultType(JsonObject.class)
                        .onQueueUpdate(update -> {
                            if (update instanceof QueueStatus.InProgress) {
                                System.out.println("Processing: " + ((QueueStatus.InProgress) update).getLogs());
                            }
                        })
                        .build()
        );

        futureResult.thenAccept(result -> {
            System.out.println("Job Completed! Result: " + result.toString());
            JsonObject data = result.getData().deepCopy();

            String glbUrl = data.getAsJsonObject("model_glb")
                    .get("url")
                    .getAsString();
            System.out.println("GLB URL Generated: " + glbUrl);

            UnityPlayer.UnitySendMessage(
                    "FalClient",
                    "OnModelGenerated",
                    glbUrl
            );
        }).exceptionally(ex -> {
            System.err.println("Job Failed: " + ex.getMessage());
            return null;
        });
    }

    public void transcribeAudio(String base64Wav) {
        try {
            byte[] wavBytes = android.util.Base64.decode(base64Wav, android.util.Base64.NO_WRAP);

            // Step 1 — Upload WAV via fal storage REST API directly
            java.net.URL uploadUrl = new java.net.URL("https://rest.fal.ai/storage/upload/initiate");
            java.net.HttpURLConnection uploadConn = (java.net.HttpURLConnection) uploadUrl.openConnection();
            uploadConn.setRequestMethod("POST");
            uploadConn.setRequestProperty("Authorization", "Key " + getApiKey());
            uploadConn.setRequestProperty("Content-Type", "application/json");
            uploadConn.setDoOutput(true);
            uploadConn.getOutputStream().write(
                "{\"content_type\":\"audio/wav\",\"file_name\":\"audio.wav\"}".getBytes()
            );

            java.io.InputStream is = uploadConn.getInputStream();
            String initiateResponse = new String(is.readAllBytes());
            is.close();

            // Parse upload_url and file_url from response
            com.google.gson.JsonObject initiateJson = 
                new com.google.gson.JsonParser().parse(initiateResponse).getAsJsonObject();
            String putUrl = initiateJson.get("upload_url").getAsString();
            String fileUrl = initiateJson.get("file_url").getAsString();

            // Step 2 — PUT the WAV bytes
            java.net.URL putEndpoint = new java.net.URL(putUrl);
            java.net.HttpURLConnection putConn = (java.net.HttpURLConnection) putEndpoint.openConnection();
            putConn.setRequestMethod("PUT");
            putConn.setRequestProperty("Content-Type", "audio/wav");
            putConn.setDoOutput(true);
            putConn.getOutputStream().write(wavBytes);
            putConn.getResponseCode(); // wait for completion
            putConn.disconnect();

            Log.d("FalPlugin", "Audio uploaded: " + fileUrl);

            // Step 3 — Call fal-ai/whisper with the file URL
            Map<String, Object> whisperInput = Map.of(
                "audio_url", fileUrl,
                "task", "transcribe",
                "language", "en"
            );

            fal.subscribe("fal-ai/whisper",
                SubscribeOptions.<JsonObject>builder()
                    .input(whisperInput)
                    .resultType(JsonObject.class)
                    .build()
            ).thenAccept(result -> {
                String transcript = result.getData().get("text").getAsString();
                prompt = transcript;
                Log.d("FalPlugin", "Transcript: " + transcript);
                UnityPlayer.UnitySendMessage("Recorder", "OnSpeechRecognized", transcript);
            }).exceptionally(ex -> {
                Log.e("FalPlugin", "Whisper failed: " + ex.getMessage());
                UnityPlayer.UnitySendMessage("Recorder", "OnSpeechRecognized", "ERROR: " + ex.getMessage());
                return null;
            });

        } catch (Exception e) {
            Log.e("FalPlugin", "transcribeAudio error: " + e.getMessage());
        }
    }
}