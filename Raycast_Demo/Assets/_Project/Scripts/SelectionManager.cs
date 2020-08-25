using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectionManager : MonoBehaviour
{
    [SerializeField] private string selectableTag = "Selectable";
    [SerializeField] private Material highlightMaterial;
    [SerializeField] private Material defaultMaterial;

    private Transform _selection;
    public Transform rayOrigin;



    private void Update()
    {
        if (_selection != null)
        {
            var selectionRenderer = _selection.GetComponent<Renderer>();
            selectionRenderer.material = defaultMaterial;
            _selection = null;
        }
        
        rayOrigin = Camera.main.transform;
        // var ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        // if (Physics.Raycast(ray, out hit, 2))
        if(Physics.Raycast(rayOrigin.position, rayOrigin.TransformDirection(Vector3.forward), out hit, 1000))
        {
            // Debug.DrawLine(ray.origin, hit.point);
            var selection = hit.transform;
            Debug.Log("Hit");
            Debug.Log(rayOrigin.transform);
            if (selection.CompareTag(selectableTag))
            {
                var selectionRenderer = selection.GetComponent<Renderer>();
                if (selectionRenderer != null)
                {
                    selectionRenderer.material = highlightMaterial;
                }

                _selection = selection;
            }
        }
    }

}