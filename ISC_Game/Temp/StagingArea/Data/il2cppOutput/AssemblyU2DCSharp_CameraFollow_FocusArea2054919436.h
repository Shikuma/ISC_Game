#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow/FocusArea
struct  FocusArea_t2054919436 
{
public:
	// UnityEngine.Vector2 CameraFollow/FocusArea::centre
	Vector2_t2243707579  ___centre_0;
	// UnityEngine.Vector2 CameraFollow/FocusArea::velocity
	Vector2_t2243707579  ___velocity_1;
	// System.Single CameraFollow/FocusArea::left
	float ___left_2;
	// System.Single CameraFollow/FocusArea::right
	float ___right_3;
	// System.Single CameraFollow/FocusArea::top
	float ___top_4;
	// System.Single CameraFollow/FocusArea::bottom
	float ___bottom_5;

public:
	inline static int32_t get_offset_of_centre_0() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___centre_0)); }
	inline Vector2_t2243707579  get_centre_0() const { return ___centre_0; }
	inline Vector2_t2243707579 * get_address_of_centre_0() { return &___centre_0; }
	inline void set_centre_0(Vector2_t2243707579  value)
	{
		___centre_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___velocity_1)); }
	inline Vector2_t2243707579  get_velocity_1() const { return ___velocity_1; }
	inline Vector2_t2243707579 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector2_t2243707579  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___left_2)); }
	inline float get_left_2() const { return ___left_2; }
	inline float* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(float value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___right_3)); }
	inline float get_right_3() const { return ___right_3; }
	inline float* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(float value)
	{
		___right_3 = value;
	}

	inline static int32_t get_offset_of_top_4() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___top_4)); }
	inline float get_top_4() const { return ___top_4; }
	inline float* get_address_of_top_4() { return &___top_4; }
	inline void set_top_4(float value)
	{
		___top_4 = value;
	}

	inline static int32_t get_offset_of_bottom_5() { return static_cast<int32_t>(offsetof(FocusArea_t2054919436, ___bottom_5)); }
	inline float get_bottom_5() const { return ___bottom_5; }
	inline float* get_address_of_bottom_5() { return &___bottom_5; }
	inline void set_bottom_5(float value)
	{
		___bottom_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
