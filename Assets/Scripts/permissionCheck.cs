using UnityEngine.Events;
using UnityEngine.Android;

namespace UnityEngine.XR.ARFoundation.Samples
{
    public class permissionCheck : MonoBehaviour
    {
        // Start is called once before the first execution of Update after the MonoBehaviour is created
        [SerializeField, Tooltip("The Android system permission to request when this component starts")]
        string m_permissionId;

        [SerializeField]
        UnityEvent<string> m_PermissionDenied;

        [SerializeField]
        UnityEvent<string> m_PermissionGranted;

        void Start()
        {
            if (!Permission.HasUserAuthorizedPermission(m_permissionId))
            {
                var callbacks = new PermissionCallbacks();
                callbacks.PermissionDenied += onPermissionDenied;
                callbacks.PermissionGranted += onPermissionGranted;

                Debug.Log($"Requesting permission for: " + m_permissionId);
            }
            else
            {
                Debug.Log($"Permission has permission for: " + m_permissionId);
                onPermissionGranted(m_permissionId);
            }
        }
        
        void onPermissionDenied(string permissionId)
        {
            Debug.LogWarning($"User denied permission for: {m_permissionId}");
            m_PermissionDenied.Invoke(permissionId);
        }
        void onPermissionGranted(string permissionId)
        {
            Debug.Log($"User granted permission for: {m_permissionId}");
            m_PermissionGranted.Invoke(permissionId);
        }
        
    }
}