using System.Threading.Tasks;
using GLTFast;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.XR.Interaction.Toolkit.Interactables;

public class FalClientBridge : MonoBehaviour
{
    [Header("UI References")]
    [SerializeField] private Button get3DButton;
    [SerializeField] private GameObject intialSpawnPos;


    private string dataUri;
    private AndroidJavaObject falPlugin;

    // --- NEW: Store the original spawn location ---
    private Vector3 originalSpawnPosition;
    private Quaternion originalSpawnRotation;

    void Start()
    {
        // Record where the gltfAsset is sitting right as the app starts
        if (intialSpawnPos != null)
        {
            originalSpawnPosition = intialSpawnPos.transform.position;
            originalSpawnRotation = intialSpawnPos.transform.rotation;
        }

        using (AndroidJavaClass falPluginClass = new AndroidJavaClass("com.falclient.FalClientPlugin"))
        {
            falPlugin = falPluginClass.CallStatic<AndroidJavaObject>("getInstance");

            if (falPlugin != null)
            {
                // Reminder: Keep this secure in your final build!
                string apiKey = "ec7ecf0c-9fbd-40bf-9a92-1294c25df369:1d165bbeddbf31cf2a38fb0362b2260f";
                falPlugin.Call("initializeWithKey", apiKey);
            }

            if (get3DButton != null)
            {
                get3DButton.onClick.RemoveAllListeners();
                get3DButton.onClick.AddListener(OnGet3DButtonClicked);
                get3DButton.interactable = false;
            }
        }
    }

    public void ProcessLocalImage(string localFilePath)
    {
        if (falPlugin != null)
        {
            bool success = falPlugin.Call<bool>("mapInputFromFile", localFilePath);

            if (success)
            {
                get3DButton.interactable = true;
            }
            else
            {
                get3DButton.interactable = false;
            }
        }
    }

    void OnGet3DButtonClicked()
    {
        get3DButton.interactable = false;
        falPlugin.Call("sendInputAndMonitorLog");
    }

    public async void OnModelGenerated(string glbUrl)
    {
        // 1. Create a brand new empty GameObject in the scene
        GameObject newModelContainer = new GameObject("Generated_3D_Model_" + System.DateTime.Now.Ticks);

        // 2. Set its spawn position to your original designated spot
        newModelContainer.transform.position = originalSpawnPosition;
        newModelContainer.transform.rotation = originalSpawnRotation;

        // CRITICAL: Force uniform scale so it doesn't skew!
        newModelContainer.transform.localScale = Vector3.one;

        // 3. Add the glTFast loader component dynamically to this new object
        GltfAsset dynamicGltfAsset = newModelContainer.AddComponent<GltfAsset>();

        Debug.Log($"Loading new model from: {glbUrl}");

        // 4. Load the model into this specific new container
        bool success = await dynamicGltfAsset.Load(glbUrl);

        if (success)
        {
            Debug.Log("New model loaded! Making it grabbable...");
            // 5. Apply your physics and XR grab scripts to this new container
            MakeModelGrabbable(newModelContainer);
        }
        else
        {
            Debug.LogError("glTFast failed to load the model.");
            // Clean up the empty GameObject if the download/load fails
            Destroy(newModelContainer);
        }

        // Re-enable the button so you can make another one
        get3DButton.interactable = true;
    }

    private void MakeModelGrabbable(GameObject targetObject)
    {
        Rigidbody rb = targetObject.GetComponent<Rigidbody>();
        if (rb == null) rb = targetObject.AddComponent<Rigidbody>();

        rb.useGravity = false;
        rb.isKinematic = false;

        // --- THE FIX FOR DRIFTING ---
        // Add "air resistance" so it stops moving quickly if thrown in zero gravity
        rb.linearDamping = 5f;
        rb.angularDamping = 5f;

        BoxCollider collider = targetObject.GetComponent<BoxCollider>();
        if (collider == null) collider = targetObject.AddComponent<BoxCollider>();
        FitBoxCollider(targetObject, collider);

        XRGrabInteractable grabComponent = targetObject.GetComponent<XRGrabInteractable>();
        if (grabComponent == null) grabComponent = targetObject.AddComponent<XRGrabInteractable>();

        grabComponent.movementType = XRBaseInteractable.MovementType.Kinematic;

        // Optional Alternative: Completely prevent the object from being "thrown"
        // grabComponent.throwOnDetach = false; 
    }

    private void FitBoxCollider(GameObject target, BoxCollider collider)
    {
        Renderer[] renderers = target.GetComponentsInChildren<Renderer>();
        if (renderers.Length == 0) return;

        Bounds bounds = renderers[0].bounds;

        for (int i = 1; i < renderers.Length; i++)
        {
            bounds.Encapsulate(renderers[i].bounds);
        }

        collider.center = target.transform.InverseTransformPoint(bounds.center);
        collider.size = bounds.size;
    }
}