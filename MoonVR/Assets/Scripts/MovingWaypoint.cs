using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using LitJson;

public class MovingWaypoint : MonoBehaviour
{
    string jsonString;
    JsonData itemData;
    Vector3 TempPos;

    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {
        jsonString = File.ReadAllText(Application.dataPath + "/JSONFiles/HjsonData.json"); //Adds all text from json file to a string
        itemData = JsonMapper.ToObject(jsonString);

        TempPos = transform.position;

        float json_x = (float)itemData["x"];
        float json_y = (float)itemData["y"];
        float json_z = (float)itemData["z"];

        TempPos.x = json_x;
        TempPos.y = json_y;
        TempPos.z = json_z;

        transform.position = TempPos;
    }
}
