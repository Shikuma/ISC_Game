using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour {
	private GameObject player;
	private PlayerStats ps;

	private int totalQuestions;
	public Image[] statusDots;
	public Slider progressBar;
	private Vector2 barPos;
	public Image progressDotPref;
	private float dotSpacing;
	public GameObject progressParent, statsPanel;

	// Use this for initialization
	void Start () {
		player = GameObject.FindWithTag("Player");
		ps = player.GetComponent<PlayerStats>();
		totalQuestions = ps.gameLength;
		statusDots = new Image[totalQuestions];
		//Determine position and dot spacing
		//barPos = new Vector2(Screen.width/2, Screen.height - (progressDotPref.rectTransform.localScale.y*50));
		barPos = statsPanel.transform.position;
		dotSpacing = (Screen.width * 0.9f) / totalQuestions;

		//position status bar, scale it to fit dots width
		progressBar.transform.position = barPos;
		progressBar.GetComponent<RectTransform>().sizeDelta = new Vector2((Screen.width * 0.9f) - dotSpacing, progressBar.GetComponent<RectTransform>().sizeDelta.y);

		int x = 0;
		//position dots
		for (float i = -statusDots.Length/2f; i < statusDots.Length/2f; i++) {
			//Determine position
			Vector2 dotPos = barPos;
			dotPos.x += (dotSpacing * i) + dotSpacing/2;
			//Isntantiate dot at that position
			Image dot = Instantiate(progressDotPref, dotPos, Quaternion.identity);
			dot.transform.parent = progressParent.transform;
			statusDots[x] = dot;
			x++;
		}
		
	}

	public void UpdateStatus(bool correct) {
		statusDots[ps.totalQuestions-1].GetComponent<Image>().color = correct ? Color.green : Color.red;
	}
}
