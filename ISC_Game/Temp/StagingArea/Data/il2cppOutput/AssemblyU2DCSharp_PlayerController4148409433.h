#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerStats
struct PlayerStats_t2629781060;
// TileProperties
struct TileProperties_t1357255151;
// EnvironmentController
struct EnvironmentController_t98459507;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// PlayerStats PlayerController::ps
	PlayerStats_t2629781060 * ___ps_2;
	// TileProperties PlayerController::tp
	TileProperties_t1357255151 * ___tp_3;
	// EnvironmentController PlayerController::ec
	EnvironmentController_t98459507 * ___ec_4;
	// UnityEngine.GameObject PlayerController::spawnPos
	GameObject_t1756533147 * ___spawnPos_5;

public:
	inline static int32_t get_offset_of_ps_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___ps_2)); }
	inline PlayerStats_t2629781060 * get_ps_2() const { return ___ps_2; }
	inline PlayerStats_t2629781060 ** get_address_of_ps_2() { return &___ps_2; }
	inline void set_ps_2(PlayerStats_t2629781060 * value)
	{
		___ps_2 = value;
		Il2CppCodeGenWriteBarrier(&___ps_2, value);
	}

	inline static int32_t get_offset_of_tp_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___tp_3)); }
	inline TileProperties_t1357255151 * get_tp_3() const { return ___tp_3; }
	inline TileProperties_t1357255151 ** get_address_of_tp_3() { return &___tp_3; }
	inline void set_tp_3(TileProperties_t1357255151 * value)
	{
		___tp_3 = value;
		Il2CppCodeGenWriteBarrier(&___tp_3, value);
	}

	inline static int32_t get_offset_of_ec_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___ec_4)); }
	inline EnvironmentController_t98459507 * get_ec_4() const { return ___ec_4; }
	inline EnvironmentController_t98459507 ** get_address_of_ec_4() { return &___ec_4; }
	inline void set_ec_4(EnvironmentController_t98459507 * value)
	{
		___ec_4 = value;
		Il2CppCodeGenWriteBarrier(&___ec_4, value);
	}

	inline static int32_t get_offset_of_spawnPos_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___spawnPos_5)); }
	inline GameObject_t1756533147 * get_spawnPos_5() const { return ___spawnPos_5; }
	inline GameObject_t1756533147 ** get_address_of_spawnPos_5() { return &___spawnPos_5; }
	inline void set_spawnPos_5(GameObject_t1756533147 * value)
	{
		___spawnPos_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPos_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
