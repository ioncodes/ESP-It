#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PotatoSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_ProjectileSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PotatoSkill.B_PotatoSkill_C
// 0x0038 (0x0190 - 0x0158)
class UB_PotatoSkill_C final : public UB_ProjectileSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_PotatoSkill_C;                    // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        StaminaCost;                                       // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Stamina;                                           // 0x0168(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StaminaRecharge;                                   // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TeleportOnCooldown;                                // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentAutoAimTarget;                              // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CurrentHunterPawn;                                 // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	bool CanActivate();
	void ExecuteUbergraph_B_PotatoSkill(int32 EntryPoint);
	void HandleSkillActivated();
	void HandleSpawnedProjectiles(TArray<class AActor*>& Actors);
	void InitializeRules();
	void OnActivateSkillServer();
	void OnSkillUpMulti();
	void ProjectileSpawned(class AActor* SpawnedActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Release();
	void SetAutoAimTarget(class AActor* AutoAimTarget);
	void TearUpByStamina(class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PotatoSkill_C">();
	}
	static class UB_PotatoSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_PotatoSkill_C>();
	}
};
static_assert(alignof(UB_PotatoSkill_C) == 0x000008, "Wrong alignment on UB_PotatoSkill_C");
static_assert(sizeof(UB_PotatoSkill_C) == 0x000190, "Wrong size on UB_PotatoSkill_C");
static_assert(offsetof(UB_PotatoSkill_C, UberGraphFrame_B_PotatoSkill_C) == 0x000158, "Member 'UB_PotatoSkill_C::UberGraphFrame_B_PotatoSkill_C' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, StaminaCost) == 0x000160, "Member 'UB_PotatoSkill_C::StaminaCost' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, Stamina) == 0x000168, "Member 'UB_PotatoSkill_C::Stamina' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, StaminaRecharge) == 0x000170, "Member 'UB_PotatoSkill_C::StaminaRecharge' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, TeleportOnCooldown) == 0x000178, "Member 'UB_PotatoSkill_C::TeleportOnCooldown' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, CurrentAutoAimTarget) == 0x000180, "Member 'UB_PotatoSkill_C::CurrentAutoAimTarget' has a wrong offset!");
static_assert(offsetof(UB_PotatoSkill_C, CurrentHunterPawn) == 0x000188, "Member 'UB_PotatoSkill_C::CurrentHunterPawn' has a wrong offset!");

}
