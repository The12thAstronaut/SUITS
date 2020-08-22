using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    public GameObject instructions;
    private void OnTriggerStay(Collider other)
    {
        if(other.tag == "Panel")
        {
            instructions.SetActive(true);
            Animator anim ;
            anim = other.GetComponent<Animator>();
            if(Input.GetKeyDown("1"))
            {
                anim.SetTrigger("Open/Close");
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.tag == "Panel")
        {
            instructions.SetActive(false);
        }
    }

}
