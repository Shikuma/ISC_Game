using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class treeControl : MonoBehaviour {

	public float speed = 5;
	bool moving = true;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(moving)
			transform.Translate(-speed * Time.deltaTime, 0, 0);

		if (transform.position.x < -2.0f) {
			transform.position = new Vector2(22.0f, transform.position.y);
			nextTree (Random.Range (0.1f, 5f));
		}
	}

	IEnumerator nextTree(float sec){
		moving = false;
		yield return new WaitForSeconds (sec);
		moving = true;
	}
}
