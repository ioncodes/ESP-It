#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_FlyingEyeSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_BaseWitchSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_FlyingEyeSkill.B_FlyingEyeSkill_C
// 0x0040 (0x0140 - 0x0100)
class UB_FlyingEyeSkill_C final : public UB_BaseWitchSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_FlyingEyeSkill_C;                 // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                  OwnerPawn;                                         // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_FlyingEye_C*                         CurrentControllingEye;                             // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerController_C*                  OwnerController;                                   // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerState_C*                       OwnerPlayerState;                                  // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SpawnLocation;                                     // 0x0128(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanActivate();
	void ExecuteUbergraph_B_FlyingEyeSkill(int32 EntryPoint);
	void GetSpawnTransform(struct FTransform* SpawnTransform);
	void InitializeRules();
	void OnActivateSkillServer();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_FlyingEyeSkill_C">();
	}
	static class UB_FlyingEyeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_FlyingEyeSkill_C>();
	}
};
static_assert(alignof(UB_FlyingEyeSkill_C) == 0x000008, "Wrong alignment on UB_FlyingEyeSkill_C");
static_assert(sizeof(UB_FlyingEyeSkill_C) == 0x000140, "Wrong size on UB_FlyingEyeSkill_C");
static_assert(offsetof(UB_FlyingEyeSkill_C, UberGraphFrame_B_FlyingEyeSkill_C) == 0x000100, "Member 'UB_FlyingEyeSkill_C::UberGraphFrame_B_FlyingEyeSkill_C' has a wrong offset!");
static_assert(offsetof(UB_FlyingEyeSkill_C, OwnerPawn) == 0x000108, "Member 'UB_FlyingEyeSkill_C::OwnerPawn' has a wrong offset!");
static_assert(offsetof(UB_FlyingEyeSkill_C, CurrentControllingEye) == 0x000110, "Member 'UB_FlyingEyeSkill_C::CurrentControllingEye' has a wrong offset!");
static_assert(offsetof(UB_FlyingEyeSkill_C, OwnerController) == 0x000118, "Member 'UB_FlyingEyeSkill_C::OwnerController' has a wrong offset!");
static_assert(offsetof(UB_FlyingEyeSkill_C, OwnerPlayerState) == 0x000120, "Member 'UB_FlyingEyeSkill_C::OwnerPlayerState' has a wrong offset!");
static_assert(offsetof(UB_FlyingEyeSkill_C, SpawnLocation) == 0x000128, "Member 'UB_FlyingEyeSkill_C::SpawnLocation' has a wrong offset!");

}
