#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinWitchHeadDefault

#include "Basic.hpp"

#include "B_SkinWitchHeadBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinWitchHeadDefault.B_SkinWitchHeadDefault_C
// 0x0000 (0x02C8 - 0x02C8)
class AB_SkinWitchHeadDefault_C final : public AB_SkinWitchHeadBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinWitchHeadDefault_C">();
	}
	static class AB_SkinWitchHeadDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinWitchHeadDefault_C>();
	}
};
static_assert(alignof(AB_SkinWitchHeadDefault_C) == 0x000008, "Wrong alignment on AB_SkinWitchHeadDefault_C");
static_assert(sizeof(AB_SkinWitchHeadDefault_C) == 0x0002C8, "Wrong size on AB_SkinWitchHeadDefault_C");

}

