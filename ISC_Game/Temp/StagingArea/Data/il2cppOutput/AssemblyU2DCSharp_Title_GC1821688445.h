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
// LoadPlayer
struct LoadPlayer_t3461170579;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Title_GC
struct  Title_GC_t1821688445  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Title_GC::playerManager
	GameObject_t1756533147 * ___playerManager_2;
	// LoadPlayer Title_GC::lp
	LoadPlayer_t3461170579 * ___lp_3;

public:
	inline static int32_t get_offset_of_playerManager_2() { return static_cast<int32_t>(offsetof(Title_GC_t1821688445, ___playerManager_2)); }
	inline GameObject_t1756533147 * get_playerManager_2() const { return ___playerManager_2; }
	inline GameObject_t1756533147 ** get_address_of_playerManager_2() { return &___playerManager_2; }
	inline void set_playerManager_2(GameObject_t1756533147 * value)
	{
		___playerManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerManager_2, value);
	}

	inline static int32_t get_offset_of_lp_3() { return static_cast<int32_t>(offsetof(Title_GC_t1821688445, ___lp_3)); }
	inline LoadPlayer_t3461170579 * get_lp_3() const { return ___lp_3; }
	inline LoadPlayer_t3461170579 ** get_address_of_lp_3() { return &___lp_3; }
	inline void set_lp_3(LoadPlayer_t3461170579 * value)
	{
		___lp_3 = value;
		Il2CppCodeGenWriteBarrier(&___lp_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
