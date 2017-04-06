#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t1301679762;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_Singleton_1_gen2223137661.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioController
struct  AudioController_t1047253274  : public Singleton_1_t2223137661
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> AudioController::sfx
	List_1_t1301679762 * ___sfx_5;
	// UnityEngine.AudioSource AudioController::audioSource
	AudioSource_t1135106623 * ___audioSource_6;

public:
	inline static int32_t get_offset_of_sfx_5() { return static_cast<int32_t>(offsetof(AudioController_t1047253274, ___sfx_5)); }
	inline List_1_t1301679762 * get_sfx_5() const { return ___sfx_5; }
	inline List_1_t1301679762 ** get_address_of_sfx_5() { return &___sfx_5; }
	inline void set_sfx_5(List_1_t1301679762 * value)
	{
		___sfx_5 = value;
		Il2CppCodeGenWriteBarrier(&___sfx_5, value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(AudioController_t1047253274, ___audioSource_6)); }
	inline AudioSource_t1135106623 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t1135106623 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
