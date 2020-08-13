using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonsScript : MonoBehaviour
{
    public Material mat;
    public GameObject cube;
    void OnMouseOver()
    {
        if (Input.GetMouseButtonUp(0))
        {
            cube.GetComponent<Renderer>().material = mat;
        }
    }
}
