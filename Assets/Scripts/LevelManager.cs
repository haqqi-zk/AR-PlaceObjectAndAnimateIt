using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    public GameObject background;
    public CanvasGroup canvasGroup;
    public float fadeTime = 2f;
    private int levelToLoad;

    public bool play;

    public static LevelManager instance;
    
    
    private void Start()
    {
        play = false;
        LeanTween.alphaCanvas(canvasGroup, 0, fadeTime);
    }
    private void Update()
    {
        if(play == true)
        {
            FadeInOutToLevel(1);
            play = false;
        }
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
