using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class TweenManager : MonoBehaviour
{

    [SerializeField]
    public GameObject playButton, homeButton, resetButton, trashButton;
    
    
    public void PlayButton()
    {
        LeanTween.rotateAround(playButton, Vector3.forward, -360, 0.2f); 
        
    }
    public void HomeButton()
    {
        LeanTween.rotateAround(homeButton, Vector3.forward, -360, 0.2f);
    }
    public void ResetButton()
    {
        LeanTween.rotateAround(resetButton, Vector3.forward, -360, 0.2f);
    }
    public void TrashButton()
    {
        LeanTween.rotateAround(trashButton, Vector3.forward, -360, 0.2f);
    }
    
}
