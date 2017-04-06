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

// UnityEngine.Transform
struct Transform_t3275118058;
// PlatformController/PassengerMovement
struct PassengerMovement_t3608812179;
struct PassengerMovement_t3608812179_marshaled_pinvoke;
struct PassengerMovement_t3608812179_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlatformController_PassengerMove3608812179.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void PlatformController/PassengerMovement::.ctor(UnityEngine.Transform,UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  void PassengerMovement__ctor_m607832616 (PassengerMovement_t3608812179 * __this, Transform_t3275118058 * ____transform0, Vector3_t2243707580  ____velocity1, bool ____standingOnPlatform2, bool ____moveBeforePlatform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct PassengerMovement_t3608812179;
struct PassengerMovement_t3608812179_marshaled_pinvoke;

extern "C" void PassengerMovement_t3608812179_marshal_pinvoke(const PassengerMovement_t3608812179& unmarshaled, PassengerMovement_t3608812179_marshaled_pinvoke& marshaled);
extern "C" void PassengerMovement_t3608812179_marshal_pinvoke_back(const PassengerMovement_t3608812179_marshaled_pinvoke& marshaled, PassengerMovement_t3608812179& unmarshaled);
extern "C" void PassengerMovement_t3608812179_marshal_pinvoke_cleanup(PassengerMovement_t3608812179_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct PassengerMovement_t3608812179;
struct PassengerMovement_t3608812179_marshaled_com;

extern "C" void PassengerMovement_t3608812179_marshal_com(const PassengerMovement_t3608812179& unmarshaled, PassengerMovement_t3608812179_marshaled_com& marshaled);
extern "C" void PassengerMovement_t3608812179_marshal_com_back(const PassengerMovement_t3608812179_marshaled_com& marshaled, PassengerMovement_t3608812179& unmarshaled);
extern "C" void PassengerMovement_t3608812179_marshal_com_cleanup(PassengerMovement_t3608812179_marshaled_com& marshaled);
