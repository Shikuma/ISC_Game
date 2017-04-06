#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_RaycastController_RaycastOrigins4054683774.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaycastController
struct  RaycastController_t1132005125  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask RaycastController::collisionMask
	LayerMask_t3188175821  ___collisionMask_2;
	// System.Int32 RaycastController::horizontalRayCount
	int32_t ___horizontalRayCount_5;
	// System.Int32 RaycastController::verticalRayCount
	int32_t ___verticalRayCount_6;
	// System.Single RaycastController::horizontalRaySpacing
	float ___horizontalRaySpacing_7;
	// System.Single RaycastController::verticalRaySpacing
	float ___verticalRaySpacing_8;
	// UnityEngine.BoxCollider2D RaycastController::coll
	BoxCollider2D_t948534547 * ___coll_9;
	// RaycastController/RaycastOrigins RaycastController::raycastOrigins
	RaycastOrigins_t4054683774  ___raycastOrigins_10;

public:
	inline static int32_t get_offset_of_collisionMask_2() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___collisionMask_2)); }
	inline LayerMask_t3188175821  get_collisionMask_2() const { return ___collisionMask_2; }
	inline LayerMask_t3188175821 * get_address_of_collisionMask_2() { return &___collisionMask_2; }
	inline void set_collisionMask_2(LayerMask_t3188175821  value)
	{
		___collisionMask_2 = value;
	}

	inline static int32_t get_offset_of_horizontalRayCount_5() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___horizontalRayCount_5)); }
	inline int32_t get_horizontalRayCount_5() const { return ___horizontalRayCount_5; }
	inline int32_t* get_address_of_horizontalRayCount_5() { return &___horizontalRayCount_5; }
	inline void set_horizontalRayCount_5(int32_t value)
	{
		___horizontalRayCount_5 = value;
	}

	inline static int32_t get_offset_of_verticalRayCount_6() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___verticalRayCount_6)); }
	inline int32_t get_verticalRayCount_6() const { return ___verticalRayCount_6; }
	inline int32_t* get_address_of_verticalRayCount_6() { return &___verticalRayCount_6; }
	inline void set_verticalRayCount_6(int32_t value)
	{
		___verticalRayCount_6 = value;
	}

	inline static int32_t get_offset_of_horizontalRaySpacing_7() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___horizontalRaySpacing_7)); }
	inline float get_horizontalRaySpacing_7() const { return ___horizontalRaySpacing_7; }
	inline float* get_address_of_horizontalRaySpacing_7() { return &___horizontalRaySpacing_7; }
	inline void set_horizontalRaySpacing_7(float value)
	{
		___horizontalRaySpacing_7 = value;
	}

	inline static int32_t get_offset_of_verticalRaySpacing_8() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___verticalRaySpacing_8)); }
	inline float get_verticalRaySpacing_8() const { return ___verticalRaySpacing_8; }
	inline float* get_address_of_verticalRaySpacing_8() { return &___verticalRaySpacing_8; }
	inline void set_verticalRaySpacing_8(float value)
	{
		___verticalRaySpacing_8 = value;
	}

	inline static int32_t get_offset_of_coll_9() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___coll_9)); }
	inline BoxCollider2D_t948534547 * get_coll_9() const { return ___coll_9; }
	inline BoxCollider2D_t948534547 ** get_address_of_coll_9() { return &___coll_9; }
	inline void set_coll_9(BoxCollider2D_t948534547 * value)
	{
		___coll_9 = value;
		Il2CppCodeGenWriteBarrier(&___coll_9, value);
	}

	inline static int32_t get_offset_of_raycastOrigins_10() { return static_cast<int32_t>(offsetof(RaycastController_t1132005125, ___raycastOrigins_10)); }
	inline RaycastOrigins_t4054683774  get_raycastOrigins_10() const { return ___raycastOrigins_10; }
	inline RaycastOrigins_t4054683774 * get_address_of_raycastOrigins_10() { return &___raycastOrigins_10; }
	inline void set_raycastOrigins_10(RaycastOrigins_t4054683774  value)
	{
		___raycastOrigins_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
