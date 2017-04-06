#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Collections.Generic.List`1<PlatformController/PassengerMovement>
struct List_1_t2977933311;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Controller2D>
struct Dictionary_2_t544140827;

#include "AssemblyU2DCSharp_RaycastController1132005125.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformController
struct  PlatformController_t1174190185  : public RaycastController_t1132005125
{
public:
	// UnityEngine.LayerMask PlatformController::passengerMask
	LayerMask_t3188175821  ___passengerMask_11;
	// UnityEngine.Vector3[] PlatformController::localWaypoints
	Vector3U5BU5D_t1172311765* ___localWaypoints_12;
	// UnityEngine.Vector3[] PlatformController::globalWaypoints
	Vector3U5BU5D_t1172311765* ___globalWaypoints_13;
	// System.Single PlatformController::speed
	float ___speed_14;
	// System.Boolean PlatformController::cyclic
	bool ___cyclic_15;
	// System.Single PlatformController::waitTime
	float ___waitTime_16;
	// System.Single PlatformController::easeAmount
	float ___easeAmount_17;
	// System.Int32 PlatformController::fromWaypointIndex
	int32_t ___fromWaypointIndex_18;
	// System.Single PlatformController::percentBetweenWaypoints
	float ___percentBetweenWaypoints_19;
	// System.Single PlatformController::nextMoveTime
	float ___nextMoveTime_20;
	// System.Collections.Generic.List`1<PlatformController/PassengerMovement> PlatformController::passengerMovement
	List_1_t2977933311 * ___passengerMovement_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Controller2D> PlatformController::passengerDictionary
	Dictionary_2_t544140827 * ___passengerDictionary_22;

public:
	inline static int32_t get_offset_of_passengerMask_11() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___passengerMask_11)); }
	inline LayerMask_t3188175821  get_passengerMask_11() const { return ___passengerMask_11; }
	inline LayerMask_t3188175821 * get_address_of_passengerMask_11() { return &___passengerMask_11; }
	inline void set_passengerMask_11(LayerMask_t3188175821  value)
	{
		___passengerMask_11 = value;
	}

	inline static int32_t get_offset_of_localWaypoints_12() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___localWaypoints_12)); }
	inline Vector3U5BU5D_t1172311765* get_localWaypoints_12() const { return ___localWaypoints_12; }
	inline Vector3U5BU5D_t1172311765** get_address_of_localWaypoints_12() { return &___localWaypoints_12; }
	inline void set_localWaypoints_12(Vector3U5BU5D_t1172311765* value)
	{
		___localWaypoints_12 = value;
		Il2CppCodeGenWriteBarrier(&___localWaypoints_12, value);
	}

	inline static int32_t get_offset_of_globalWaypoints_13() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___globalWaypoints_13)); }
	inline Vector3U5BU5D_t1172311765* get_globalWaypoints_13() const { return ___globalWaypoints_13; }
	inline Vector3U5BU5D_t1172311765** get_address_of_globalWaypoints_13() { return &___globalWaypoints_13; }
	inline void set_globalWaypoints_13(Vector3U5BU5D_t1172311765* value)
	{
		___globalWaypoints_13 = value;
		Il2CppCodeGenWriteBarrier(&___globalWaypoints_13, value);
	}

	inline static int32_t get_offset_of_speed_14() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___speed_14)); }
	inline float get_speed_14() const { return ___speed_14; }
	inline float* get_address_of_speed_14() { return &___speed_14; }
	inline void set_speed_14(float value)
	{
		___speed_14 = value;
	}

	inline static int32_t get_offset_of_cyclic_15() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___cyclic_15)); }
	inline bool get_cyclic_15() const { return ___cyclic_15; }
	inline bool* get_address_of_cyclic_15() { return &___cyclic_15; }
	inline void set_cyclic_15(bool value)
	{
		___cyclic_15 = value;
	}

	inline static int32_t get_offset_of_waitTime_16() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___waitTime_16)); }
	inline float get_waitTime_16() const { return ___waitTime_16; }
	inline float* get_address_of_waitTime_16() { return &___waitTime_16; }
	inline void set_waitTime_16(float value)
	{
		___waitTime_16 = value;
	}

	inline static int32_t get_offset_of_easeAmount_17() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___easeAmount_17)); }
	inline float get_easeAmount_17() const { return ___easeAmount_17; }
	inline float* get_address_of_easeAmount_17() { return &___easeAmount_17; }
	inline void set_easeAmount_17(float value)
	{
		___easeAmount_17 = value;
	}

	inline static int32_t get_offset_of_fromWaypointIndex_18() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___fromWaypointIndex_18)); }
	inline int32_t get_fromWaypointIndex_18() const { return ___fromWaypointIndex_18; }
	inline int32_t* get_address_of_fromWaypointIndex_18() { return &___fromWaypointIndex_18; }
	inline void set_fromWaypointIndex_18(int32_t value)
	{
		___fromWaypointIndex_18 = value;
	}

	inline static int32_t get_offset_of_percentBetweenWaypoints_19() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___percentBetweenWaypoints_19)); }
	inline float get_percentBetweenWaypoints_19() const { return ___percentBetweenWaypoints_19; }
	inline float* get_address_of_percentBetweenWaypoints_19() { return &___percentBetweenWaypoints_19; }
	inline void set_percentBetweenWaypoints_19(float value)
	{
		___percentBetweenWaypoints_19 = value;
	}

	inline static int32_t get_offset_of_nextMoveTime_20() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___nextMoveTime_20)); }
	inline float get_nextMoveTime_20() const { return ___nextMoveTime_20; }
	inline float* get_address_of_nextMoveTime_20() { return &___nextMoveTime_20; }
	inline void set_nextMoveTime_20(float value)
	{
		___nextMoveTime_20 = value;
	}

	inline static int32_t get_offset_of_passengerMovement_21() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___passengerMovement_21)); }
	inline List_1_t2977933311 * get_passengerMovement_21() const { return ___passengerMovement_21; }
	inline List_1_t2977933311 ** get_address_of_passengerMovement_21() { return &___passengerMovement_21; }
	inline void set_passengerMovement_21(List_1_t2977933311 * value)
	{
		___passengerMovement_21 = value;
		Il2CppCodeGenWriteBarrier(&___passengerMovement_21, value);
	}

	inline static int32_t get_offset_of_passengerDictionary_22() { return static_cast<int32_t>(offsetof(PlatformController_t1174190185, ___passengerDictionary_22)); }
	inline Dictionary_2_t544140827 * get_passengerDictionary_22() const { return ___passengerDictionary_22; }
	inline Dictionary_2_t544140827 ** get_address_of_passengerDictionary_22() { return &___passengerDictionary_22; }
	inline void set_passengerDictionary_22(Dictionary_2_t544140827 * value)
	{
		___passengerDictionary_22 = value;
		Il2CppCodeGenWriteBarrier(&___passengerDictionary_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
