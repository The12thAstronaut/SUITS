using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TelemetryStream : MonoBehaviour
{
    public Text bpmText;
    public Text psubText;
    public Text psuitText;

    public void DisplayTelemData(string health_bpm, string p_sub, string p_suit)
    {
        bpmText.text = health_bpm;
        psubText.text = p_sub;
        psuitText.text = p_suit;

    }
}
