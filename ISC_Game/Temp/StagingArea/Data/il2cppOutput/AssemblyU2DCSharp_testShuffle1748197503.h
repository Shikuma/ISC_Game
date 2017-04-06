#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Random
struct Random_t1170710517;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// testShuffle
struct  testShuffle_t1748197503  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Random testShuffle::rng
	Random_t1170710517 * ___rng_2;

public:
	inline static int32_t get_offset_of_rng_2() { return static_cast<int32_t>(offsetof(testShuffle_t1748197503, ___rng_2)); }
	inline Random_t1170710517 * get_rng_2() const { return ___rng_2; }
	inline Random_t1170710517 ** get_address_of_rng_2() { return &___rng_2; }
	inline void set_rng_2(Random_t1170710517 * value)
	{
		___rng_2 = value;
		Il2CppCodeGenWriteBarrier(&___rng_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
