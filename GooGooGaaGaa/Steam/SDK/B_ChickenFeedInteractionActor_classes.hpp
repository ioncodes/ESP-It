#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ChickenFeedInteractionActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_InteractionActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ChickenFeedInteractionActor.B_ChickenFeedInteractionActor_C
// 0x0068 (0x0370 - 0x0308)
class AB_ChickenFeedInteractionActor_C final : public AB_InteractionActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ChickenFeedInteractionActor_C;    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          ChickenPlacementBox3;                              // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          ChickenPlacementBox2;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          ChickenPlacementBox1;                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ChickenHappyAudio;                                 // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ChickenIdleAudio;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          ChickenPlacementBox;                               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFull;                                            // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        TargetChickenLocations;                            // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TargetChickenAmount;                               // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChickenExists;                                     // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBoxComponent*>                  ChickenBoxPositions;                               // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Act();
	void AddBlockedLocation(const struct FVector& BlockedLocation);
	void ExecuteUbergraph_B_ChickenFeedInteractionActor(int32 EntryPoint);
	void InitializePossibleChickenLocations();
	void PlaceChicken(const struct FTransform& Transform);
	void React();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Toggle_Chicken_Audio(bool Set_To_Idle);
	void TryToAddPossibleChickenLocation(class UBoxComponent* PositionBox);
	void TryToPlaceChickens();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ChickenFeedInteractionActor_C">();
	}
	static class AB_ChickenFeedInteractionActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ChickenFeedInteractionActor_C>();
	}
};
static_assert(alignof(AB_ChickenFeedInteractionActor_C) == 0x000008, "Wrong alignment on AB_ChickenFeedInteractionActor_C");
static_assert(sizeof(AB_ChickenFeedInteractionActor_C) == 0x000370, "Wrong size on AB_ChickenFeedInteractionActor_C");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, UberGraphFrame_B_ChickenFeedInteractionActor_C) == 0x000308, "Member 'AB_ChickenFeedInteractionActor_C::UberGraphFrame_B_ChickenFeedInteractionActor_C' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenPlacementBox3) == 0x000310, "Member 'AB_ChickenFeedInteractionActor_C::ChickenPlacementBox3' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenPlacementBox2) == 0x000318, "Member 'AB_ChickenFeedInteractionActor_C::ChickenPlacementBox2' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenPlacementBox1) == 0x000320, "Member 'AB_ChickenFeedInteractionActor_C::ChickenPlacementBox1' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenHappyAudio) == 0x000328, "Member 'AB_ChickenFeedInteractionActor_C::ChickenHappyAudio' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenIdleAudio) == 0x000330, "Member 'AB_ChickenFeedInteractionActor_C::ChickenIdleAudio' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenPlacementBox) == 0x000338, "Member 'AB_ChickenFeedInteractionActor_C::ChickenPlacementBox' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, IsFull) == 0x000340, "Member 'AB_ChickenFeedInteractionActor_C::IsFull' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, TargetChickenLocations) == 0x000348, "Member 'AB_ChickenFeedInteractionActor_C::TargetChickenLocations' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, TargetChickenAmount) == 0x000358, "Member 'AB_ChickenFeedInteractionActor_C::TargetChickenAmount' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenExists) == 0x00035C, "Member 'AB_ChickenFeedInteractionActor_C::ChickenExists' has a wrong offset!");
static_assert(offsetof(AB_ChickenFeedInteractionActor_C, ChickenBoxPositions) == 0x000360, "Member 'AB_ChickenFeedInteractionActor_C::ChickenBoxPositions' has a wrong offset!");

}
