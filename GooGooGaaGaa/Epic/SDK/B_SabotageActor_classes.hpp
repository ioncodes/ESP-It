#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SabotageActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SabotageActor.B_SabotageActor_C
// 0x0030 (0x02C0 - 0x0290)
class AB_SabotageActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Cooldown;                                          // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxCooldown;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGlobalSabotage;                                  // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	bool IsActive();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Sabotage();
	void Stop();
	void ExecuteUbergraph_B_SabotageActor(int32 EntryPoint);
	void DeactivateMulti();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SabotageActor_C">();
	}
	static class AB_SabotageActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SabotageActor_C>();
	}
};
static_assert(alignof(AB_SabotageActor_C) == 0x000008, "Wrong alignment on AB_SabotageActor_C");
static_assert(sizeof(AB_SabotageActor_C) == 0x0002C0, "Wrong size on AB_SabotageActor_C");
static_assert(offsetof(AB_SabotageActor_C, UberGraphFrame) == 0x000290, "Member 'AB_SabotageActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_SabotageActor_C, DefaultSceneRoot) == 0x000298, "Member 'AB_SabotageActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_SabotageActor_C, Cooldown) == 0x0002A0, "Member 'AB_SabotageActor_C::Cooldown' has a wrong offset!");
static_assert(offsetof(AB_SabotageActor_C, MaxCooldown) == 0x0002A8, "Member 'AB_SabotageActor_C::MaxCooldown' has a wrong offset!");
static_assert(offsetof(AB_SabotageActor_C, IsGlobalSabotage) == 0x0002B0, "Member 'AB_SabotageActor_C::IsGlobalSabotage' has a wrong offset!");
static_assert(offsetof(AB_SabotageActor_C, Icon) == 0x0002B8, "Member 'AB_SabotageActor_C::Icon' has a wrong offset!");

}

