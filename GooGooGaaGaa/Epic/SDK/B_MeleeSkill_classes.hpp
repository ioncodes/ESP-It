#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MeleeSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_BaseHunterSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MeleeSkill.B_MeleeSkill_C
// 0x0058 (0x0158 - 0x0100)
class UB_MeleeSkill_C final : public UB_BaseHunterSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_MeleeSkill_C;                     // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MeleeDelay;                                        // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MeleeOffset;                                       // 0x0110(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              MeleeSound;                                        // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                      MeleeAuttenuation;                                 // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ChargeTime;                                        // 0x0138(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharging;                                        // 0x0140(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              ChargeSound;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishCharging;                                    // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanActivate();
	void ExecuteHitClient(bool Strong);
	void ExecuteHitMulti(bool Strong);
	void ExecuteHitServer(bool Strong);
	void ExecuteUbergraph_B_MeleeSkill(int32 EntryPoint);
	void InitializeRules();
	void OnActivateSkillClient();
	void OnActivateSkillMulti();
	void OnActivateSkillServer();
	void OnSkillPressServer();
	void OnSkillReleaseServer();
	void PlayFPAttack();
	void PlayFPChargeToBigAttack();
	void PlayFPChargeToEnd();
	void PlayTPAttack();
	void PlayTPChargeToBigAttack();
	void PlayTPChargeToEnd();
	void ReceiveTick(float DeltaSeconds);
	void StopChargeClient();
	void StopChargeMulti();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MeleeSkill_C">();
	}
	static class UB_MeleeSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_MeleeSkill_C>();
	}
};
static_assert(alignof(UB_MeleeSkill_C) == 0x000008, "Wrong alignment on UB_MeleeSkill_C");
static_assert(sizeof(UB_MeleeSkill_C) == 0x000158, "Wrong size on UB_MeleeSkill_C");
static_assert(offsetof(UB_MeleeSkill_C, UberGraphFrame_B_MeleeSkill_C) == 0x000100, "Member 'UB_MeleeSkill_C::UberGraphFrame_B_MeleeSkill_C' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, MeleeDelay) == 0x000108, "Member 'UB_MeleeSkill_C::MeleeDelay' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, MeleeOffset) == 0x000110, "Member 'UB_MeleeSkill_C::MeleeOffset' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, MeleeSound) == 0x000128, "Member 'UB_MeleeSkill_C::MeleeSound' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, MeleeAuttenuation) == 0x000130, "Member 'UB_MeleeSkill_C::MeleeAuttenuation' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, ChargeTime) == 0x000138, "Member 'UB_MeleeSkill_C::ChargeTime' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, IsCharging) == 0x000140, "Member 'UB_MeleeSkill_C::IsCharging' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, ChargeSound) == 0x000148, "Member 'UB_MeleeSkill_C::ChargeSound' has a wrong offset!");
static_assert(offsetof(UB_MeleeSkill_C, FinishCharging) == 0x000150, "Member 'UB_MeleeSkill_C::FinishCharging' has a wrong offset!");

}
