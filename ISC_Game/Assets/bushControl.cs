using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bushControl : MonoBehaviour {
	public GameObject bush;

	// Use this for initialization
	void Start () {
		Instantiate (bush, transform.position, Quaternion.identity).transform.parent = transform;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
