using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class leaderBoardHandler : MonoBehaviour {
	public GameObject[] lbObjects;
	GameObject objContainer;
	// Use this for initialization
	void Start () {
		lbObjects = new GameObject[10];	
		objContainer = GameObject.FindWithTag("lbObjectContainer");
		int i = 0;
		foreach (Transform child in objContainer.transform) {
			lbObjects[i] = child.gameObject;
			i++;
		}

		SetData();

	}
	

	void SetData() {
		for( int i = 0; i < lbObjects.Length; i++) {
			//Set name
			lbObjects[i].gameObject.GetComponent<Text>().text = "Name " + i;
			//Set score
			lbObjects[i].transform.GetChild(0).GetComponent<Text>().text = i + "" + i + "" + i;
		}
	}
}
