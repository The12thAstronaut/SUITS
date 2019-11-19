using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonClick : MonoBehaviour
{

    ScreensManager ScreensManager;
    // Start is called before the first frame update
    void Start()
    {
        //Make reference to Screen Manager Script Functions
        ScreensManager = FindObjectOfType<ScreensManager>();
        ScreensManager.NextTaskCommand();  

    }

    // Update is called once per frame
    void Update()
    {
        //Keyboard Commands for Switching between tasks (In Progress by Neil)
        if (Input.GetKeyDown(KeyCode.LeftBracket))
        {
            Debug.Log("Previous Task Button Pressed");
        }

        if (Input.GetKeyDown(KeyCode.RightBracket))
        {
            Debug.Log("Next Task Button Pressed");
        } 
    }
}
