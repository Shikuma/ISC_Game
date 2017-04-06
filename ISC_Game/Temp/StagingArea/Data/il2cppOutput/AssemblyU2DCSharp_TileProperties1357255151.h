#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// EnvironmentController
struct EnvironmentController_t98459507;
// PlayerStats
struct PlayerStats_t2629781060;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TileProperties
struct  TileProperties_t1357255151  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] TileProperties::pieces
	SpriteU5BU5D_t3359083662* ___pieces_2;
	// UnityEngine.Sprite[] TileProperties::obstacles
	SpriteU5BU5D_t3359083662* ___obstacles_3;
	// UnityEngine.GameObject TileProperties::piece
	GameObject_t1756533147 * ___piece_4;
	// UnityEngine.GameObject TileProperties::obstacle
	GameObject_t1756533147 * ___obstacle_5;
	// UnityEngine.GameObject TileProperties::obstacleTrigger
	GameObject_t1756533147 * ___obstacleTrigger_6;
	// System.Boolean TileProperties::hasObstacle
	bool ___hasObstacle_7;
	// System.Boolean TileProperties::dealtPoints
	bool ___dealtPoints_8;
	// System.Single TileProperties::poolEnd
	float ___poolEnd_9;
	// System.Single TileProperties::poolStart
	float ___poolStart_10;
	// System.Int32 TileProperties::thisElement
	int32_t ___thisElement_11;
	// UnityEngine.GameObject TileProperties::player
	GameObject_t1756533147 * ___player_12;
	// UnityEngine.GameObject TileProperties::gameController
	GameObject_t1756533147 * ___gameController_13;
	// EnvironmentController TileProperties::ec
	EnvironmentController_t98459507 * ___ec_14;
	// PlayerStats TileProperties::ps
	PlayerStats_t2629781060 * ___ps_15;

public:
	inline static int32_t get_offset_of_pieces_2() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___pieces_2)); }
	inline SpriteU5BU5D_t3359083662* get_pieces_2() const { return ___pieces_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_pieces_2() { return &___pieces_2; }
	inline void set_pieces_2(SpriteU5BU5D_t3359083662* value)
	{
		___pieces_2 = value;
		Il2CppCodeGenWriteBarrier(&___pieces_2, value);
	}

	inline static int32_t get_offset_of_obstacles_3() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___obstacles_3)); }
	inline SpriteU5BU5D_t3359083662* get_obstacles_3() const { return ___obstacles_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of_obstacles_3() { return &___obstacles_3; }
	inline void set_obstacles_3(SpriteU5BU5D_t3359083662* value)
	{
		___obstacles_3 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_3, value);
	}

	inline static int32_t get_offset_of_piece_4() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___piece_4)); }
	inline GameObject_t1756533147 * get_piece_4() const { return ___piece_4; }
	inline GameObject_t1756533147 ** get_address_of_piece_4() { return &___piece_4; }
	inline void set_piece_4(GameObject_t1756533147 * value)
	{
		___piece_4 = value;
		Il2CppCodeGenWriteBarrier(&___piece_4, value);
	}

	inline static int32_t get_offset_of_obstacle_5() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___obstacle_5)); }
	inline GameObject_t1756533147 * get_obstacle_5() const { return ___obstacle_5; }
	inline GameObject_t1756533147 ** get_address_of_obstacle_5() { return &___obstacle_5; }
	inline void set_obstacle_5(GameObject_t1756533147 * value)
	{
		___obstacle_5 = value;
		Il2CppCodeGenWriteBarrier(&___obstacle_5, value);
	}

	inline static int32_t get_offset_of_obstacleTrigger_6() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___obstacleTrigger_6)); }
	inline GameObject_t1756533147 * get_obstacleTrigger_6() const { return ___obstacleTrigger_6; }
	inline GameObject_t1756533147 ** get_address_of_obstacleTrigger_6() { return &___obstacleTrigger_6; }
	inline void set_obstacleTrigger_6(GameObject_t1756533147 * value)
	{
		___obstacleTrigger_6 = value;
		Il2CppCodeGenWriteBarrier(&___obstacleTrigger_6, value);
	}

	inline static int32_t get_offset_of_hasObstacle_7() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___hasObstacle_7)); }
	inline bool get_hasObstacle_7() const { return ___hasObstacle_7; }
	inline bool* get_address_of_hasObstacle_7() { return &___hasObstacle_7; }
	inline void set_hasObstacle_7(bool value)
	{
		___hasObstacle_7 = value;
	}

	inline static int32_t get_offset_of_dealtPoints_8() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___dealtPoints_8)); }
	inline bool get_dealtPoints_8() const { return ___dealtPoints_8; }
	inline bool* get_address_of_dealtPoints_8() { return &___dealtPoints_8; }
	inline void set_dealtPoints_8(bool value)
	{
		___dealtPoints_8 = value;
	}

	inline static int32_t get_offset_of_poolEnd_9() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___poolEnd_9)); }
	inline float get_poolEnd_9() const { return ___poolEnd_9; }
	inline float* get_address_of_poolEnd_9() { return &___poolEnd_9; }
	inline void set_poolEnd_9(float value)
	{
		___poolEnd_9 = value;
	}

	inline static int32_t get_offset_of_poolStart_10() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___poolStart_10)); }
	inline float get_poolStart_10() const { return ___poolStart_10; }
	inline float* get_address_of_poolStart_10() { return &___poolStart_10; }
	inline void set_poolStart_10(float value)
	{
		___poolStart_10 = value;
	}

	inline static int32_t get_offset_of_thisElement_11() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___thisElement_11)); }
	inline int32_t get_thisElement_11() const { return ___thisElement_11; }
	inline int32_t* get_address_of_thisElement_11() { return &___thisElement_11; }
	inline void set_thisElement_11(int32_t value)
	{
		___thisElement_11 = value;
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___player_12)); }
	inline GameObject_t1756533147 * get_player_12() const { return ___player_12; }
	inline GameObject_t1756533147 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(GameObject_t1756533147 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier(&___player_12, value);
	}

	inline static int32_t get_offset_of_gameController_13() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___gameController_13)); }
	inline GameObject_t1756533147 * get_gameController_13() const { return ___gameController_13; }
	inline GameObject_t1756533147 ** get_address_of_gameController_13() { return &___gameController_13; }
	inline void set_gameController_13(GameObject_t1756533147 * value)
	{
		___gameController_13 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_13, value);
	}

	inline static int32_t get_offset_of_ec_14() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___ec_14)); }
	inline EnvironmentController_t98459507 * get_ec_14() const { return ___ec_14; }
	inline EnvironmentController_t98459507 ** get_address_of_ec_14() { return &___ec_14; }
	inline void set_ec_14(EnvironmentController_t98459507 * value)
	{
		___ec_14 = value;
		Il2CppCodeGenWriteBarrier(&___ec_14, value);
	}

	inline static int32_t get_offset_of_ps_15() { return static_cast<int32_t>(offsetof(TileProperties_t1357255151, ___ps_15)); }
	inline PlayerStats_t2629781060 * get_ps_15() const { return ___ps_15; }
	inline PlayerStats_t2629781060 ** get_address_of_ps_15() { return &___ps_15; }
	inline void set_ps_15(PlayerStats_t2629781060 * value)
	{
		___ps_15 = value;
		Il2CppCodeGenWriteBarrier(&___ps_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
