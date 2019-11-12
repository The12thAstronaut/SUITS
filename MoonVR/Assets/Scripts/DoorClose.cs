using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorClose : MonoBehaviour
{
    public GameObject Panel;
    public bool panelIsClosing;

    // Update is called once per frame
    void Update()
    {
        if (panelIsClosing == true)
        {
            Panel.transform.Translate(Vector3.down * Time.deltaTime * 5);
        }
        if (Panel.transform.position.y < 1.2f)
        {
            panelIsClosing = false;
        }
    }
    void OnMouseDown() // should detect when clicking on collider with mouse
    {
        panelIsClosing = true;
    }
}
