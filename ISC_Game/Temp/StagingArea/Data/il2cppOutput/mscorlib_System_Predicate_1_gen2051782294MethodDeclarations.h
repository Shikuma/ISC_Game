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

// System.Predicate`1<PlatformController/PassengerMovement>
struct Predicate_1_t2051782294;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_PlatformController_PassengerMove3608812179.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<PlatformController/PassengerMovement>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2848276984_gshared (Predicate_1_t2051782294 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2848276984(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2051782294 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2848276984_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<PlatformController/PassengerMovement>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2740852664_gshared (Predicate_1_t2051782294 * __this, PassengerMovement_t3608812179  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m2740852664(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2051782294 *, PassengerMovement_t3608812179 , const MethodInfo*))Predicate_1_Invoke_m2740852664_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<PlatformController/PassengerMovement>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m960295895_gshared (Predicate_1_t2051782294 * __this, PassengerMovement_t3608812179  ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m960295895(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2051782294 *, PassengerMovement_t3608812179 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m960295895_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<PlatformController/PassengerMovement>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m595724930_gshared (Predicate_1_t2051782294 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m595724930(__this, ___result0, method) ((  bool (*) (Predicate_1_t2051782294 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m595724930_gshared)(__this, ___result0, method)
