#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPlacable

#include "Basic.hpp"

#include "BP_BaseUtilityPlaceable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPlacable.BP_ActionPlacable_C
// 0x0000 (0x0390 - 0x0390)
class ABP_ActionPlacable_C : public ABP_BaseUtilityPlaceable_C
{
public:
	bool                                          Activated;                                         // 0x038A(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnRep_Activated();
	void Action();
	void UpdateActionPlacable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPlacable_C">();
	}
	static class ABP_ActionPlacable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ActionPlacable_C>();
	}
};
static_assert(alignof(ABP_ActionPlacable_C) == 0x000008, "Wrong alignment on ABP_ActionPlacable_C");
static_assert(sizeof(ABP_ActionPlacable_C) == 0x000390, "Wrong size on ABP_ActionPlacable_C");
static_assert(offsetof(ABP_ActionPlacable_C, Activated) == 0x00038A, "Member 'ABP_ActionPlacable_C::Activated' has a wrong offset!");

}
