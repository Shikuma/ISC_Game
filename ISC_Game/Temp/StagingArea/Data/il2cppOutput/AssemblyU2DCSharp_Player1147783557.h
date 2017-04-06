#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Controller2D
struct Controller2D_t802485922;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Player::maxJumpHeight
	float ___maxJumpHeight_2;
	// System.Single Player::minJumpHeight
	float ___minJumpHeight_3;
	// System.Single Player::timeToJumpApex
	float ___timeToJumpApex_4;
	// System.Single Player::accelerationTimeAirborne
	float ___accelerationTimeAirborne_5;
	// System.Single Player::accelerationTimeGrounded
	float ___accelerationTimeGrounded_6;
	// System.Single Player::moveSpeed
	float ___moveSpeed_7;
	// UnityEngine.Vector2 Player::wallJumpClimb
	Vector2_t2243707579  ___wallJumpClimb_8;
	// UnityEngine.Vector2 Player::wallJumpOff
	Vector2_t2243707579  ___wallJumpOff_9;
	// UnityEngine.Vector2 Player::wallLeap
	Vector2_t2243707579  ___wallLeap_10;
	// System.Boolean Player::canDoubleJump
	bool ___canDoubleJump_11;
	// System.Boolean Player::isDoubleJumping
	bool ___isDoubleJumping_12;
	// System.Single Player::wallSlideSpeedMax
	float ___wallSlideSpeedMax_13;
	// System.Single Player::wallStickTime
	float ___wallStickTime_14;
	// System.Single Player::timeToWallUnstick
	float ___timeToWallUnstick_15;
	// System.Single Player::gravity
	float ___gravity_16;
	// System.Single Player::maxJumpVelocity
	float ___maxJumpVelocity_17;
	// System.Single Player::minJumpVelocity
	float ___minJumpVelocity_18;
	// System.Single Player::jumpAmount
	float ___jumpAmount_19;
	// UnityEngine.Vector3 Player::velocity
	Vector3_t2243707580  ___velocity_20;
	// System.Single Player::velocityXSmoothing
	float ___velocityXSmoothing_21;
	// Controller2D Player::controller
	Controller2D_t802485922 * ___controller_22;
	// UnityEngine.Vector2 Player::directionalInput
	Vector2_t2243707579  ___directionalInput_23;
	// System.Boolean Player::wallSliding
	bool ___wallSliding_24;
	// System.Int32 Player::wallDirX
	int32_t ___wallDirX_25;
	// System.Boolean Player::stop
	bool ___stop_26;

