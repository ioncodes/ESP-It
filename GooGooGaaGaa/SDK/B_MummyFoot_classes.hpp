#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MummyFoot

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MummyFoot.B_MummyFoot_C
// 0x0000 (0x0590 - 0x0590)
class AB_MummyFoot_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MummyFoot_C">();
	}
	static class AB_MummyFoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MummyFoot_C>();
	}
};
static_assert(alignof(AB_MummyFoot_C) == 0x000010, "Wrong alignment on AB_MummyFoot_C");
static_assert(sizeof(AB_MummyFoot_C) == 0x000590, "Wrong size on AB_MummyFoot_C");

}
