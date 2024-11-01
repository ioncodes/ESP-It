#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SwitchConnection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SwitchConnection.B_SwitchConnection_C
// 0x0050 (0x02E0 - 0x0290)
class AB_SwitchConnection_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_SwitchConnection;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 StartActor;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 EndActor;                                          // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Start;                                             // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_SwitchConnection(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UpdateEffect();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SwitchConnection_C">();
	}
	static class AB_SwitchConnection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SwitchConnection_C>();
	}
};
static_assert(alignof(AB_SwitchConnection_C) == 0x000008, "Wrong alignment on AB_SwitchConnection_C");
static_assert(sizeof(AB_SwitchConnection_C) == 0x0002E0, "Wrong size on AB_SwitchConnection_C");
static_assert(offsetof(AB_SwitchConnection_C, UberGraphFrame) == 0x000290, "Member 'AB_SwitchConnection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_SwitchConnection_C, NS_SwitchConnection) == 0x000298, "Member 'AB_SwitchConnection_C::NS_SwitchConnection' has a wrong offset!");
static_assert(offsetof(AB_SwitchConnection_C, StartActor) == 0x0002A0, "Member 'AB_SwitchConnection_C::StartActor' has a wrong offset!");
static_assert(offsetof(AB_SwitchConnection_C, EndActor) == 0x0002A8, "Member 'AB_SwitchConnection_C::EndActor' has a wrong offset!");
static_assert(offsetof(AB_SwitchConnection_C, Start) == 0x0002B0, "Member 'AB_SwitchConnection_C::Start' has a wrong offset!");
static_assert(offsetof(AB_SwitchConnection_C, End) == 0x0002C8, "Member 'AB_SwitchConnection_C::End' has a wrong offset!");

}

