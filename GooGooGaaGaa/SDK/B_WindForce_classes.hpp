#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WindForce

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WindForce.B_WindForce_C
// 0x0008 (0x00E0 - 0x00D8)
class UB_WindForce_C final : public UWindForceComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_WindForce(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WindForce_C">();
	}
	static class UB_WindForce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_WindForce_C>();
	}
};
static_assert(alignof(UB_WindForce_C) == 0x000008, "Wrong alignment on UB_WindForce_C");
static_assert(sizeof(UB_WindForce_C) == 0x0000E0, "Wrong size on UB_WindForce_C");
static_assert(offsetof(UB_WindForce_C, UberGraphFrame) == 0x0000D8, "Member 'UB_WindForce_C::UberGraphFrame' has a wrong offset!");

}
