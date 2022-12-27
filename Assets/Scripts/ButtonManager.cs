using Newtonsoft.Json.Bson;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour
{

    public RaycastScript ray;
    


    private void Start()
    {
        

    }
    public void Animate()
    {
        ray.animateButton = true;
    }
    public void ResetObjectState()
    {
        ray.resetButton = true;
    }
    public void TrashObject()
    {
        ray.destroyButton = true;
    }
    public void Home()
    {
        ray.homeButton = true;
    }
    
}
