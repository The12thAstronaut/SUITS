﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using HoloToolkit.Unity.InputModule;
using UnityEngine;

namespace Academy
{
    /// <summary>
    /// CursorFeedback class takes GameObjects to give cursor feedback
    /// to users based on different states.
    /// </summary>
    public class CursorFeedback : MonoBehaviour
    {
        [Tooltip("Drag the GameObject to display when a scroll enabled Interactible is detected.")]
        [SerializeField]
        private GameObject scrollDetectedGameObject;

        [Tooltip("Drag the GameObject to display when a pathing enabled Interactible is detected.")]
        [SerializeField]
        private GameObject pathingDetectedGameObject;

        [Tooltip("Drag the GameObject to display when a voice command is detected.")]
        [SerializeField]
        private GameObject voiceCommandDetectedGameObject;

        private HoloToolkit.Unity.InputModule.Cursor cursor;

        private bool IsNavigationFocused
        {
            get
            {
                GameObject targeted = cursor.GetTargetedObject();
                if (targeted != null)
                {
                    GestureAction gestureAction = targeted.GetComponent<GestureAction>();
                    if (gestureAction != null)
                    {
                        return gestureAction.IsNavigationEnabled;
                    }
                    else
                    {
                        gestureAction = targeted.transform.root.GetComponent<GestureAction>();
                        if (gestureAction != null)
                        {
                            return gestureAction.IsNavigationEnabled;
                        }
                    }
                }

                return false;
            }
        }

        private bool IsManipulationFocused
        {
            get
            {
                GameObject targeted = cursor.GetTargetedObject();
                if (targeted != null)
                {
                    GestureAction gestureAction = targeted.GetComponent<GestureAction>();
                    if (gestureAction != null)
                    {
                        return !gestureAction.IsNavigationEnabled;
                    }
                    else
                    {
                        gestureAction = targeted.transform.root.GetComponent<GestureAction>();
                        if (gestureAction != null)
                        {
                            return !gestureAction.IsNavigationEnabled;
                        }
                    }
                }

                return false;
            }
        }

        private bool IsVoiceCommandFocused
        {
            get
            {
                GameObject targeted = cursor.GetTargetedObject();
                if (targeted != null)
                {
                    SpeechInputHandler speechInputHandler = targeted.GetComponent<SpeechInputHandler>();
                    if (speechInputHandler != null)
                    {
                        return !speechInputHandler.IsGlobalListener;
                    }
                    else
                    {
                        speechInputHandler = targeted.transform.root.GetComponent<SpeechInputHandler>();
                        if (speechInputHandler != null)
                        {
                            return !speechInputHandler.IsGlobalListener;
                        }
                    }
                }

                return false;
            }
        }

        private void Awake()
        {
            cursor = GetComponent<HoloToolkit.Unity.InputModule.Cursor>();
        }

        private void Update()
        {
            UpdatePathDetectedState();

            UpdateScrollDetectedState();

            UpdateVoiceCommandDetectedState();
        }

        private void UpdatePathDetectedState()
        {
            if (pathingDetectedGameObject == null)
            {
                return;
            }

            if (!IsManipulationFocused)
            {
                pathingDetectedGameObject.SetActive(false);
                return;
            }

            pathingDetectedGameObject.SetActive(true);
        }

        private void UpdateScrollDetectedState()
        {
            if (scrollDetectedGameObject == null)
            {
                return;
            }

            if (!IsNavigationFocused)
            {
                scrollDetectedGameObject.SetActive(false);
                return;
            }

            scrollDetectedGameObject.SetActive(true);
        }

        private void UpdateVoiceCommandDetectedState()
        {
            if (voiceCommandDetectedGameObject == null)
            {
                return;
            }

            if (!IsVoiceCommandFocused)
            {
                voiceCommandDetectedGameObject.SetActive(false);
                return;
            }

            voiceCommandDetectedGameObject.SetActive(true);
        }
    }
}