public:
	inline static int32_t get_offset_of_maxJumpHeight_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___maxJumpHeight_2)); }
	inline float get_maxJumpHeight_2() const { return ___maxJumpHeight_2; }
	inline float* get_address_of_maxJumpHeight_2() { return &___maxJumpHeight_2; }
	inline void set_maxJumpHeight_2(float value)
	{
		___maxJumpHeight_2 = value;
	}

	inline static int32_t get_offset_of_minJumpHeight_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___minJumpHeight_3)); }
	inline float get_minJumpHeight_3() const { return ___minJumpHeight_3; }
	inline float* get_address_of_minJumpHeight_3() { return &___minJumpHeight_3; }
	inline void set_minJumpHeight_3(float value)
	{
		___minJumpHeight_3 = value;
	}

	inline static int32_t get_offset_of_timeToJumpApex_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___timeToJumpApex_4)); }
	inline float get_timeToJumpApex_4() const { return ___timeToJumpApex_4; }
	inline float* get_address_of_timeToJumpApex_4() { return &___timeToJumpApex_4; }
	inline void set_timeToJumpApex_4(float value)
	{
		___timeToJumpApex_4 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeAirborne_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___accelerationTimeAirborne_5)); }
	inline float get_accelerationTimeAirborne_5() const { return ___accelerationTimeAirborne_5; }
	inline float* get_address_of_accelerationTimeAirborne_5() { return &___accelerationTimeAirborne_5; }
	inline void set_accelerationTimeAirborne_5(float value)
	{
		___accelerationTimeAirborne_5 = value;
	}

	inline static int32_t get_offset_of_accelerationTimeGrounded_6() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___accelerationTimeGrounded_6)); }
	inline float get_accelerationTimeGrounded_6() const { return ___accelerationTimeGrounded_6; }
	inline float* get_address_of_accelerationTimeGrounded_6() { return &___accelerationTimeGrounded_6; }
	inline void set_accelerationTimeGrounded_6(float value)
	{
		___accelerationTimeGrounded_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_7() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveSpeed_7)); }
	inline float get_moveSpeed_7() const { return ___moveSpeed_7; }
	inline float* get_address_of_moveSpeed_7() { return &___moveSpeed_7; }
	inline void set_moveSpeed_7(float value)
	{
		___moveSpeed_7 = value;
	}

	inline static int32_t get_offset_of_wallJumpClimb_8() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallJumpClimb_8)); }
	inline Vector2_t2243707579  get_wallJumpClimb_8() const { return ___wallJumpClimb_8; }
	inline Vector2_t2243707579 * get_address_of_wallJumpClimb_8() { return &___wallJumpClimb_8; }
	inline void set_wallJumpClimb_8(Vector2_t2243707579  value)
	{
		___wallJumpClimb_8 = value;
	}

	inline static int32_t get_offset_of_wallJumpOff_9() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallJumpOff_9)); }
	inline Vector2_t2243707579  get_wallJumpOff_9() const { return ___wallJumpOff_9; }
	inline Vector2_t2243707579 * get_address_of_wallJumpOff_9() { return &___wallJumpOff_9; }
	inline void set_wallJumpOff_9(Vector2_t2243707579  value)
	{
		___wallJumpOff_9 = value;
	}

	inline static int32_t get_offset_of_wallLeap_10() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallLeap_10)); }
	inline Vector2_t2243707579  get_wallLeap_10() const { return ___wallLeap_10; }
	inline Vector2_t2243707579 * get_address_of_wallLeap_10() { return &___wallLeap_10; }
	inline void set_wallLeap_10(Vector2_t2243707579  value)
	{
		___wallLeap_10 = value;
	}

	inline static int32_t get_offset_of_canDoubleJump_11() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___canDoubleJump_11)); }
	inline bool get_canDoubleJump_11() const { return ___canDoubleJump_11; }
	inline bool* get_address_of_canDoubleJump_11() { return &___canDoubleJump_11; }
	inline void set_canDoubleJump_11(bool value)
	{
		___canDoubleJump_11 = value;
	}

	inline static int32_t get_offset_of_isDoubleJumping_12() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___isDoubleJumping_12)); }
	inline bool get_isDoubleJumping_12() const { return ___isDoubleJumping_12; }
	inline bool* get_address_of_isDoubleJumping_12() { return &___isDoubleJumping_12; }
	inline void set_isDoubleJumping_12(bool value)
	{
		___isDoubleJumping_12 = value;
	}

	inline static int32_t get_offset_of_wallSlideSpeedMax_13() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallSlideSpeedMax_13)); }
	inline float get_wallSlideSpeedMax_13() const { return ___wallSlideSpeedMax_13; }
	inline float* get_address_of_wallSlideSpeedMax_13() { return &___wallSlideSpeedMax_13; }
	inline void set_wallSlideSpeedMax_13(float value)
	{
		___wallSlideSpeedMax_13 = value;
	}

	inline static int32_t get_offset_of_wallStickTime_14() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallStickTime_14)); }
	inline float get_wallStickTime_14() const { return ___wallStickTime_14; }
	inline float* get_address_of_wallStickTime_14() { return &___wallStickTime_14; }
	inline void set_wallStickTime_14(float value)
	{
		___wallStickTime_14 = value;
	}

	inline static int32_t get_offset_of_timeToWallUnstick_15() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___timeToWallUnstick_15)); }
	inline float get_timeToWallUnstick_15() const { return ___timeToWallUnstick_15; }
	inline float* get_address_of_timeToWallUnstick_15() { return &___timeToWallUnstick_15; }
	inline void set_timeToWallUnstick_15(float value)
	{
		___timeToWallUnstick_15 = value;
	}

	inline static int32_t get_offset_of_gravity_16() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___gravity_16)); }
	inline float get_gravity_16() const { return ___gravity_16; }
	inline float* get_address_of_gravity_16() { return &___gravity_16; }
	inline void set_gravity_16(float value)
	{
		___gravity_16 = value;
	}

	inline static int32_t get_offset_of_maxJumpVelocity_17() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___maxJumpVelocity_17)); }
	inline float get_maxJumpVelocity_17() const { return ___maxJumpVelocity_17; }
	inline float* get_address_of_maxJumpVelocity_17() { return &___maxJumpVelocity_17; }
	inline void set_maxJumpVelocity_17(float value)
	{
		___maxJumpVelocity_17 = value;
	}

	inline static int32_t get_offset_of_minJumpVelocity_18() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___minJumpVelocity_18)); }
	inline float get_minJumpVelocity_18() const { return ___minJumpVelocity_18; }
	inline float* get_address_of_minJumpVelocity_18() { return &___minJumpVelocity_18; }
	inline void set_minJumpVelocity_18(float value)
	{
		___minJumpVelocity_18 = value;
	}

	inline static int32_t get_offset_of_jumpAmount_19() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___jumpAmount_19)); }
	inline float get_jumpAmount_19() const { return ___jumpAmount_19; }
	inline float* get_address_of_jumpAmount_19() { return &___jumpAmount_19; }
	inline void set_jumpAmount_19(float value)
	{
		___jumpAmount_19 = value;
	}

	inline static int32_t get_offset_of_velocity_20() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___velocity_20)); }
	inline Vector3_t2243707580  get_velocity_20() const { return ___velocity_20; }
	inline Vector3_t2243707580 * get_address_of_velocity_20() { return &___velocity_20; }
	inline void set_velocity_20(Vector3_t2243707580  value)
	{
		___velocity_20 = value;
	}

	inline static int32_t get_offset_of_velocityXSmoothing_21() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___velocityXSmoothing_21)); }
	inline float get_velocityXSmoothing_21() const { return ___velocityXSmoothing_21; }
	inline float* get_address_of_velocityXSmoothing_21() { return &___velocityXSmoothing_21; }
	inline void set_velocityXSmoothing_21(float value)
	{
		___velocityXSmoothing_21 = value;
	}

	inline static int32_t get_offset_of_controller_22() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___controller_22)); }
	inline Controller2D_t802485922 * get_controller_22() const { return ___controller_22; }
	inline Controller2D_t802485922 ** get_address_of_controller_22() { return &___controller_22; }
	inline void set_controller_22(Controller2D_t802485922 * value)
	{
		___controller_22 = value;
		Il2CppCodeGenWriteBarrier(&___controller_22, value);
	}

	inline static int32_t get_offset_of_directionalInput_23() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___directionalInput_23)); }
	inline Vector2_t2243707579  get_directionalInput_23() const { return ___directionalInput_23; }
	inline Vector2_t2243707579 * get_address_of_directionalInput_23() { return &___directionalInput_23; }
	inline void set_directionalInput_23(Vector2_t2243707579  value)
	{
		___directionalInput_23 = value;
	}

	inline static int32_t get_offset_of_wallSliding_24() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallSliding_24)); }
	inline bool get_wallSliding_24() const { return ___wallSliding_24; }
	inline bool* get_address_of_wallSliding_24() { return &___wallSliding_24; }
	inline void set_wallSliding_24(bool value)
	{
		___wallSliding_24 = value;
	}

	inline static int32_t get_offset_of_wallDirX_25() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___wallDirX_25)); }
	inline int32_t get_wallDirX_25() const { return ___wallDirX_25; }
	inline int32_t* get_address_of_wallDirX_25() { return &___wallDirX_25; }
	inline void set_wallDirX_25(int32_t value)
	{
		___wallDirX_25 = value;
	}

	inline static int32_t get_offset_of_stop_26() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___stop_26)); }
	inline bool get_stop_26() const { return ___stop_26; }
	inline bool* get_address_of_stop_26() { return &___stop_26; }
	inline void set_stop_26(bool value)
	{
		___stop_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
