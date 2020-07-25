using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Toolbelt : MonoBehaviour
{

    //Make the PGT variable public so the PGT game object can be attached through the Unity Editor
    public GameObject PGT;
    bool toggleBool = true;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            //Toggle the PGT game object on and off if the keyboard E button is pressed
            toggleBool = !toggleBool;
            PGT.SetActive(toggleBool);

            if(toggleBool)
            {            
                print("PGT toggled OFF");
            }
            else
            {
            print("PGT toggled ON");
            }
        }    
    }
}
