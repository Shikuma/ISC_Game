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

// Controller2D/CollisionInfo
struct  CollisionInfo_t915450943 
{
public:
	// System.Boolean Controller2D/CollisionInfo::above
	bool ___above_0;
	// System.Boolean Controller2D/CollisionInfo::below
	bool ___below_1;
	// System.Boolean Controller2D/CollisionInfo::left
	bool ___left_2;
	// System.Boolean Controller2D/CollisionInfo::right
	bool ___right_3;
	// System.Boolean Controller2D/CollisionInfo::climbingSlope
	bool ___climbingSlope_4;
	// System.Boolean Controller2D/CollisionInfo::descendingSlope
	bool ___descendingSlope_5;
	// System.Single Controller2D/CollisionInfo::slopeAngle
	float ___slopeAngle_6;
	// System.Single Controller2D/CollisionInfo::slopeAngleOld
	float ___slopeAngleOld_7;
	// UnityEngine.Vector2 Controller2D/CollisionInfo::moveAmountOld
	Vector2_t2243707579  ___moveAmountOld_8;
	// System.Int32 Controller2D/CollisionInfo::faceDir
	int32_t ___faceDir_9;
	// System.Boolean Controller2D/CollisionInfo::fallingThroughPlatform
	bool ___fallingThroughPlatform_10;

public:
	inline static int32_t get_offset_of_above_0() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___above_0)); }
	inline bool get_above_0() const { return ___above_0; }
	inline bool* get_address_of_above_0() { return &___above_0; }
	inline void set_above_0(bool value)
	{
		___above_0 = value;
	}

	inline static int32_t get_offset_of_below_1() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___below_1)); }
	inline bool get_below_1() const { return ___below_1; }
	inline bool* get_address_of_below_1() { return &___below_1; }
	inline void set_below_1(bool value)
	{
		___below_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___left_2)); }
	inline bool get_left_2() const { return ___left_2; }
	inline bool* get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(bool value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___right_3)); }
	inline bool get_right_3() const { return ___right_3; }
	inline bool* get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(bool value)
	{
		___right_3 = value;
	}

	inline static int32_t get_offset_of_climbingSlope_4() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___climbingSlope_4)); }
	inline bool get_climbingSlope_4() const { return ___climbingSlope_4; }
	inline bool* get_address_of_climbingSlope_4() { return &___climbingSlope_4; }
	inline void set_climbingSlope_4(bool value)
	{
		___climbingSlope_4 = value;
	}

	inline static int32_t get_offset_of_descendingSlope_5() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___descendingSlope_5)); }
	inline bool get_descendingSlope_5() const { return ___descendingSlope_5; }
	inline bool* get_address_of_descendingSlope_5() { return &___descendingSlope_5; }
	inline void set_descendingSlope_5(bool value)
	{
		___descendingSlope_5 = value;
	}

	inline static int32_t get_offset_of_slopeAngle_6() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___slopeAngle_6)); }
	inline float get_slopeAngle_6() const { return ___slopeAngle_6; }
	inline float* get_address_of_slopeAngle_6() { return &___slopeAngle_6; }
	inline void set_slopeAngle_6(float value)
	{
		___slopeAngle_6 = value;
	}

	inline static int32_t get_offset_of_slopeAngleOld_7() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___slopeAngleOld_7)); }
	inline float get_slopeAngleOld_7() const { return ___slopeAngleOld_7; }
	inline float* get_address_of_slopeAngleOld_7() { return &___slopeAngleOld_7; }
	inline void set_slopeAngleOld_7(float value)
	{
		___slopeAngleOld_7 = value;
	}

	inline static int32_t get_offset_of_moveAmountOld_8() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___moveAmountOld_8)); }
	inline Vector2_t2243707579  get_moveAmountOld_8() const { return ___moveAmountOld_8; }
	inline Vector2_t2243707579 * get_address_of_moveAmountOld_8() { return &___moveAmountOld_8; }
	inline void set_moveAmountOld_8(Vector2_t2243707579  value)
	{
		___moveAmountOld_8 = value;
	}

	inline static int32_t get_offset_of_faceDir_9() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___faceDir_9)); }
	inline int32_t get_faceDir_9() const { return ___faceDir_9; }
	inline int32_t* get_address_of_faceDir_9() { return &___faceDir_9; }
	inline void set_faceDir_9(int32_t value)
	{
		___faceDir_9 = value;
	}

	inline static int32_t get_offset_of_fallingThroughPlatform_10() { return static_cast<int32_t>(offsetof(CollisionInfo_t915450943, ___fallingThroughPlatform_10)); }
	inline bool get_fallingThroughPlatform_10() const { return ___fallingThroughPlatform_10; }
	inline bool* get_address_of_fallingThroughPlatform_10() { return &___fallingThroughPlatform_10; }
	inline void set_fallingThroughPlatform_10(bool value)
	{
		___fallingThroughPlatform_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Controller2D/CollisionInfo
struct CollisionInfo_t915450943_marshaled_pinvoke
{
	int32_t ___above_0;
	int32_t ___below_1;
	int32_t ___left_2;
	int32_t ___right_3;
	int32_t ___climbingSlope_4;
	int32_t ___descendingSlope_5;
	float ___slopeAngle_6;
	float ___slopeAngleOld_7;
	Vector2_t2243707579  ___moveAmountOld_8;
	int32_t ___faceDir_9;
	int32_t ___fallingThroughPlatform_10;
};
// Native definition for COM marshalling of Controller2D/CollisionInfo
struct CollisionInfo_t915450943_marshaled_com
{
	int32_t ___above_0;
	int32_t ___below_1;
	int32_t ___left_2;
	int32_t ___right_3;
	int32_t ___climbingSlope_4;
	int32_t ___descendingSlope_5;
	float ___slopeAngle_6;
	float ___slopeAngleOld_7;
	Vector2_t2243707579  ___moveAmountOld_8;
	int32_t ___faceDir_9;
	int32_t ___fallingThroughPlatform_10;
};
