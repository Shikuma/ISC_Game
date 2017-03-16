using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeController : MonoBehaviour {
	public bool paused, pseudoPaused, qInProgress;
	public GameObject pausePanel;

	GameObject player, environmentParent;
	PlayerInput pi;
	EnvironmentController ec;

	void Start() {
		player = GameObject.FindWithTag("Player");
		environmentParent = GameObject.FindWithTag("EnvParent");
		pi = player.GetComponent<PlayerInput>();
		ec = gameObject.GetComponent<EnvironmentController>();
		pausePanel.SetActive(false);
	}

	public void PauseGame() {
		if (!qInProgress) {
			paused = !paused;
			Time.timeScale = paused ? 0 : 1;
		}
	}

	public void PauseMenu() {
		PauseGame();
		pausePanel.SetActive(qInProgress ? false : paused);
	}
}
