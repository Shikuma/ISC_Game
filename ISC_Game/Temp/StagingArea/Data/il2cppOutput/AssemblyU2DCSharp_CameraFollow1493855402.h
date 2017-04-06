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
#include "AssemblyU2DCSharp_CameraFollow_FocusArea2054919436.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// Controller2D CameraFollow::target
	Controller2D_t802485922 * ___target_2;
	// System.Single CameraFollow::verticalOffset
	float ___verticalOffset_3;
	// System.Single CameraFollow::lookAheadDstX
	float ___lookAheadDstX_4;
	// System.Single CameraFollow::lookSmoothTimeX
	float ___lookSmoothTimeX_5;
	// System.Single CameraFollow::verticalSmoothTime
	float ___verticalSmoothTime_6;
	// UnityEngine.Vector2 CameraFollow::focusAreaSize
	Vector2_t2243707579  ___focusAreaSize_7;
	// CameraFollow/FocusArea CameraFollow::focusArea
	FocusArea_t2054919436  ___focusArea_8;
	// System.Single CameraFollow::currentLookAheadX
	float ___currentLookAheadX_9;
	// System.Single CameraFollow::targetLookAheadX
	float ___targetLookAheadX_10;
	// System.Single CameraFollow::lookAheadDirX
	float ___lookAheadDirX_11;
	// System.Single CameraFollow::smoothLookVelocityX
	float ___smoothLookVelocityX_12;
	// System.Single CameraFollow::smoothVelocityY
	float ___smoothVelocityY_13;
	// System.Boolean CameraFollow::lookAheadStopped
	bool ___lookAheadStopped_14;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___target_2)); }
	inline Controller2D_t802485922 * get_target_2() const { return ___target_2; }
	inline Controller2D_t802485922 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Controller2D_t802485922 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_verticalOffset_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___verticalOffset_3)); }
	inline float get_verticalOffset_3() const { return ___verticalOffset_3; }
	inline float* get_address_of_verticalOffset_3() { return &___verticalOffset_3; }
	inline void set_verticalOffset_3(float value)
	{
		___verticalOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadDstX_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___lookAheadDstX_4)); }
	inline float get_lookAheadDstX_4() const { return ___lookAheadDstX_4; }
	inline float* get_address_of_lookAheadDstX_4() { return &___lookAheadDstX_4; }
	inline void set_lookAheadDstX_4(float value)
	{
		___lookAheadDstX_4 = value;
	}

	inline static int32_t get_offset_of_lookSmoothTimeX_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___lookSmoothTimeX_5)); }
	inline float get_lookSmoothTimeX_5() const { return ___lookSmoothTimeX_5; }
	inline float* get_address_of_lookSmoothTimeX_5() { return &___lookSmoothTimeX_5; }
	inline void set_lookSmoothTimeX_5(float value)
	{
		___lookSmoothTimeX_5 = value;
	}

	inline static int32_t get_offset_of_verticalSmoothTime_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___verticalSmoothTime_6)); }
	inline float get_verticalSmoothTime_6() const { return ___verticalSmoothTime_6; }
	inline float* get_address_of_verticalSmoothTime_6() { return &___verticalSmoothTime_6; }
	inline void set_verticalSmoothTime_6(float value)
	{
		___verticalSmoothTime_6 = value;
	}

	inline static int32_t get_offset_of_focusAreaSize_7() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___focusAreaSize_7)); }
	inline Vector2_t2243707579  get_focusAreaSize_7() const { return ___focusAreaSize_7; }
	inline Vector2_t2243707579 * get_address_of_focusAreaSize_7() { return &___focusAreaSize_7; }
	inline void set_focusAreaSize_7(Vector2_t2243707579  value)
	{
		___focusAreaSize_7 = value;
	}

	inline static int32_t get_offset_of_focusArea_8() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___focusArea_8)); }
	inline FocusArea_t2054919436  get_focusArea_8() const { return ___focusArea_8; }
	inline FocusArea_t2054919436 * get_address_of_focusArea_8() { return &___focusArea_8; }
	inline void set_focusArea_8(FocusArea_t2054919436  value)
	{
		___focusArea_8 = value;
	}

	inline static int32_t get_offset_of_currentLookAheadX_9() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___currentLookAheadX_9)); }
	inline float get_currentLookAheadX_9() const { return ___currentLookAheadX_9; }
	inline float* get_address_of_currentLookAheadX_9() { return &___currentLookAheadX_9; }
	inline void set_currentLookAheadX_9(float value)
	{
		___currentLookAheadX_9 = value;
	}

	inline static int32_t get_offset_of_targetLookAheadX_10() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___targetLookAheadX_10)); }
	inline float get_targetLookAheadX_10() const { return ___targetLookAheadX_10; }
	inline float* get_address_of_targetLookAheadX_10() { return &___targetLookAheadX_10; }
	inline void set_targetLookAheadX_10(float value)
	{
		___targetLookAheadX_10 = value;
	}

	inline static int32_t get_offset_of_lookAheadDirX_11() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___lookAheadDirX_11)); }
	inline float get_lookAheadDirX_11() const { return ___lookAheadDirX_11; }
	inline float* get_address_of_lookAheadDirX_11() { return &___lookAheadDirX_11; }
	inline void set_lookAheadDirX_11(float value)
	{
		___lookAheadDirX_11 = value;
	}

	inline static int32_t get_offset_of_smoothLookVelocityX_12() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___smoothLookVelocityX_12)); }
	inline float get_smoothLookVelocityX_12() const { return ___smoothLookVelocityX_12; }
	inline float* get_address_of_smoothLookVelocityX_12() { return &___smoothLookVelocityX_12; }
	inline void set_smoothLookVelocityX_12(float value)
	{
		___smoothLookVelocityX_12 = value;
	}

	inline static int32_t get_offset_of_smoothVelocityY_13() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___smoothVelocityY_13)); }
	inline float get_smoothVelocityY_13() const { return ___smoothVelocityY_13; }
	inline float* get_address_of_smoothVelocityY_13() { return &___smoothVelocityY_13; }
	inline void set_smoothVelocityY_13(float value)
	{
		___smoothVelocityY_13 = value;
	}

	inline static int32_t get_offset_of_lookAheadStopped_14() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___lookAheadStopped_14)); }
	inline bool get_lookAheadStopped_14() const { return ___lookAheadStopped_14; }
	inline bool* get_address_of_lookAheadStopped_14() { return &___lookAheadStopped_14; }
	inline void set_lookAheadStopped_14(bool value)
	{
		___lookAheadStopped_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
