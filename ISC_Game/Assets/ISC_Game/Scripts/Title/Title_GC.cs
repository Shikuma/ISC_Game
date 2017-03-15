using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Title_GC : MonoBehaviour {
	GameObject playerManager;
	LoadPlayer lp;
	// Use this for initialization
	void Start () {
		playerManager = GameObject.FindWithTag("PlayerManager");
		lp = playerManager.gameObject.GetComponent<LoadPlayer>();
		lp.LoadPlayerData();
	}
	
}
