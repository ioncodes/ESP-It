#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinWitchHatDefault

#include "Basic.hpp"

#include "B_SkinWitchHatBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SkinWitchHatDefault.B_SkinWitchHatDefault_C
// 0x0008 (0x02B8 - 0x02B0)
class AB_SkinWitchHatDefault_C final : public AB_SkinWitchHatBase_C
{
public:
	class USkeletalMeshComponent*                 SK_DefaultHat;                                     // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SkinWitchHatDefault_C">();
	}
	static class AB_SkinWitchHatDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SkinWitchHatDefault_C>();
	}
};
static_assert(alignof(AB_SkinWitchHatDefault_C) == 0x000008, "Wrong alignment on AB_SkinWitchHatDefault_C");
static_assert(sizeof(AB_SkinWitchHatDefault_C) == 0x0002B8, "Wrong size on AB_SkinWitchHatDefault_C");
static_assert(offsetof(AB_SkinWitchHatDefault_C, SK_DefaultHat) == 0x0002B0, "Member 'AB_SkinWitchHatDefault_C::SK_DefaultHat' has a wrong offset!");

}
