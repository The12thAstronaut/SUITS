using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingWaypoint : MonoBehaviour
{
    Vector3 TempPos;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        TempPos = transform.position;
        TempPos.x = 4;
        TempPos.y = 1;
        TempPos.z = 7;

        transform.position = TempPos;
    }
}
