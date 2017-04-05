using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PullTest : MonoBehaviour {

	// Use this for initialization
	void Start () {
		WWW www = new WWW("http://localhost/PullTest.php");
	}
	
	IEnumerator WaitForTest(WWW www) {
		yield return www;
		string text = www.text;
		print(text);
	}
}
