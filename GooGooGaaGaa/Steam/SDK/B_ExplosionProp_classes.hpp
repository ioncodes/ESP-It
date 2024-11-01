#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ExplosionProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshActionProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ExplosionProp.B_ExplosionProp_C
// 0x0040 (0x0620 - 0x05E0)
class AB_ExplosionProp_C : public AB_StaticMeshActionProp_C
{
public:
	uint8                                         Pad_5D1[0x7];                                      // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ExplosionProp_C;                  // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Scene;                                             // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ExplosionSound;                                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionDamage;                                   // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExplosionTimeDelay;                                // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             FuseSound;                                         // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FuseNiagaraTemplate;                               // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FuseEffectNiagara;                                 // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        FuseSoundComponent;                                // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void InitDissolve();
	void ApplyExplosion();
	void ActivateActionProp(bool Override);
	void StartExplosion(const struct FTransform& ExplosionTransform);
	void Explode();
	void StartFuse();
	void ExplodeMulti(const struct FTransform& ExplosionTransform);
	void StartFuseMulti();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_ExplosionProp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ExplosionProp_C">();
	}
	static class AB_ExplosionProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ExplosionProp_C>();
	}
};
static_assert(alignof(AB_ExplosionProp_C) == 0x000010, "Wrong alignment on AB_ExplosionProp_C");
static_assert(sizeof(AB_ExplosionProp_C) == 0x000620, "Wrong size on AB_ExplosionProp_C");
static_assert(offsetof(AB_ExplosionProp_C, UberGraphFrame_B_ExplosionProp_C) == 0x0005D8, "Member 'AB_ExplosionProp_C::UberGraphFrame_B_ExplosionProp_C' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, Scene) == 0x0005E0, "Member 'AB_ExplosionProp_C::Scene' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, ExplosionSound) == 0x0005E8, "Member 'AB_ExplosionProp_C::ExplosionSound' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, ExplosionDamage) == 0x0005F0, "Member 'AB_ExplosionProp_C::ExplosionDamage' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, ExplosionTimeDelay) == 0x0005F8, "Member 'AB_ExplosionProp_C::ExplosionTimeDelay' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, FuseSound) == 0x000600, "Member 'AB_ExplosionProp_C::FuseSound' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, FuseNiagaraTemplate) == 0x000608, "Member 'AB_ExplosionProp_C::FuseNiagaraTemplate' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, FuseEffectNiagara) == 0x000610, "Member 'AB_ExplosionProp_C::FuseEffectNiagara' has a wrong offset!");
static_assert(offsetof(AB_ExplosionProp_C, FuseSoundComponent) == 0x000618, "Member 'AB_ExplosionProp_C::FuseSoundComponent' has a wrong offset!");

}

