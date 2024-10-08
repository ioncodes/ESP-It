#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PropRetaliationParameters

#include "Basic.hpp"

#include "PropWitchHuntModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PropRetaliationParameters.B_PropRetaliationParameters_C
// 0x0020 (0x0080 - 0x0060)
class UB_PropRetaliationParameters_C final : public UModParameters
{
public:
	class UClass*                                 ModActor;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        HunterHealth;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SingleTargetReflectionRatio;                       // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AreaDamageReflectionRatio;                         // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PropRetaliationParameters_C">();
	}
	static class UB_PropRetaliationParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_PropRetaliationParameters_C>();
	}
};
static_assert(alignof(UB_PropRetaliationParameters_C) == 0x000008, "Wrong alignment on UB_PropRetaliationParameters_C");
static_assert(sizeof(UB_PropRetaliationParameters_C) == 0x000080, "Wrong size on UB_PropRetaliationParameters_C");
static_assert(offsetof(UB_PropRetaliationParameters_C, ModActor) == 0x000060, "Member 'UB_PropRetaliationParameters_C::ModActor' has a wrong offset!");
static_assert(offsetof(UB_PropRetaliationParameters_C, HunterHealth) == 0x000068, "Member 'UB_PropRetaliationParameters_C::HunterHealth' has a wrong offset!");
static_assert(offsetof(UB_PropRetaliationParameters_C, SingleTargetReflectionRatio) == 0x000070, "Member 'UB_PropRetaliationParameters_C::SingleTargetReflectionRatio' has a wrong offset!");
static_assert(offsetof(UB_PropRetaliationParameters_C, AreaDamageReflectionRatio) == 0x000078, "Member 'UB_PropRetaliationParameters_C::AreaDamageReflectionRatio' has a wrong offset!");

}

