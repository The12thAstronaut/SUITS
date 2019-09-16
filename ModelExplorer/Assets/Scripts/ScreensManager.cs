// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using HoloToolkit.Unity;
using UnityEngine;

namespace Academy
{
    public class ScreensManager : Singleton<AstronautManager>
    {
        private float expandAnimationCompletionTime;

        public GameObject screen1;
        public GameObject screen2;
        public GameObject screen3;
        public GameObject screen4;
        public GameObject screen5;
        public GameObject screen6;
        public GameObject screen7;
        public GameObject screen8;
        public GameObject screen9;
        public GameObject screen10;
        public GameObject screen11;
        public GameObject screen12;
        
        //Show Hide Screen Reference
        public GameObject ShowText;
        public Vector4 CurrentColor;

        public GameObject[] IVATasks;
        public GameObject[] TranslationTasks;
        public GameObject[] EVATasks;
        public GameObject[] TASK4Tasks;


        
        //public GameObject[] 
        // Store a bool for whether our astronaut model is expanded or not.
        private bool isModelExpanding = false;

        private void Update()
        {
            if (isModelExpanding && Time.realtimeSinceStartup >= expandAnimationCompletionTime)
            {
                isModelExpanding = false;

                Animator[] expandedAnimators = ExpandModel.Instance.ExpandedModel.GetComponentsInChildren<Animator>();
                foreach (Animator animator in expandedAnimators)
                {
                    animator.enabled = false;
                }
            }

            //Code from Neil and Leah to change text color on keyword recognition (in progress)
            // if (Input.GetKeyDown (Keycode.A))
            // {
            //     CurrentColor = ShowText.GetComponent<TextMesh>().Color;
            //     Debug.Log
            // }
        }
        public void NextTaskCommand()
        {
           /* if(EVATasks[EVATasks.Length].activeSelf.Equals(true)){
                EVATasks[EVATasks.Length].SetActive(false);
                screen5.gameObject.SetActive(true);
            return;
            
            }
            if(IVATasks[IVATasks.Length].activeSelf.Equals(true)){
                IVATasks[IVATasks.Length].SetActive(false);
                screen5.gameObject.SetActive(true);
            return;
            }*/
            for(int i = 0; i<=IVATasks.Length; i++){
                if(IVATasks[i].activeSelf.Equals(true)){
                    IVATasks[i].gameObject.SetActive(false);
                    IVATasks[i+1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=TranslationTasks.Length; i++){
                if(TranslationTasks[i].activeSelf.Equals(true)){
                    TranslationTasks[i].gameObject.SetActive(false);
                    TranslationTasks[i+1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=EVATasks.Length; i++){
                if(EVATasks[i].activeSelf.Equals(true)){
                    EVATasks[i].gameObject.SetActive(false);
                    EVATasks[i+1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=TASK4Tasks.Length; i++){
                if(TASK4Tasks[i].activeSelf.Equals(true)){
                    TASK4Tasks[i].gameObject.SetActive(false);
                    TASK4Tasks[i+1].gameObject.SetActive(true);
                    break;
                }
            }

        }

        public void PreviousTaskCommand()
        {
            for(int i = 0; i<=IVATasks.Length; i++){
                if(IVATasks[i].activeSelf.Equals(true)){
                    IVATasks[i].gameObject.SetActive(false);
                    IVATasks[i-1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=TranslationTasks.Length; i++){
                if(TranslationTasks[i].activeSelf.Equals(true)){
                    TranslationTasks[i].gameObject.SetActive(false);
                    TranslationTasks[i-1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=EVATasks.Length; i++){
                if(EVATasks[i].activeSelf.Equals(true)){
                    EVATasks[i].gameObject.SetActive(false);
                    EVATasks[i-1].gameObject.SetActive(true);
                    break;
                }
            }
            for(int i = 0; i<=TASK4Tasks.Length; i++){
                if(TASK4Tasks[i].activeSelf.Equals(true)){
                    TASK4Tasks[i].gameObject.SetActive(false);
                    TASK4Tasks[i-1].gameObject.SetActive(true);
                    break;
                }
            }            
        }

        public void ShowStatusCommand()
        {
           screen9.gameObject.SetActive(true);
            
        }
        public void HideStatusCommand()
        {
            if(screen9.gameObject.activeSelf.Equals(true)){
           screen9.gameObject.SetActive(false);
            }
        }
        public void hideCommand()
        {
            if(screen2.gameObject.activeSelf.Equals(true)){
           screen2.gameObject.SetActive(false);
           screen3.gameObject.SetActive(true);
            }
        }

        public void IVACommand()
        {
            if(screen3.gameObject.activeSelf.Equals(true)){
           screen3.gameObject.SetActive(false);
           screen4.gameObject.SetActive(true);
            }
        }
        public void TranslationCommand()
        {
            if(screen3.gameObject.activeSelf.Equals(true)){
           screen3.gameObject.SetActive(false);
           screen5.gameObject.SetActive(true);
            }
        }
        public void EVACommand()
        {
            if(screen3.gameObject.activeSelf.Equals(true)){
           screen3.gameObject.SetActive(false);
           screen6.gameObject.SetActive(true);
            }
        }

        public void TASK4Command()
        {
            if(screen3.gameObject.activeSelf.Equals(true)){
           screen3.gameObject.SetActive(false);
           screen7.gameObject.SetActive(true);
            }
        }

        public void showCommand()
        {
            if(screen2.gameObject.activeSelf.Equals(true)){
           screen2.gameObject.SetActive(false);
           screen3.gameObject.SetActive(true);
            }
        }

        public void WindowCommand()
        {
            if(screen3.gameObject.activeSelf.Equals(true)){
           screen3.gameObject.SetActive(false);
           screen4.gameObject.SetActive(true);
            }
        }

        public void ChecklistCommand()
        {
            if(screen4.gameObject.activeSelf.Equals(true)){
            screen4.gameObject.SetActive(false);
            screen5.gameObject.SetActive(true);
            }
        }



        public void HeyScoutCommand()
        {
            if(screen1.gameObject.activeSelf.Equals(true)){
            screen1.gameObject.SetActive(false);
            screen2.gameObject.SetActive(true);
            }
        }

        public void GoHomeCommand()
        {
            screen1.gameObject.SetActive(true);
        }

           
           
            // Swap out the current model for the expanded model.
          /* GameObject currentModel = ExpandModel.Instance.gameObject;
            GameObject expandedModel = ExpandModel.Instance.ExpandedModel;

            expandedModel.transform.position = currentModel.transform.position;
            expandedModel.transform.rotation = currentModel.transform.rotation;
            expandedModel.transform.localScale = currentModel.transform.localScale;

            currentModel.SetActive(false);
            expandedModel.SetActive(true);

            // Play animation.  Ensure the Loop Time check box is disabled in the inspector for this animation to play it once.
            Animator[] expandedAnimators = expandedModel.GetComponentsInChildren<Animator>();
            // Set local variables for disabling the animation.
            if (expandedAnimators.Length > 0)
            {
                expandAnimationCompletionTime = Time.realtimeSinceStartup + expandedAnimators[0].runtimeAnimatorController.animationClips[0].length * 0.9f;
            }

            // Set the expand model flag.
            isModelExpanding = true;

            ExpandModel.Instance.Expand();*/
        
    }
}