using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIHomeManager : MonoBehaviour
{
    [SerializeField]
    public GameObject ARSceneButton, Title;
    public LevelManager level;
    // Start is called before the first frame update
    void Start()
    {
        LeanTween.rotateAround(ARSceneButton, Vector3.forward, -1080, 3f);
        LeanTween.scale(ARSceneButton, new Vector3(2f, 2f, 2f), 2f).setEase(LeanTweenType.easeInOutBack);
        LeanTween.moveLocal(ARSceneButton, new Vector3(0f, -63f, 0), 3f).setEase(LeanTweenType.easeOutElastic);

        LeanTween.rotateAround(Title, Vector3.forward, 720, 3f);
        LeanTween.scale(Title, new Vector3(2f, 2f, 2f), 3f).setEase(LeanTweenType.easeInOutBack);
        LeanTween.moveLocal(Title, new Vector3(0f, 118f, 0), 3f).setEase(LeanTweenType.easeOutElastic);
    }

    
    public void StartButton()
    {
        LeanTween.rotateAround(ARSceneButton, Vector3.forward, -360, 0.5f);
        LeanTween.scale(ARSceneButton, new Vector3(3f, 3f, 3f), 0.5f).setEase(LeanTweenType.easeInOutBack);
        LeanTween.scale(ARSceneButton, new Vector3(2f, 2f, 2f), 0.5f).setEase(LeanTweenType.easeInOutBack);
        level.play = true;
    }
}