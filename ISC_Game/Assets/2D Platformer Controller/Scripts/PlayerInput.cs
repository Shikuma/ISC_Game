using UnityEngine;

[RequireComponent(typeof(Player))]
public class PlayerInput : MonoBehaviour
{
    private Player player;

	[SerializeField]
	private bool canMoveVerticle;
	
	public bool canJump;

    private void Start()
    {
        player = GetComponent<Player>();
		canJump = true;
    }

    private void Update()
    {
        Vector2 directionalInput = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"));
        if(canMoveVerticle) player.SetDirectionalInput(directionalInput);

		if (canJump) {
			if (false){//Input.GetButtonDown("Jump") || Input.GetKeyDown(KeyCode.UpArrow)) {
				player.OnJumpInputDown();
			}

			if (false){//Input.GetButtonUp("Jump") || Input.GetKeyUp(KeyCode.UpArrow)) {
				player.OnJumpInputUp();
			}
		}
    }
}
