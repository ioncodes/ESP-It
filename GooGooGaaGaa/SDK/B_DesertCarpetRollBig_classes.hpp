#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DesertCarpetRollBig

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DesertCarpetRollBig.B_DesertCarpetRollBig_C
// 0x0000 (0x0590 - 0x0590)
class AB_DesertCarpetRollBig_C final : public AB_StaticMeshProp_C
{
public:
	class UB_WindForce_C*                         B_WindForce;                                       // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DesertCarpetRollBig_C">();
	}
	static class AB_DesertCarpetRollBig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DesertCarpetRollBig_C>();
	}
};
static_assert(alignof(AB_DesertCarpetRollBig_C) == 0x000010, "Wrong alignment on AB_DesertCarpetRollBig_C");
static_assert(sizeof(AB_DesertCarpetRollBig_C) == 0x000590, "Wrong size on AB_DesertCarpetRollBig_C");
static_assert(offsetof(AB_DesertCarpetRollBig_C, B_WindForce) == 0x000588, "Member 'AB_DesertCarpetRollBig_C::B_WindForce' has a wrong offset!");

}

