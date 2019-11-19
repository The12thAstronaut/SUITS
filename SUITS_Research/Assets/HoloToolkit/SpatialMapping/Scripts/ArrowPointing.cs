using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowPointing : MonoBehaviour
{

    public GameObject Arrow;
    public GameObject Waypoint1;
    public GameObject Waypoint2;
    public GameObject Waypoint3;
    public GameObject Waypoint4;
    public GameObject Waypoint5;
    public GameObject Waypoint6;


    // Use this for initialization
    void Start () {
        // If there is more than one waypoint, use this code below:
            Waypoint1 = GameObject.Find("Waypoint_Location1");
           Waypoint2 = GameObject.Find("Waypoint_Location2");
           Waypoint3 = GameObject.Find("Waypoint_Location3");
           Waypoint4 = GameObject.Find("Waypoint_Location4");
           Waypoint5 = GameObject.Find("Waypoint_Location5");
           Waypoint6 = GameObject.Find("Waypoint_Location6");
    }
    
    // Update is called once per frame
    void Update () {
        Arrow.transform.LookAt(Waypoint1.transform);
    //    if (nextWaypoint = true)
    //    {
    //        Arrow.transform.LookAt(Waypoint2);
    //    }
      
    }
}
