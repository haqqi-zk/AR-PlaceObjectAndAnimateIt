using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeviceBackButton : MonoBehaviour
{
    public AudioSource audi;
    
    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            audi.Play();
            Application.Quit();
        }
    }
}
