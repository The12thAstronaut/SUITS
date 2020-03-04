using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Interpolation between points with a Catmull-Rom spline
public class Catmull : MonoBehaviour
{
    public Transform[] controlPointsList;
    public LineRenderer line;
    public int resolution = 30; 

    private Vector3[] points;
    void Start()
    {
        points = new Vector3[resolution * (controlPointsList.Length - 3)];
        for (int i = 0; i < controlPointsList.Length - 3; i++)
        {
            for (int t = 0; t < resolution; t++)
            {
                points[t+(i*resolution)] = GetCatmullRomPosition(t / (float)resolution,
                            controlPointsList[i + 0].position,
                            controlPointsList[i + 1].position,
                            controlPointsList[i + 2].position,
                            controlPointsList[i + 3].position);
            }
        }
        line.positionCount = resolution * (controlPointsList.Length - 3);
        line.SetPositions(points);
    }

    //Returns a position between 4 Vector3 with Catmull-Rom spline algorithm
    //http://www.iquilezles.org/www/articles/minispline/minispline.htm
    Vector3 GetCatmullRomPosition(float t, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3)
    {
        //The coefficients of the cubic polynomial (except the 0.5f * which I added later for performance)
        Vector3 a = 2f * p1;
        Vector3 b = p2 - p0;
        Vector3 c = 2f * p0 - 5f * p1 + 4f * p2 - p3;
        Vector3 d = -p0 + 3f * p1 - 3f * p2 + p3;

        //The cubic polynomial: a + b * t + c * t^2 + d * t^3
        Vector3 pos = 0.5f * (a + (b * t) + (c * t * t) + (d * t * t * t));

        return pos;
    }
}