#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformController/PassengerMovement
struct  PassengerMovement_t3608812179 
{
public:
	// UnityEngine.Transform PlatformController/PassengerMovement::transform
	Transform_t3275118058 * ___transform_0;
	// UnityEngine.Vector3 PlatformController/PassengerMovement::velocity
	Vector3_t2243707580  ___velocity_1;
	// System.Boolean PlatformController/PassengerMovement::standingOnPlatform
	bool ___standingOnPlatform_2;
	// System.Boolean PlatformController/PassengerMovement::moveBeforePlatform
	bool ___moveBeforePlatform_3;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(PassengerMovement_t3608812179, ___transform_0)); }
	inline Transform_t3275118058 * get_transform_0() const { return ___transform_0; }
	inline Transform_t3275118058 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_t3275118058 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier(&___transform_0, value);
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(PassengerMovement_t3608812179, ___velocity_1)); }
	inline Vector3_t2243707580  get_velocity_1() const { return ___velocity_1; }
	inline Vector3_t2243707580 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector3_t2243707580  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_standingOnPlatform_2() { return static_cast<int32_t>(offsetof(PassengerMovement_t3608812179, ___standingOnPlatform_2)); }
	inline bool get_standingOnPlatform_2() const { return ___standingOnPlatform_2; }
	inline bool* get_address_of_standingOnPlatform_2() { return &___standingOnPlatform_2; }
	inline void set_standingOnPlatform_2(bool value)
	{
		___standingOnPlatform_2 = value;
	}

	inline static int32_t get_offset_of_moveBeforePlatform_3() { return static_cast<int32_t>(offsetof(PassengerMovement_t3608812179, ___moveBeforePlatform_3)); }
	inline bool get_moveBeforePlatform_3() const { return ___moveBeforePlatform_3; }
	inline bool* get_address_of_moveBeforePlatform_3() { return &___moveBeforePlatform_3; }
	inline void set_moveBeforePlatform_3(bool value)
	{
		___moveBeforePlatform_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PlatformController/PassengerMovement
struct PassengerMovement_t3608812179_marshaled_pinvoke
{
	Transform_t3275118058 * ___transform_0;
	Vector3_t2243707580  ___velocity_1;
	int32_t ___standingOnPlatform_2;
	int32_t ___moveBeforePlatform_3;
};
// Native definition for COM marshalling of PlatformController/PassengerMovement
struct PassengerMovement_t3608812179_marshaled_com
{
	Transform_t3275118058 * ___transform_0;
	Vector3_t2243707580  ___velocity_1;
	int32_t ___standingOnPlatform_2;
	int32_t ___moveBeforePlatform_3;
};
