#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TaskStarter

#include "Basic.hpp"

#include "E_TaskType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TaskStarter.B_TaskStarter_C
// 0x0040 (0x02D0 - 0x0290)
class AB_TaskStarter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_TaskType                                    TaskType;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_ImpostorPlayerState_C*               OwningPlayerState;                                 // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorGameState_C*                 ImpostorGameState;                                 // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReadyToStart;                                      // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckPrerequisiteTask();
	void ExecuteUbergraph_B_TaskStarter(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void TickInitialization();
	void ToggleHighlight();
	void TryStartTask();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TaskStarter_C">();
	}
	static class AB_TaskStarter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TaskStarter_C>();
	}
};
static_assert(alignof(AB_TaskStarter_C) == 0x000008, "Wrong alignment on AB_TaskStarter_C");
static_assert(sizeof(AB_TaskStarter_C) == 0x0002D0, "Wrong size on AB_TaskStarter_C");
static_assert(offsetof(AB_TaskStarter_C, UberGraphFrame) == 0x000290, "Member 'AB_TaskStarter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, Box) == 0x000298, "Member 'AB_TaskStarter_C::Box' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, Sphere) == 0x0002A0, "Member 'AB_TaskStarter_C::Sphere' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, DefaultSceneRoot) == 0x0002A8, "Member 'AB_TaskStarter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, TaskType) == 0x0002B0, "Member 'AB_TaskStarter_C::TaskType' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, OwningPlayerState) == 0x0002B8, "Member 'AB_TaskStarter_C::OwningPlayerState' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, ImpostorGameState) == 0x0002C0, "Member 'AB_TaskStarter_C::ImpostorGameState' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, Initialized) == 0x0002C8, "Member 'AB_TaskStarter_C::Initialized' has a wrong offset!");
static_assert(offsetof(AB_TaskStarter_C, ReadyToStart) == 0x0002C9, "Member 'AB_TaskStarter_C::ReadyToStart' has a wrong offset!");

}
