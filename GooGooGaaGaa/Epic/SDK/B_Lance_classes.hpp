#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Lance

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Lance.B_Lance_C
// 0x0000 (0x0590 - 0x0590)
class AB_Lance_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Lance_C">();
	}
	static class AB_Lance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Lance_C>();
	}
};
static_assert(alignof(AB_Lance_C) == 0x000010, "Wrong alignment on AB_Lance_C");
static_assert(sizeof(AB_Lance_C) == 0x000590, "Wrong size on AB_Lance_C");

}
