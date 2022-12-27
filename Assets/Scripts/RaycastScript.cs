
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class RaycastScript : MonoBehaviour
{
    //var to spawn object
    public GameObject spawnPrefab;
    GameObject spawnedObject;
    bool objectSpawned;
    ARRaycastManager arrayManager;
    //var to animate object
    Animation animate;
    //var to manage the on click button
    public bool animateButton;
    public bool resetButton;
    public bool destroyButton;
    public bool homeButton;
    //raycast setting
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    [SerializeField]
    //private Camera arCamera;
    //public CanvasGroup triviaCanvas;
    //var to safe spawnedobject local variables
    Vector3 spawnedPosition;
    Quaternion spawnedRotation;
    Vector3 spawnedScale;
    AudioSource animAudio;

    public GameObject background;
    public CanvasGroup canvasGroup;
    //public bool canvaState;
    public float fadeTime = 2f;
    private int levelToLoad;
    // Start is called before the first frame update
    void Start()
    {
        objectSpawned = false;
        animateButton = false;
        resetButton = false;
        destroyButton = false;
        homeButton = false;
        arrayManager = GetComponent<ARRaycastManager>();
        LeanTween.alphaCanvas(canvasGroup, 0, fadeTime);
        //canvaState = false;
    }

    // Update is called once per frame
    public void Update()
    {
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (arrayManager.Raycast(touch.position, hits, TrackableType.PlaneWithinPolygon))
            {
                var hitpose = hits[0].pose;
                if (!objectSpawned)
                {
                    
                    spawnedObject = Instantiate(spawnPrefab, hitpose.position, hitpose.rotation);
                    Entrance();
                    animate = spawnedObject.transform.GetChild(0).GetComponent<Animation>();//find reference to animation inside spawnedobject
                    animAudio = spawnedObject.transform.GetChild(0).GetComponent<AudioSource>();
                    spawnedPosition = spawnedObject.transform.GetChild(0).position;
                    spawnedRotation = spawnedObject.transform.GetChild(0).rotation;
                    spawnedScale = spawnedObject.transform.GetChild(0).localScale;
                    objectSpawned = true;
                }
                /*else
                {
                    triviaCanvas = spawnedObject.transform.GetChild(2).GetComponent<CanvasGroup>();
                    Ray ray = arCamera.ScreenPointToRay(touch.position);
                    RaycastHit hitObject;
                    if(Physics.Raycast(ray, out hitObject))
                    {
                        
                        if(canvaState == false)
                        {
                            LeanTween.alphaCanvas(triviaCanvas, 1, 3f);
                            canvaState = true; 
                        }
                        else
                        {
                            LeanTween.alphaCanvas(triviaCanvas, 0, 3f);
                            canvaState = false;
                        }
                    }
                }*/
                
                
            }
        }
        if (animateButton == true)//button clicked state
        {
            animate.Play("HelicopterAnimation");
            animateButton = false;
        }
        if (resetButton == true)
        {
            if (animate.isPlaying)
            {
                animate.Stop();
                animAudio.Stop();
            }

            spawnedObject.transform.GetChild(0).position = spawnedPosition;
            spawnedObject.transform.GetChild(0).rotation = spawnedRotation;
            spawnedObject.transform.GetChild(0).localScale = spawnedScale;
            resetButton = false;
        }
        if (destroyButton == true)
        {
            if (animate.isPlaying)
            {
                animate.Stop();
                animAudio.Stop();
            }
            Object.Destroy(spawnedObject);
            destroyButton = false;
            objectSpawned = false;
        }
        if (homeButton == true)
        {
            FadeInOutToLevel(0);
            homeButton = false;
        }
    }
    public void Entrance()
    {
        LeanTween.scale(spawnedObject.transform.GetChild(0).gameObject, new Vector3(10f, 10f, 10f), 2f).setEase(LeanTweenType.easeOutQuad);
        LeanTween.scale(spawnedObject.transform.GetChild(0).gameObject, new Vector3(1f, 1f, 1f), 2f).setEase(LeanTweenType.easeOutQuad);
    }
    public void FadeInOutToLevel(int levelIndex)
    {
        levelToLoad = levelIndex;
        LeanTween.alphaCanvas(canvasGroup, 1, fadeTime).setOnComplete(OnFadeComplete);

    }
    public void OnFadeComplete()
    {
        SceneManager.LoadScene(levelToLoad);
    }
}
