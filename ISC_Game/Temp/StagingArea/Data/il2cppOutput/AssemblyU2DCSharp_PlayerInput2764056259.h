#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t1147783557;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInput
struct  PlayerInput_t2764056259  : public MonoBehaviour_t1158329972
{
public:
	// Player PlayerInput::player
	Player_t1147783557 * ___player_2;
	// System.Boolean PlayerInput::canMoveVerticle
	bool ___canMoveVerticle_3;
	// System.Boolean PlayerInput::canJump
	bool ___canJump_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PlayerInput_t2764056259, ___player_2)); }
	inline Player_t1147783557 * get_player_2() const { return ___player_2; }
	inline Player_t1147783557 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t1147783557 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_canMoveVerticle_3() { return static_cast<int32_t>(offsetof(PlayerInput_t2764056259, ___canMoveVerticle_3)); }
	inline bool get_canMoveVerticle_3() const { return ___canMoveVerticle_3; }
	inline bool* get_address_of_canMoveVerticle_3() { return &___canMoveVerticle_3; }
	inline void set_canMoveVerticle_3(bool value)
	{
		___canMoveVerticle_3 = value;
	}

	inline static int32_t get_offset_of_canJump_4() { return static_cast<int32_t>(offsetof(PlayerInput_t2764056259, ___canJump_4)); }
	inline bool get_canJump_4() const { return ___canJump_4; }
	inline bool* get_address_of_canJump_4() { return &___canJump_4; }
	inline void set_canJump_4(bool value)
	{
		___canJump_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
