using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	PlayerStats ps;
	TileProperties tp;
	EnvironmentController ec;

	[SerializeField]
	private GameObject spawnPos;

	// Use this for initialization
	void Start () {
		ps = gameObject.GetComponent<PlayerStats>();
	}

	void OnTriggerEnter2D(Collider2D c) {
		if(c.gameObject.tag == "Obstacle") {
			tp = c.GetComponentInParent<TileProperties>();
			if (tp.hasObstacle) {
				//ps.UpdateScore(-15f);
				ps.OpenQuestion();
				tp.dealtPoints = true;
			}
		}
	}

	//Called by environmentController after screen size and camera are repositioned in SetCamera() method
	public void SpawnPlayer(Vector2 position) {
		spawnPos.transform.position = position;
		transform.position = spawnPos.transform.position;
	}
}
