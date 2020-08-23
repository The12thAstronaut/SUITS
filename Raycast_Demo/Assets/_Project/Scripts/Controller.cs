using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Controller : MonoBehaviour
{
    public GameObject instructions_button1;
    public GameObject instructions_button2;
    private void OnTriggerStay(Collider other)
    {
        if(other.tag == "Button")
        {
            instructions_button1.SetActive(true);
            //instructions_button2.SetActive(true);
        }
    }
    
    
    private void OnTriggerExit(Collider other)
    {
        if(other.tag == "Button")
        {
            instructions_button1.SetActive(false);
            //instructions_button2.SetActive(false);
        }
    }
    
}
