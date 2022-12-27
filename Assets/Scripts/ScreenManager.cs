using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Screen.autorotateToLandscapeRight = true;

        Screen.autorotateToLandscapeLeft = true;

        Screen.orientation = ScreenOrientation.AutoRotation;
    }

    
}
