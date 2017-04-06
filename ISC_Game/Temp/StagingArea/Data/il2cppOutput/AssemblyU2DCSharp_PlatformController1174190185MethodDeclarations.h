#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlatformController
struct PlatformController_t1174190185;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PlatformController::.ctor()
extern "C"  void PlatformController__ctor_m1922030282 (PlatformController_t1174190185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformController::Start()
extern "C"  void PlatformController_Start_m3042712330 (PlatformController_t1174190185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformController::Update()
extern "C"  void PlatformController_Update_m3098775913 (PlatformController_t1174190185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlatformController::Ease(System.Single)
extern "C"  float PlatformController_Ease_m2564580605 (PlatformController_t1174190185 * __this, float ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlatformController::CalculatePlatformMovement()
extern "C"  Vector3_t2243707580  PlatformController_CalculatePlatformMovement_m1992791898 (PlatformController_t1174190185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformController::MovePassengers(System.Boolean)
extern "C"  void PlatformController_MovePassengers_m1719417723 (PlatformController_t1174190185 * __this, bool ___beforeMovePlatform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformController::CalculatePassengerMovement(UnityEngine.Vector3)
extern "C"  void PlatformController_CalculatePassengerMovement_m1970309558 (PlatformController_t1174190185 * __this, Vector3_t2243707580  ___velocity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlatformController::OnDrawGizmos()
extern "C"  void PlatformController_OnDrawGizmos_m3867928292 (PlatformController_t1174190185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
