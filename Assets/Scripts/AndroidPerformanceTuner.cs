using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AndroidPerformanceTuner : MonoBehaviour
{

    // ...
    private GamePerformanceManager gamePerformanceManager = new GamePerformanceManager();
    
    // ...
    public IEnumerator Starting()
    {
        yield return StartCoroutine(gamePerformanceManager.Initialize());
    }

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Starting());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
