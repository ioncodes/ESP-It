#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RockPillow

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_RockPillow.B_RockPillow_C
// 0x0000 (0x0590 - 0x0590)
class AB_RockPillow_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_RockPillow_C">();
	}
	static class AB_RockPillow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_RockPillow_C>();
	}
};
static_assert(alignof(AB_RockPillow_C) == 0x000010, "Wrong alignment on AB_RockPillow_C");
static_assert(sizeof(AB_RockPillow_C) == 0x000590, "Wrong size on AB_RockPillow_C");

}
