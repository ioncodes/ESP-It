#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CapLamp

#include "Basic.hpp"

#include "B_Lantern_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CapLamp.B_CapLamp_C
// 0x0000 (0x0600 - 0x0600)
class AB_CapLamp_C : public AB_Lantern_C
{
public:
	uint8                                         Pad_5F1[0x7];                                      // 0x05F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_WindForce_C*                         B_WindForce;                                       // 0x05F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CapLamp_C">();
	}
	static class AB_CapLamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CapLamp_C>();
	}
};
static_assert(alignof(AB_CapLamp_C) == 0x000010, "Wrong alignment on AB_CapLamp_C");
static_assert(sizeof(AB_CapLamp_C) == 0x000600, "Wrong size on AB_CapLamp_C");
static_assert(offsetof(AB_CapLamp_C, B_WindForce) == 0x0005F8, "Member 'AB_CapLamp_C::B_WindForce' has a wrong offset!");

}

