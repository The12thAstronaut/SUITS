using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class ClientAPI : MonoBehaviour
{
    public string url;
    public TelemetryStream telemetryStream;

    void Start()
    {
        StartCoroutine(Get(url));
    }

    public IEnumerator Get(string url)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError)
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    // handle the result
                    var result = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
                    result = "{\"result\":" + result + "}";
                    var data = JsonHelper.FromJson<Suit>(result);

                    //telemetryStream.DisplayTelemData(data.heart_bpm, data.p_sub, data.p_suit);

                    //foreach (var item in data)
                    //{
                        //Debug.Log(item.heart_bpm);
                        //break;

                    //}

                    //Debug.Log("Heart rate is " + suit.bpm);
                    //Debug.Log("Pressure sub is " + suit.psub);
                    //Debug.Log("Suit Pressure is " + suit.psuit);
                    //Debug.Log("Temperature Sub is " + suit.tsub);
                    //Debug.Log("Velocity of fan is " + suit.vfan);
                    //Debug.Log("Rate of oxygen is " + suit.rox);
                    //Debug.Log("Battery Capacity is " + suit.batcap);
                    //Debug.Log("Pressure of gaseous water is " + suit.gaseous);
                    //Debug.Log("Pressure of liquid water is " + suit.liquid);
                    //Debug.Log("Pressure of sop is " + suit.gaseous);

                }
                else
                {
                    //handle the problem
                    Debug.Log("Error! data couldn't get.");
                }
            }
        }

    }
}