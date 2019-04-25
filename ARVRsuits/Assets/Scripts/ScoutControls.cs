using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Attach this script to an empty gameobject for it to work!
public class ScoutControls : MonoBehaviour
{

   // Array of all Layers
   public GameObject[] AllLayers;
   public GameObject[] CurrentLayer;
   public GameObject[] LastActive;


    public GameObject[] Layer1;
    public GameObject[] Layer2;
    public GameObject[] Layer3;
    public GameObject[] Layer4;
    public GameObject[] LayerBack;


    private Button layer1Button;
    private Button layer2Button;
    private Button layer3Button;
    private Button layer4Button;
    private Button backlayerButton;



    public bool[] whichLayer;
    // 0001 means Layer 1
    // 0010 means Layer 2
    // 0100 means Layer 3
    // 1000 means Layer 4

    private bool isLayer1;
    private bool isLayer2;
    private bool isLayer3;
    private bool isLayer4;

    // Start is called before the first frame update
    void Start()
    {
        //Find Objects with "Layer#" Tag
        //Make sure all Buttons are active on initialization
            //Then Disable the layers you don't need
        Layer1 = GameObject.FindGameObjectsWithTag("Layer1");
        Layer2 = GameObject.FindGameObjectsWithTag("Layer2");
        Layer3 = GameObject.FindGameObjectsWithTag("Layer3");
        LayerBack = GameObject.FindGameObjectsWithTag("backlayer");

        // Layer4 = GameObject.FindGameObjectsWithTag("Layer4");

        //Initialize Boolean Variables to default layer setup
        isLayer1 = true;
        isLayer2 = false;
        isLayer3 = false;
        isLayer4 = false;

        // //Initialize the boolean array
        whichLayer = new bool[4];
        whichLayer[0] = isLayer1;
        whichLayer[1] = isLayer2;
        whichLayer[2] = isLayer3;

        // Start Button Listeners
        // This constantly listens to see if a button is clicked
        //     and executes the function named within the () of AddListener()
        layer1Button = Layer1[0].GetComponent<Button>();
        layer1Button.onClick.AddListener(layer1Clicked);

        layer2Button = Layer2[0].GetComponent<Button>();
        layer2Button.onClick.AddListener(layer2Clicked);

        layer3Button = Layer3[0].GetComponent<Button>();
        layer3Button.onClick.AddListener(layer3Clicked);

        layer3Button = LayerBack[0].GetComponent<Button>();
        layer3Button.onClick.AddListener(backlayerClicked);

        //Add a Listener for each layer

        //Print out Button Names
         for(int i = 0; i < Layer1.Length; i++)
        {
            Debug.Log("Button Name "+i+" is "+Layer1[i].name);
        }

        //Hide all Layer 2 Buttons
        for(int j = 0; j < Layer2.Length; j++)
            {
            Layer2[j].SetActive(false);
            }

        //Hide all Layer 3 Buttons
        for(int j = 0; j < Layer3.Length; j++)
            {
            Layer3[j].SetActive(false);
            }
    }

    //This function is called on button click
    void layer1Clicked()
    {
        Debug.Log("Layer 1 Button Clicked!");
        whichLayer[0] = false;
            for(int j = 0; j < Layer1.Length; j++)

        {
        Layer1[j].SetActive(false);
        }

        //Specify we are on layer 2 now
        whichLayer[1] = true;
            for(int j = 0; j < Layer2.Length; j++)
        {
        Layer2[j].SetActive(true);
        }
    }

    void layer2Clicked()
    {
        Debug.Log("Layer 2 Button Clicked!");
        whichLayer[1] = false;
            for(int j = 0; j < Layer2.Length; j++)
        {
        Layer2[j].SetActive(false);
        }
        whichLayer[2] = true;
            for(int j = 0; j < Layer3.Length; j++)
        {
        Layer3[j].SetActive(true);
        }
    }

    void layer3Clicked()
    {
        Debug.Log("Layer 3 Button Clicked!");
        isLayer3 = false;
        isLayer4 = true;
    }
    //Add a layer4Clicked function and however many is needed!

   void backlayerClicked()
   {
        //Go back to previous layer defined by lastActive string
        //tag.Contains(string name) for sorting
        //Set Last Game Object active based on whichlayer variable
        //Need to convert which layer to an index

        // LastActive = AllLayers[whichLayer]
        // LastActive.SetActive(true);

        //Change current button to disappear
        // CurrentLayer.SetActive(false);

        //Hide all Layer 3 Buttons
        if (whichLayer[2] == true){
            for(int j = 0; j < Layer2.Length; j++)
                {
                Layer2[j].SetActive(true);
                }


            for(int j = 0; j < Layer3.Length; j++)
                {
                Layer3[j].SetActive(false);
                }
        }

        if (whichLayer[1] == true){
            for(int j = 0; j < Layer1.Length; j++)
                {
                Layer1[j].SetActive(true);
                }


            for(int j = 0; j < Layer2.Length; j++)
                {
                Layer2[j].SetActive(false);
                }
        }

        Debug.Log("Back button clicked!");
        
   }



    // Update is called once per frame
    void Update()
    {

        //If Back button is pressed within layer 2, go back to layer 1
            //For each button in the current layer, change setActive value to 0
                //  for(int j = 0; j < Layer2.Length; j++)
                //  {
                //     Layer2[j].SetActive(false);
                //  }
            //For each button in the higher level layer, change setActive value to 1
                //  for(int k = 0; k < Layer1.Length; k++)
                //  {
                //     Layer1[j].SetActive(true);
                //  }
    }
}
