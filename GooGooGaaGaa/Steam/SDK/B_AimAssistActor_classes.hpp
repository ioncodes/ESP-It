#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AimAssistActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_AimAssistActor.B_AimAssistActor_C
// 0x0008 (0x0298 - 0x0290)
class AB_AimAssistActor_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AimAssistActor_C">();
	}
	static class AB_AimAssistActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AimAssistActor_C>();
	}
};
static_assert(alignof(AB_AimAssistActor_C) == 0x000008, "Wrong alignment on AB_AimAssistActor_C");
static_assert(sizeof(AB_AimAssistActor_C) == 0x000298, "Wrong size on AB_AimAssistActor_C");
static_assert(offsetof(AB_AimAssistActor_C, DefaultSceneRoot) == 0x000290, "Member 'AB_AimAssistActor_C::DefaultSceneRoot' has a wrong offset!");

}
