using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	PlayerStats ps;
	TileProperties tp;
	EnvironmentController ec;
	QuestionHandler2 qHandler;
	AudioController AC;

	[SerializeField]
	private GameObject spawnPos;
	public GameObject quizObject, ACObject;

	public bool canTrigger;

	// Use this for initialization
	void Start () {
		ps = gameObject.GetComponent<PlayerStats>();
		qHandler = quizObject.GetComponent<QuestionHandler2>();
		AC = ACObject.GetComponent<AudioController>();
		canTrigger = true;
	}

	void OnTriggerEnter2D(Collider2D c) {
		if(c.gameObject.tag == "Obstacle" && canTrigger) {
			tp = c.GetComponentInParent<TileProperties>();
			if (tp.hasObstacle) {
				//ps.OpenQuestion();
				tp.dealtPoints = true;
				if (qHandler.answerWasCorrect) {
					gameObject.GetComponent<Player>().OnJumpInputUp();
					AC.playSFX(3);
				}else {
					AC.playSFX(4);
				}
				StartCoroutine(ps.changeBird(qHandler.answerWasCorrect));
				StartCoroutine(qHandler.QuestionTimer(3f));
				print("Calling Question");
				canTrigger = false;
			}
		}
	}

	//Called by environmentController after screen size and camera are repositioned in SetCamera() method
	public void SpawnPlayer(Vector2 position) {
		spawnPos.transform.position = position;
		transform.position = spawnPos.transform.position;
	}
}
