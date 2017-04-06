using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioController : Singleton<AudioController> {

	protected AudioController () {}

	public List<AudioClip> sfx;
	AudioSource audioSource;

	// Use this for initialization
	void Awake () {
		//DontDestroyOnLoad(transform.gameObject);
		audioSource = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void playSFX(int index){
		audioSource.PlayOneShot (sfx [index]);
	}
}
