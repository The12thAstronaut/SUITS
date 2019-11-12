using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorOpen : MonoBehaviour
{
    public GameObject Panel;
    public bool panelIsOpening;

    // Update is called once per frame
    void Update()
    {
        if (panelIsOpening==true)
        {
            Panel.transform.Translate(Vector3.up * Time.deltaTime * 5);
        }
        if (Panel.transform.position.y > 2f)
        {
            panelIsOpening = false;
        }
    }
    void OnMouseDown() // should detect when clicking on collider with mouse
    {
        panelIsOpening = true;
    }
}
