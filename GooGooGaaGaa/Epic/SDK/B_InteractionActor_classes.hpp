#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_InteractionActor

#include "Basic.hpp"

#include "B_TaskTargetActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_InteractionActor.B_InteractionActor_C
// 0x0018 (0x0308 - 0x02F0)
class AB_InteractionActor_C : public AB_TaskTargetActor_C
{
public:
	class FText                                   InteractionToolTip;                                // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowToolip;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_InteractionActor_C">();
	}
	static class AB_InteractionActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_InteractionActor_C>();
	}
};
static_assert(alignof(AB_InteractionActor_C) == 0x000008, "Wrong alignment on AB_InteractionActor_C");
static_assert(sizeof(AB_InteractionActor_C) == 0x000308, "Wrong size on AB_InteractionActor_C");
static_assert(offsetof(AB_InteractionActor_C, InteractionToolTip) == 0x0002F0, "Member 'AB_InteractionActor_C::InteractionToolTip' has a wrong offset!");
static_assert(offsetof(AB_InteractionActor_C, ShowToolip) == 0x000300, "Member 'AB_InteractionActor_C::ShowToolip' has a wrong offset!");

}
