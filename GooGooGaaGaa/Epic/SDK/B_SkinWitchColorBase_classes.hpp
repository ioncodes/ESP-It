#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinWitchColorBase

#include "Basic.hpp"

#include "B_SkinColor_structs.hpp"
#include "B_SkinItem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinWitchColorBase.B_SkinWitchColorBase_C
// 0x0038 (0x02E0 - 0x02A8)
class AB_SkinWitchColorBase_C : public AB_SkinItem_C
{
public:
	struct FB_SkinColor                           SkinColor;                                         // 0x02A8(0x0038)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinWitchColorBase_C">();
	}
	static class AB_SkinWitchColorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinWitchColorBase_C>();
	}
};
static_assert(alignof(AB_SkinWitchColorBase_C) == 0x000008, "Wrong alignment on AB_SkinWitchColorBase_C");
static_assert(sizeof(AB_SkinWitchColorBase_C) == 0x0002E0, "Wrong size on AB_SkinWitchColorBase_C");
static_assert(offsetof(AB_SkinWitchColorBase_C, SkinColor) == 0x0002A8, "Member 'AB_SkinWitchColorBase_C::SkinColor' has a wrong offset!");

}
