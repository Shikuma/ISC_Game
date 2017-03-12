using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TilePooling : MonoBehaviour {
	private GameObject gameController;
	private EnvironmentController ec;




	void Start() {
		gameController = GameObject.FindWithTag("GameController");
		ec = gameController.gameObject.GetComponent<EnvironmentController>();
	}

	public void SetChildren(GameObject tile) {
		TileProperties tp = tile.GetComponent<TileProperties>();
		
	}

	public void ResetPosition(GameObject tile) {
		TileProperties tp = tile.GetComponent<TileProperties>();
	}
}
