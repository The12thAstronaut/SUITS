using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class MovingWaypoint : MonoBehaviour
{
    string jsonString;
    Vector3 TempPos;

    // Start is called before the first frame update
    void Start()
    {
        jsonString = File.ReadAllText(Application.dataPath + "/JSONFiles/HjsonData.json"); //read all data into jsonString
        HjsonData Suit = JsonUtility.FromJson<HjsonData>(jsonString); //put all data into variable suit

        // transform position of waypoint based on the json data values for x,y,z
        TempPos = transform.position;

        TempPos.x = Suit.x;
        TempPos.y = Suit.y;
        TempPos.z = Suit.z;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
