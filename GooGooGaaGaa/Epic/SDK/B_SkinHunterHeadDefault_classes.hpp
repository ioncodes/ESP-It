#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinHunterHeadDefault

#include "Basic.hpp"

#include "B_SkinHunterHeadBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinHunterHeadDefault.B_SkinHunterHeadDefault_C
// 0x0000 (0x02E0 - 0x02E0)
class AB_SkinHunterHeadDefault_C final : public AB_SkinHunterHeadBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinHunterHeadDefault_C">();
	}
	static class AB_SkinHunterHeadDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinHunterHeadDefault_C>();
	}
};
static_assert(alignof(AB_SkinHunterHeadDefault_C) == 0x000008, "Wrong alignment on AB_SkinHunterHeadDefault_C");
static_assert(sizeof(AB_SkinHunterHeadDefault_C) == 0x0002E0, "Wrong size on AB_SkinHunterHeadDefault_C");

}
