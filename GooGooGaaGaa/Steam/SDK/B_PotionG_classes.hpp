#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PotionG

#include "Basic.hpp"

#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PotionG.B_PotionG_C
// 0x0000 (0x0590 - 0x0590)
class AB_PotionG_C final : public AB_StaticMeshProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PotionG_C">();
	}
	static class AB_PotionG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PotionG_C>();
	}
};
static_assert(alignof(AB_PotionG_C) == 0x000010, "Wrong alignment on AB_PotionG_C");
static_assert(sizeof(AB_PotionG_C) == 0x000590, "Wrong size on AB_PotionG_C");

}

