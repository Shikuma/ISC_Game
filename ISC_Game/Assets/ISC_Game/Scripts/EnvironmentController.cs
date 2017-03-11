using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentController : MonoBehaviour {

	private Vector2 pool_createPos, pool_destroyPos, screenSize;
	public int poolSize;

	[SerializeField]
	private GameObject player, walkingSurfacePrefab, piece_ground;
	[SerializeField]
	private List<GameObject> envPieces;

	void Start () {
		
		SetCamera();
		SetGroundCollider();
		CreateEnvironment();
		SpawnPlayer();
		//Set create and destroy positions for pooling


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
		Vector2 piecePos = new Vector2(-5f, 3*screenSize.y/5);
		for (int i = 0; i < poolSize; i++) {
			GameObject go = Instantiate(piece_ground, Vector3.zero, Quaternion.identity);
			if(i==0) piecePos.y -= go.gameObject.GetComponent<SpriteRenderer>().bounds.size.y/2;
			go.transform.position = piecePos;
			piecePos.x += piece_ground.gameObject.GetComponent<SpriteRenderer>().bounds.size.x;
		}
	}

	void SpawnPlayer() {
		player = GameObject.FindWithTag("Player");
		player.transform.position = new Vector2(screenSize.x/4, 3*screenSize.y/4);
	}
}
