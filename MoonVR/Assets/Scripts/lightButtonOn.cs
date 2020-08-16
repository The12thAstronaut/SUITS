using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class lightButtonOn : MonoBehaviour
{
    public GameObject Light;

    void OnMouseOver()
    {

        if (Input.GetMouseButtonUp(0))
        {
            Light.GetComponent<Light>().enabled = true;
            Debug.Log("on");
        }
        /*
        if (Input.GetMouseButtonUp(0)) 
        {
            Light.GetComponent<Light>().enabled = false;
            Debug.Log("off");
        }
        */
    }
} 