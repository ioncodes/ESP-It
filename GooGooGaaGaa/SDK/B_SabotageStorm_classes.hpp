#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SabotageStorm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_SabotageActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SabotageStorm.B_SabotageStorm_C
// 0x0038 (0x0300 - 0x02C8)
class AB_SabotageStorm_C final : public AB_SabotageActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_SabotageStorm_C;                  // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Active;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36CA[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AB_SabotageStormCrystal_C*>      StormCrystals;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AExponentialHeightFog*                  Fog;                                               // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     PostProcessVolume;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentAlpha;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckStormCrystals();
	void ExecuteUbergraph_B_SabotageStorm(int32 EntryPoint);
	bool IsActive();
	void RandomlyActivateStormCrystals();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Sabotage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SabotageStorm_C">();
	}
	static class AB_SabotageStorm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SabotageStorm_C>();
	}
};
static_assert(alignof(AB_SabotageStorm_C) == 0x000008, "Wrong alignment on AB_SabotageStorm_C");
static_assert(sizeof(AB_SabotageStorm_C) == 0x000300, "Wrong size on AB_SabotageStorm_C");
static_assert(offsetof(AB_SabotageStorm_C, UberGraphFrame_B_SabotageStorm_C) == 0x0002C8, "Member 'AB_SabotageStorm_C::UberGraphFrame_B_SabotageStorm_C' has a wrong offset!");
static_assert(offsetof(AB_SabotageStorm_C, Active) == 0x0002D0, "Member 'AB_SabotageStorm_C::Active' has a wrong offset!");
static_assert(offsetof(AB_SabotageStorm_C, StormCrystals) == 0x0002D8, "Member 'AB_SabotageStorm_C::StormCrystals' has a wrong offset!");
static_assert(offsetof(AB_SabotageStorm_C, Fog) == 0x0002E8, "Member 'AB_SabotageStorm_C::Fog' has a wrong offset!");
static_assert(offsetof(AB_SabotageStorm_C, PostProcessVolume) == 0x0002F0, "Member 'AB_SabotageStorm_C::PostProcessVolume' has a wrong offset!");
static_assert(offsetof(AB_SabotageStorm_C, CurrentAlpha) == 0x0002F8, "Member 'AB_SabotageStorm_C::CurrentAlpha' has a wrong offset!");

}
