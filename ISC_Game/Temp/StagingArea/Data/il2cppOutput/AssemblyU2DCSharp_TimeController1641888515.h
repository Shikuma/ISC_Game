#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerInput
struct PlayerInput_t2764056259;
// EnvironmentController
struct EnvironmentController_t98459507;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeController
struct  TimeController_t1641888515  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TimeController::paused
	bool ___paused_2;
	// System.Boolean TimeController::pseudoPaused
	bool ___pseudoPaused_3;
	// System.Boolean TimeController::qInProgress
	bool ___qInProgress_4;
	// UnityEngine.GameObject TimeController::pausePanel
	GameObject_t1756533147 * ___pausePanel_5;
	// UnityEngine.GameObject TimeController::player
	GameObject_t1756533147 * ___player_6;
	// UnityEngine.GameObject TimeController::environmentParent
	GameObject_t1756533147 * ___environmentParent_7;
	// PlayerInput TimeController::pi
	PlayerInput_t2764056259 * ___pi_8;
	// EnvironmentController TimeController::ec
	EnvironmentController_t98459507 * ___ec_9;

public:
	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___paused_2)); }
	inline bool get_paused_2() const { return ___paused_2; }
	inline bool* get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(bool value)
	{
		___paused_2 = value;
	}

	inline static int32_t get_offset_of_pseudoPaused_3() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___pseudoPaused_3)); }
	inline bool get_pseudoPaused_3() const { return ___pseudoPaused_3; }
	inline bool* get_address_of_pseudoPaused_3() { return &___pseudoPaused_3; }
	inline void set_pseudoPaused_3(bool value)
	{
		___pseudoPaused_3 = value;
	}

	inline static int32_t get_offset_of_qInProgress_4() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___qInProgress_4)); }
	inline bool get_qInProgress_4() const { return ___qInProgress_4; }
	inline bool* get_address_of_qInProgress_4() { return &___qInProgress_4; }
	inline void set_qInProgress_4(bool value)
	{
		___qInProgress_4 = value;
	}

	inline static int32_t get_offset_of_pausePanel_5() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___pausePanel_5)); }
	inline GameObject_t1756533147 * get_pausePanel_5() const { return ___pausePanel_5; }
	inline GameObject_t1756533147 ** get_address_of_pausePanel_5() { return &___pausePanel_5; }
	inline void set_pausePanel_5(GameObject_t1756533147 * value)
	{
		___pausePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___pausePanel_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___player_6)); }
	inline GameObject_t1756533147 * get_player_6() const { return ___player_6; }
	inline GameObject_t1756533147 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t1756533147 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_environmentParent_7() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___environmentParent_7)); }
	inline GameObject_t1756533147 * get_environmentParent_7() const { return ___environmentParent_7; }
	inline GameObject_t1756533147 ** get_address_of_environmentParent_7() { return &___environmentParent_7; }
	inline void set_environmentParent_7(GameObject_t1756533147 * value)
	{
		___environmentParent_7 = value;
		Il2CppCodeGenWriteBarrier(&___environmentParent_7, value);
	}

	inline static int32_t get_offset_of_pi_8() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___pi_8)); }
	inline PlayerInput_t2764056259 * get_pi_8() const { return ___pi_8; }
	inline PlayerInput_t2764056259 ** get_address_of_pi_8() { return &___pi_8; }
	inline void set_pi_8(PlayerInput_t2764056259 * value)
	{
		___pi_8 = value;
		Il2CppCodeGenWriteBarrier(&___pi_8, value);
	}

	inline static int32_t get_offset_of_ec_9() { return static_cast<int32_t>(offsetof(TimeController_t1641888515, ___ec_9)); }
	inline EnvironmentController_t98459507 * get_ec_9() const { return ___ec_9; }
	inline EnvironmentController_t98459507 ** get_address_of_ec_9() { return &___ec_9; }
	inline void set_ec_9(EnvironmentController_t98459507 * value)
	{
		___ec_9 = value;
		Il2CppCodeGenWriteBarrier(&___ec_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
