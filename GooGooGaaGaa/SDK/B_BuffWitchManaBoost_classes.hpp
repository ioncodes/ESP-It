#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BuffWitchManaBoost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Buff_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_BuffWitchManaBoost.B_BuffWitchManaBoost_C
// 0x0020 (0x03C0 - 0x03A0)
class AB_BuffWitchManaBoost_C final : public AB_Buff_C
{
public:
	uint8                                         Pad_5EF4[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_BuffWitchManaBoost_C;             // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AB_Witch_C*                             Witch;                                             // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bManaBoostActive;                                  // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EF5[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_ManaComponent_C*                     ManaComponent;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerController_C*                  PlayerController;                                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BuffEnd();
	void BuffStart(class AB_PlayerState_C* Param_PlayerState);
	void ExecuteUbergraph_B_BuffWitchManaBoost(int32 EntryPoint);
	class UB_ManaComponent_C* GetCurrentManaComponent();
	void ReceiveTick(float DeltaSeconds);
	double SetManaRegen(class UB_ManaComponent_C* Param_ManaComponent, double ManaRegen);
	void SetManaRegenMulti(class UB_ManaComponent_C* Param_ManaComponent, double ManaRegen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BuffWitchManaBoost_C">();
	}
	static class AB_BuffWitchManaBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BuffWitchManaBoost_C>();
	}
};
static_assert(alignof(AB_BuffWitchManaBoost_C) == 0x000010, "Wrong alignment on AB_BuffWitchManaBoost_C");
static_assert(sizeof(AB_BuffWitchManaBoost_C) == 0x0003C0, "Wrong size on AB_BuffWitchManaBoost_C");
static_assert(offsetof(AB_BuffWitchManaBoost_C, UberGraphFrame_B_BuffWitchManaBoost_C) == 0x000398, "Member 'AB_BuffWitchManaBoost_C::UberGraphFrame_B_BuffWitchManaBoost_C' has a wrong offset!");
static_assert(offsetof(AB_BuffWitchManaBoost_C, Witch) == 0x0003A0, "Member 'AB_BuffWitchManaBoost_C::Witch' has a wrong offset!");
static_assert(offsetof(AB_BuffWitchManaBoost_C, bManaBoostActive) == 0x0003A8, "Member 'AB_BuffWitchManaBoost_C::bManaBoostActive' has a wrong offset!");
static_assert(offsetof(AB_BuffWitchManaBoost_C, ManaComponent) == 0x0003B0, "Member 'AB_BuffWitchManaBoost_C::ManaComponent' has a wrong offset!");
static_assert(offsetof(AB_BuffWitchManaBoost_C, PlayerController) == 0x0003B8, "Member 'AB_BuffWitchManaBoost_C::PlayerController' has a wrong offset!");

}
