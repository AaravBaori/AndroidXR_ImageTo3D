using UnityEngine;
using Utilities.Audio;
using System;
using TMPro;
using UnityEngine.UI;

public class SpeechManager : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI transcriptText;
    [SerializeField] private Text status; // Your status UI element

    void Start()
    {
        // 1. Initialize the status text when the game starts
        if (status != null)
        {
            status.text = "Ready to record";
        }

        RecordingManager.OnClipRecorded += OnClipRecorded;
    }

    public void ToggleRecording()
    {
        if (RecordingManager.IsRecording)
        {
            RecordingManager.EndRecording();
            Debug.Log("[SpeechManager] Recording stopped.");

            // 2. Update status when they stop
            if (status != null) status.text = "Processing audio...";
        }
        else if (!RecordingManager.IsBusy)
        {
            // Note: Since you are using Utilities.Audio v3+, the async call usually requires an await or discarded task
            _ = RecordingManager.StartRecordingAsync<PCMEncoder>(
                cancellationToken: destroyCancellationToken);

            Debug.Log("[SpeechManager] Recording started.");

            // 3. Update status when they are actively recording
            if (status != null) status.text = "Recording... (Speak now)";
        }
    }

    private void OnClipRecorded(Tuple<string, AudioClip> recording)
    {
        var (_, clip) = recording;

        float[] samples = new float[clip.samples * clip.channels];
        clip.GetData(samples, 0);

        byte[] pcm = new byte[samples.Length * 2];
        for (int i = 0; i < samples.Length; i++)
        {
            short val = (short)(samples[i] * 32767f);
            pcm[i * 2] = (byte)(val & 0xFF);
            pcm[i * 2 + 1] = (byte)((val >> 8) & 0xFF);
        }

        byte[] wav = ToWav(pcm, clip.frequency, clip.channels);
        string base64Wav = Convert.ToBase64String(wav);

        using var falPluginClass = new AndroidJavaClass("com.falclient.FalClientPlugin");
        var instance = falPluginClass.CallStatic<AndroidJavaObject>("getInstance");
        instance.Call("transcribeAudio", base64Wav);
    }

    // Callback from Java via UnitySendMessage
    public void OnSpeechRecognized(string text)
    {
        Debug.Log("<color=green>[SpeechManager] Prompt: </color>" + text);

        


        transcriptText.text = text;

        // Pass to SAM3D here
    }

    private byte[] ToWav(byte[] pcm, int sampleRate, int channels)
    {
            
        
        using var ms = new System.IO.MemoryStream();
        using var w = new System.IO.BinaryWriter(ms);
        int byteRate = sampleRate * channels * 2;
        w.Write(System.Text.Encoding.ASCII.GetBytes("RIFF"));
        w.Write(36 + pcm.Length);
        w.Write(System.Text.Encoding.ASCII.GetBytes("WAVE"));
        w.Write(System.Text.Encoding.ASCII.GetBytes("fmt "));
        w.Write(16); w.Write((short)1);
        w.Write((short)channels); w.Write(sampleRate);
        w.Write(byteRate); w.Write((short)(channels * 2));
        w.Write((short)16);
        w.Write(System.Text.Encoding.ASCII.GetBytes("data"));
        w.Write(pcm.Length); w.Write(pcm);
        return ms.ToArray();
    }

    void OnDestroy() {
        RecordingManager.OnClipRecorded -= OnClipRecorded;
    }
}