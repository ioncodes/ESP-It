#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Egg

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Egg.B_Egg_C
// 0x0000 (0x0590 - 0x0590)
class AB_Egg_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Egg_C">();
	}
	static class AB_Egg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Egg_C>();
	}
};
static_assert(alignof(AB_Egg_C) == 0x000010, "Wrong alignment on AB_Egg_C");
static_assert(sizeof(AB_Egg_C) == 0x000590, "Wrong size on AB_Egg_C");

}

