using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonClick : MonoBehaviour
{
    // public GameObject Screens;

    // private ScreensManager _ScreensManager;

        public GameObject[] TextSizeVariations;
        public GameObject[] FontVariations;
        public GameObject[] DistanceVariations;

    // Start is called before the first frame update
    void Start()
    {
        //Make reference to Screen Manager Script Functions
    //     ScreensManager = FindObjectOfType<ScreensManager>();
    //     ScreensManager.NextTaskCommand();  

    }

    // Update is called once per frame
    void Update()
    {
        //Keyboard Commands for Switching between tasks (In Progress by Neil)
        if (Input.GetKeyDown(KeyCode.LeftBracket))
        {
            Debug.Log("Previous Task Button Pressed");

            //Execute Previous Task Command
            PreviousTaskCommand();
        }

        if (Input.GetKeyDown(KeyCode.RightBracket))
        {
            Debug.Log("Next Task Button Pressed");

            //Execute Next Task Command
            NextTaskCommand();
        } 
    }



        public void NextTaskCommand()
        {
            Debug.Log("NEXT TASK COMMAND ACTIVATED");
            for(int i = 0; i<=TextSizeVariations.Length; i++){
                //If you reach the end of the array, don't increment anymore
                if(i == 48) 
                {
                    Debug.Log("Reached End of Array");
                    break;
                }
                else if(TextSizeVariations[i].activeSelf.Equals(true))
                {
                    TextSizeVariations[i].gameObject.SetActive(false);
                    TextSizeVariations[i+1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=FontVariations.Length; i++){
                if(FontVariations[i].activeSelf.Equals(true)){
                    FontVariations[i].gameObject.SetActive(false);
                    FontVariations[i+1].gameObject.SetActive(true);
                    break;
                }
            }

        }

        public void PreviousTaskCommand()
        {
            Debug.Log("PREVIOUS TASK COMMAND ACTIVATED");
            for(int i = 0; i<=TextSizeVariations.Length; i++){
                // if(i == 0) 
                // {
                //     Debug.Log("Reached Start of Array");
                //     break;
                // }
                if(TextSizeVariations[i].activeSelf.Equals(true)){
                    TextSizeVariations[i].gameObject.SetActive(false);
                    TextSizeVariations[i-1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=FontVariations.Length; i++){
                if(FontVariations[i].activeSelf.Equals(true)){
                    FontVariations[i].gameObject.SetActive(false);
                    FontVariations[i-1].gameObject.SetActive(true);
                    break;
                }
            }

        }
}
