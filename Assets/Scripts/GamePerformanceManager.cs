using Google.Android.PerformanceTuner;
using System.Collections;
using UnityEngine;

public class GamePerformanceManager
{
    AndroidPerformanceTuner<FidelityParams, Annotation> tuner =
        new AndroidPerformanceTuner<FidelityParams, Annotation>();

    public IEnumerator Initialize()
    {
        yield return new WaitForEndOfFrame(); // Needed to make sure Vulkan backend is fully ready, after the first frame.
        ErrorCode startErrorCode = tuner.Start();
        Debug.Log("Android Performance Tuner started with code: " + startErrorCode);

        tuner.onReceiveUploadLog += request =>
        {
            Debug.Log("Telemetry uploaded with request name: " + request.name);
        };
    }
}