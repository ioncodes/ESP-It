#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BoneLadder

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BoneLadder.B_BoneLadder_C
// 0x0000 (0x0590 - 0x0590)
class AB_BoneLadder_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BoneLadder_C">();
	}
	static class AB_BoneLadder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BoneLadder_C>();
	}
};
static_assert(alignof(AB_BoneLadder_C) == 0x000010, "Wrong alignment on AB_BoneLadder_C");
static_assert(sizeof(AB_BoneLadder_C) == 0x000590, "Wrong size on AB_BoneLadder_C");

}

