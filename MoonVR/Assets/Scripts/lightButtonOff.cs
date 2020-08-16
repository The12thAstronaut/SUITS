using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lightButtonOff : MonoBehaviour
{
    public GameObject Light;

    void OnMouseOver()
    {
        /*
        if (Input.GetMouseButtonUp(0))
        {
            Light.GetComponent<Light>().enabled = true;
            Debug.Log("on");
        }
        */
        if (Input.GetMouseButtonUp(0))
        {
            Light.GetComponent<Light>().enabled = false;
            Debug.Log("off");
        }

    }
}