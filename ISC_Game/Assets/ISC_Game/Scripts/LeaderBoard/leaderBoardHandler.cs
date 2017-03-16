using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class leaderBoardHandler : MonoBehaviour {
	public GameObject[] lbObjects;
	public int topScores = 3;

	GameObject objContainer;
	ScoreObject[] userData;
	GetGamesData ggd;

	// Use this for initialization
	void Start () {
		ggd = gameObject.GetComponent<GetGamesData>();

		lbObjects = new GameObject[10];	
		objContainer = GameObject.FindWithTag("lbObjectContainer");
		int i = 0;
		foreach (Transform child in objContainer.transform) {
			lbObjects[i] = child.gameObject;
			i++;
		}

		//userData = ggd.SortScores();
	}
	

	public void SetData(ScoreObject[] userData) {
		this.userData = userData;
		int j = 0;
		for(int i = userData.Length-1; i > userData.Length - 4; i--) {
			//Set name
			lbObjects[j].gameObject.GetComponent<Text>().text = j+1 + ". " + userData[i].firstName + " " + userData[i].lastName;
			//Set score
			lbObjects[j].transform.GetChild(0).GetComponent<Text>().text = userData[i].score.ToString();
			j++;
		}
	}
}
