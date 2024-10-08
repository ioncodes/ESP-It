#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StaticMeshActionProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ActionPropType_structs.hpp"
#include "B_StaticMeshProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_StaticMeshActionProp.B_StaticMeshActionProp_C
// 0x0050 (0x05E0 - 0x0590)
#pragma pack(push, 0x1)
class alignas(0x10) AB_StaticMeshActionProp_C : public AB_StaticMeshProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_StaticMeshActionProp_C;           // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NiagaraParticleSystem;                             // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated;                                         // 0x05A0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_ActionPropType                              ActionType;                                        // 0x05A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A2[0x6];                                      // 0x05A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TriggerDelay;                                      // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseEffects;                                        // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B1[0x7];                                      // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FadeOutDuration;                                   // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FadeInDuration;                                    // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinimumTriggerDelay;                               // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InWater;                                           // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DeactivateActionProp();
	void ActivateActionProp(bool Override);
	void InitializeActionProp();
	void LeaveWater();
	void EnterWater();
	void ApplyTemplateData(class AActor* Template, bool* ForcedBoolean);
	void OnRep_Activated();
	void UpdateActionProp();
	void Action(bool* ForcedBoolean);
	void UserConstructionScript();
	void ResetTriggerAfterWait();
	void ExecuteUbergraph_B_StaticMeshActionProp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_StaticMeshActionProp_C">();
	}
	static class AB_StaticMeshActionProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_StaticMeshActionProp_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AB_StaticMeshActionProp_C) == 0x000010, "Wrong alignment on AB_StaticMeshActionProp_C");
static_assert(sizeof(AB_StaticMeshActionProp_C) == 0x0005E0, "Wrong size on AB_StaticMeshActionProp_C");
static_assert(offsetof(AB_StaticMeshActionProp_C, UberGraphFrame_B_StaticMeshActionProp_C) == 0x000588, "Member 'AB_StaticMeshActionProp_C::UberGraphFrame_B_StaticMeshActionProp_C' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, NiagaraParticleSystem) == 0x000590, "Member 'AB_StaticMeshActionProp_C::NiagaraParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, Audio) == 0x000598, "Member 'AB_StaticMeshActionProp_C::Audio' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, Activated) == 0x0005A0, "Member 'AB_StaticMeshActionProp_C::Activated' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, ActionType) == 0x0005A1, "Member 'AB_StaticMeshActionProp_C::ActionType' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, TriggerDelay) == 0x0005A8, "Member 'AB_StaticMeshActionProp_C::TriggerDelay' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, UseEffects) == 0x0005B0, "Member 'AB_StaticMeshActionProp_C::UseEffects' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, FadeOutDuration) == 0x0005B8, "Member 'AB_StaticMeshActionProp_C::FadeOutDuration' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, FadeInDuration) == 0x0005C0, "Member 'AB_StaticMeshActionProp_C::FadeInDuration' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, MinimumTriggerDelay) == 0x0005C8, "Member 'AB_StaticMeshActionProp_C::MinimumTriggerDelay' has a wrong offset!");
static_assert(offsetof(AB_StaticMeshActionProp_C, InWater) == 0x0005D0, "Member 'AB_StaticMeshActionProp_C::InWater' has a wrong offset!");

}

