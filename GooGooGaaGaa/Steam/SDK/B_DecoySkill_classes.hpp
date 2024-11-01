#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DecoySkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_BaseWitchSkill_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DecoySkill.B_DecoySkill_C
// 0x00B8 (0x01B8 - 0x0100)
class UB_DecoySkill_C final : public UB_BaseWitchSkill_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_DecoySkill_C;                     // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        DecoyRange;                                        // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_DecoyWitch_C*                        SpawnedDecoy;                                      // 0x0110(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AB_DecoyProp_C*                         SpawnedDecoyProp;                                  // 0x0118(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsProp;                                            // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PropPawnPhysics_C*                   PropPawnPhysicsOwner;                              // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x0130(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetNormal;                                      // 0x0148(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecoyLocation;                                     // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SmallestLength;                                    // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentLengthSquared;                              // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NearestLocation;                                   // 0x0188(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NearestNormal;                                     // 0x01A0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_DecoySkill(int32 EntryPoint);
	void GetDecoyLocation(struct FVector* Location, bool* IsValid);
	void GetNearestDecoyTarget(struct FVector* TargetLocation_0, struct FVector* TargetNormal_0, bool* FoundLocation);
	void InitializeRules();
	void Press();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Release();
	void ServerCustomPress(const struct FVector& Location, const struct FVector& Normal);
	void ServerCustomRelease();
	void ServerSetDecoyTarget(const struct FVector& Location, const struct FVector& Normal);
	void SpawnDecoyProp(const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DecoySkill_C">();
	}
	static class UB_DecoySkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_DecoySkill_C>();
	}
};
static_assert(alignof(UB_DecoySkill_C) == 0x000008, "Wrong alignment on UB_DecoySkill_C");
static_assert(sizeof(UB_DecoySkill_C) == 0x0001B8, "Wrong size on UB_DecoySkill_C");
static_assert(offsetof(UB_DecoySkill_C, UberGraphFrame_B_DecoySkill_C) == 0x000100, "Member 'UB_DecoySkill_C::UberGraphFrame_B_DecoySkill_C' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, DecoyRange) == 0x000108, "Member 'UB_DecoySkill_C::DecoyRange' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, SpawnedDecoy) == 0x000110, "Member 'UB_DecoySkill_C::SpawnedDecoy' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, SpawnedDecoyProp) == 0x000118, "Member 'UB_DecoySkill_C::SpawnedDecoyProp' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, IsProp) == 0x000120, "Member 'UB_DecoySkill_C::IsProp' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, PropPawnPhysicsOwner) == 0x000128, "Member 'UB_DecoySkill_C::PropPawnPhysicsOwner' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, TargetLocation) == 0x000130, "Member 'UB_DecoySkill_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, TargetNormal) == 0x000148, "Member 'UB_DecoySkill_C::TargetNormal' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, DecoyLocation) == 0x000160, "Member 'UB_DecoySkill_C::DecoyLocation' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, SmallestLength) == 0x000178, "Member 'UB_DecoySkill_C::SmallestLength' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, CurrentLengthSquared) == 0x000180, "Member 'UB_DecoySkill_C::CurrentLengthSquared' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, NearestLocation) == 0x000188, "Member 'UB_DecoySkill_C::NearestLocation' has a wrong offset!");
static_assert(offsetof(UB_DecoySkill_C, NearestNormal) == 0x0001A0, "Member 'UB_DecoySkill_C::NearestNormal' has a wrong offset!");

}

