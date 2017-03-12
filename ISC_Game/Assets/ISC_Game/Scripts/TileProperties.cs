using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileProperties : MonoBehaviour {

	[SerializeField]
	public Sprite[] pieces, obstacles;
	public GameObject piece, obstacle;
	public bool hasObstacle;
	private float poolEnd, poolStart;
	public int thisElement;

	private GameObject gameController;
	private EnvironmentController ec;

	void Start() {
		gameController = GameObject.FindWithTag("GameController");
		ec = gameController.gameObject.GetComponent<EnvironmentController>();

		poolStart = ec.screenSize.x + 5f;
		poolEnd = -5f;
	}

	void Update() {
		if(transform.position.x < poolEnd) ResetPosition();
	}

	

	public void SetChildren() {
		Vector2 newPos;
		piece.gameObject.GetComponent<SpriteRenderer>().sprite = pieces[Random.Range(0, pieces.Length)];

		//Determine if any of the recent tiles have had an obstacle, if so, don't generate one.
		if (Random.Range(0, 10) < 1) {
			bool canObstacle = true;
			for (int i = 1; i <= 10; i++) {
				int checkElement = thisElement;
				if (checkElement - i < 0) checkElement = ec.tiles.Capacity - 2 + thisElement - i;
				else checkElement = thisElement -i;
				if (ec.tiles[checkElement].gameObject.GetComponent<TileProperties>().hasObstacle) {
					canObstacle = false;
				}
			}

			if (canObstacle) {
				hasObstacle = true;
				obstacle.gameObject.GetComponent<SpriteRenderer>().enabled = true;
				obstacle.gameObject.GetComponent<SpriteRenderer>().sprite = obstacles[Random.Range(0, obstacles.Length)];

				newPos = transform.position;
				newPos.y += obstacle.gameObject.GetComponent<SpriteRenderer>().bounds.size.y / 2;
				obstacle.transform.position = newPos;
			}

		}
	}

	public void initSpawn() {
		Vector2 newPos;
		piece.gameObject.GetComponent<SpriteRenderer>().sprite = pieces[Random.Range(0, pieces.Length)];
		newPos = piece.transform.position;
		newPos.y -= piece.gameObject.GetComponent<SpriteRenderer>().bounds.size.y / 2;
		piece.transform.position = newPos;
	}

	public void ResetPosition() {
		hasObstacle = false;
		obstacle.gameObject.GetComponent<SpriteRenderer>().enabled = false;

		int previousChild = thisElement;
		if (thisElement == 0) previousChild = ec.tiles.Capacity-3; 
		else previousChild--; 

		transform.position = ec.tiles[previousChild].gameObject.transform.position;
		Vector2 newPos = transform.position;
		newPos.x += piece.gameObject.GetComponent<SpriteRenderer>().bounds.size.x;
		transform.position = newPos;

		SetChildren();
	}

}
