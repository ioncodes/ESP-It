#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinWitchBroomBase

#include "Basic.hpp"

#include "B_SkinBodypart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinWitchBroomBase.B_SkinWitchBroomBase_C
// 0x0000 (0x02C8 - 0x02C8)
class AB_SkinWitchBroomBase_C : public AB_SkinBodypart_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinWitchBroomBase_C">();
	}
	static class AB_SkinWitchBroomBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinWitchBroomBase_C>();
	}
};
static_assert(alignof(AB_SkinWitchBroomBase_C) == 0x000008, "Wrong alignment on AB_SkinWitchBroomBase_C");
static_assert(sizeof(AB_SkinWitchBroomBase_C) == 0x0002C8, "Wrong size on AB_SkinWitchBroomBase_C");

}
