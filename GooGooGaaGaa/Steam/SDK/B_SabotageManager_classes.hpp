#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SabotageManager

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SabotageManager.B_SabotageManager_C
// 0x0010 (0x0038 - 0x0028)
class UB_SabotageManager_C final : public UObject
{
public:
	TArray<class AB_SabotageActor_C*>             Sabotages;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void Initialize(TArray<class AB_SabotageActor_C*>& SabotageActors);
	bool IsAnyGlobalSabotageActive();
	bool IsAnySabotageActive();
	void TriggerGlobalCooldowns();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SabotageManager_C">();
	}
	static class UB_SabotageManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_SabotageManager_C>();
	}
};
static_assert(alignof(UB_SabotageManager_C) == 0x000008, "Wrong alignment on UB_SabotageManager_C");
static_assert(sizeof(UB_SabotageManager_C) == 0x000038, "Wrong size on UB_SabotageManager_C");
static_assert(offsetof(UB_SabotageManager_C, Sabotages) == 0x000028, "Member 'UB_SabotageManager_C::Sabotages' has a wrong offset!");

}
