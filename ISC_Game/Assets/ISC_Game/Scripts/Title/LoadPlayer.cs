using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadPlayer : MonoBehaviour {

	void Awake() {
		DontDestroyOnLoad(transform.gameObject);
	}

	public void LoadPlayerData() {
		PlayerData playerData = gameObject.GetComponent<PlayerData>();
		playerData.userID = 1;
		playerData.username = "TestUsername1";
		playerData.firstName = "Test1_f";
		playerData.lastName = "Test1_l";
		playerData.highScore = 999;
		//This will always be 0 at init
		playerData.instanceHighScore = 0;
	}
}
