#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WateringCan

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WateringCan.B_WateringCan_C
// 0x0000 (0x0590 - 0x0590)
class AB_WateringCan_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WateringCan_C">();
	}
	static class AB_WateringCan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WateringCan_C>();
	}
};
static_assert(alignof(AB_WateringCan_C) == 0x000010, "Wrong alignment on AB_WateringCan_C");
static_assert(sizeof(AB_WateringCan_C) == 0x000590, "Wrong size on AB_WateringCan_C");

}
