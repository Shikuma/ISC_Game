using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentController : MonoBehaviour {

	public Vector2 screenSize;
	public int poolSize;

	[SerializeField]
	private GameObject player, tile, walkingSurfacePrefab;
	[SerializeField]
	public List<GameObject> tiles;

	void Start () {
		SetCamera();
		SetGroundCollider();
		CreateEnvironment();
		SpawnPlayer();
	}
	
	void Update () {
		
	}

	void SetCamera() {
		//Get the screen size to world dimension
		//Adjust camera position so we can deal with positive numbers for positioning
		screenSize = Camera.main.ScreenToWorldPoint(new Vector2(Screen.width, Screen.height));
		Camera.main.transform.position = new Vector3(Camera.main.transform.position.x + screenSize.x, Camera.main.transform.position.y + screenSize.y, -10.0f);
		screenSize *= 2;
	}

	void SetGroundCollider() {
		GameObject walkingSurface = Instantiate(walkingSurfacePrefab, Vector3.zero, Quaternion.identity);

		//Set the ground collider position and size
		Vector2 newScale = new Vector2(screenSize.x / walkingSurface.gameObject.GetComponent<BoxCollider2D>().bounds.size.x, walkingSurface.transform.localScale.y);
		Vector2 newPos = new Vector2(screenSize.x/2f, (3*screenSize.y/5) - (walkingSurface.gameObject.GetComponent<BoxCollider2D>().bounds.size.y / 2));
		print(newScale + " :: " + newPos);
		walkingSurface.transform.localScale = newScale;
		walkingSurface.transform.position = newPos;
	}

	void CreateEnvironment() {
		Vector2 tilePos = new Vector2(-5f, 3*screenSize.y/5);
		for (int i = 0; i < poolSize; i++) {
			GameObject go = Instantiate(tile, Vector3.zero, Quaternion.identity);
			tiles.Add(go);
			go.GetComponent<TileProperties>().thisElement = i;
			go.gameObject.GetComponent<TileProperties>().initSpawn();
			go.transform.position = tilePos;
			tilePos.x += go.gameObject.GetComponent<TileProperties>().piece.gameObject.GetComponent<SpriteRenderer>().bounds.size.x;
		}
	}

	void SpawnPlayer() {
		player = GameObject.FindWithTag("Player");
		player.transform.position = new Vector2(screenSize.x/4, 3*screenSize.y/4);
	}
}
