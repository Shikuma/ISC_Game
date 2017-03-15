using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeController : MonoBehaviour {
	public bool paused, pseudoPaused;

	GameObject player, environmentParent;
	PlayerInput pi;
	EnvironmentController ec;

	void Start() {
		player = GameObject.FindWithTag("Player");
		environmentParent = GameObject.FindWithTag("EnvParent");
		pi = player.GetComponent<PlayerInput>();
		ec = gameObject.GetComponent<EnvironmentController>();
	}

	public void PauseGame() {
		paused = !paused;
		Time.timeScale = paused ? 0 : 1;
	}

	/*
	public void PseudoPauseGame() {
		pseudoPaused = !pseudoPaused;
		pi.canJump = !pi.canJump;
		environmentParent.gameObject.GetComponent<MoveGround>().speed = pseudoPaused ? 0 : 5 ;
		player.gameObject.GetComponent<Player>().stop = !player.gameObject.GetComponent<Player>().stop;
	}*/


}
