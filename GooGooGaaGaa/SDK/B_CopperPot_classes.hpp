#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CopperPot

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CopperPot.B_CopperPot_C
// 0x0000 (0x0590 - 0x0590)
class AB_CopperPot_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CopperPot_C">();
	}
	static class AB_CopperPot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CopperPot_C>();
	}
};
static_assert(alignof(AB_CopperPot_C) == 0x000010, "Wrong alignment on AB_CopperPot_C");
static_assert(sizeof(AB_CopperPot_C) == 0x000590, "Wrong size on AB_CopperPot_C");

}

