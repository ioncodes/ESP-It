#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TreasuremapPirateIsland

#include "Basic.hpp"

#include "B_Treasuremap_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TreasuremapPirateIsland.B_TreasuremapPirateIsland_C
// 0x0010 (0x05A0 - 0x0590)
class AB_TreasuremapPirateIsland_C final : public AB_Treasuremap_C
{
public:
	class UB_WindForce_C*                         B_WindForce1;                                      // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TreasuremapPirateIsland_C">();
	}
	static class AB_TreasuremapPirateIsland_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TreasuremapPirateIsland_C>();
	}
};
static_assert(alignof(AB_TreasuremapPirateIsland_C) == 0x000010, "Wrong alignment on AB_TreasuremapPirateIsland_C");
static_assert(sizeof(AB_TreasuremapPirateIsland_C) == 0x0005A0, "Wrong size on AB_TreasuremapPirateIsland_C");
static_assert(offsetof(AB_TreasuremapPirateIsland_C, B_WindForce1) == 0x000590, "Member 'AB_TreasuremapPirateIsland_C::B_WindForce1' has a wrong offset!");

}

