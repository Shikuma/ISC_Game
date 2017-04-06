#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_RaycastController1132005125.h"
#include "AssemblyU2DCSharp_Controller2D_CollisionInfo915450943.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller2D
struct  Controller2D_t802485922  : public RaycastController_t1132005125
{
public:
	// System.Single Controller2D::fallingThroughPlatformResetTimer
	float ___fallingThroughPlatformResetTimer_11;
	// System.Single Controller2D::maxClimbAngle
	float ___maxClimbAngle_12;
	// System.Single Controller2D::maxDescendAngle
	float ___maxDescendAngle_13;
	// Controller2D/CollisionInfo Controller2D::collisions
	CollisionInfo_t915450943  ___collisions_14;
	// UnityEngine.Vector2 Controller2D::playerInput
	Vector2_t2243707579  ___playerInput_15;

public:
	inline static int32_t get_offset_of_fallingThroughPlatformResetTimer_11() { return static_cast<int32_t>(offsetof(Controller2D_t802485922, ___fallingThroughPlatformResetTimer_11)); }
	inline float get_fallingThroughPlatformResetTimer_11() const { return ___fallingThroughPlatformResetTimer_11; }
	inline float* get_address_of_fallingThroughPlatformResetTimer_11() { return &___fallingThroughPlatformResetTimer_11; }
	inline void set_fallingThroughPlatformResetTimer_11(float value)
	{
		___fallingThroughPlatformResetTimer_11 = value;
	}

	inline static int32_t get_offset_of_maxClimbAngle_12() { return static_cast<int32_t>(offsetof(Controller2D_t802485922, ___maxClimbAngle_12)); }
	inline float get_maxClimbAngle_12() const { return ___maxClimbAngle_12; }
	inline float* get_address_of_maxClimbAngle_12() { return &___maxClimbAngle_12; }
	inline void set_maxClimbAngle_12(float value)
	{
		___maxClimbAngle_12 = value;
	}

	inline static int32_t get_offset_of_maxDescendAngle_13() { return static_cast<int32_t>(offsetof(Controller2D_t802485922, ___maxDescendAngle_13)); }
	inline float get_maxDescendAngle_13() const { return ___maxDescendAngle_13; }
	inline float* get_address_of_maxDescendAngle_13() { return &___maxDescendAngle_13; }
	inline void set_maxDescendAngle_13(float value)
	{
		___maxDescendAngle_13 = value;
	}

	inline static int32_t get_offset_of_collisions_14() { return static_cast<int32_t>(offsetof(Controller2D_t802485922, ___collisions_14)); }
	inline CollisionInfo_t915450943  get_collisions_14() const { return ___collisions_14; }
	inline CollisionInfo_t915450943 * get_address_of_collisions_14() { return &___collisions_14; }
	inline void set_collisions_14(CollisionInfo_t915450943  value)
	{
		___collisions_14 = value;
	}

	inline static int32_t get_offset_of_playerInput_15() { return static_cast<int32_t>(offsetof(Controller2D_t802485922, ___playerInput_15)); }
	inline Vector2_t2243707579  get_playerInput_15() const { return ___playerInput_15; }
	inline Vector2_t2243707579 * get_address_of_playerInput_15() { return &___playerInput_15; }
	inline void set_playerInput_15(Vector2_t2243707579  value)
	{
		___playerInput_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
