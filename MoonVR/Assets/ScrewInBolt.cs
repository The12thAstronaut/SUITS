using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrewInBolt : MonoBehaviour
{
    public float speed = 0.1f;

    // Start is called before the first frame update
    void Start()
    {
        

    }

    // Update is called once per frame
    void OnCollisionEnter(Collision col)
    {
        if(col.gameObject.tag == "PGT")
        {
            float m_distanceTraveled = 0f;
                if (m_distanceTraveled < 100f)
                {
                    Vector3 oldPosition = transform.position;
                    transform.Translate(0, 0, 1 * Time.deltaTime);
                    m_distanceTraveled += Vector3.Distance(oldPosition, transform.position);
                }
          
        }
    }
}
