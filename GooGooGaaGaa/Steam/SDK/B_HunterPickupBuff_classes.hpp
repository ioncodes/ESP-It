#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HunterPickupBuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_HunterPickup_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_HunterPickupBuff.B_HunterPickupBuff_C
// 0x0010 (0x0320 - 0x0310)
class AB_HunterPickupBuff_C : public AB_HunterPickup_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_HunterPickupBuff_C;               // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 Buff;                                              // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void AddBuffToPlayerState(class APawn* Pawn);
	void PickupCollected(class APawn* Pawn);
	void ExecuteUbergraph_B_HunterPickupBuff(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_HunterPickupBuff_C">();
	}
	static class AB_HunterPickupBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_HunterPickupBuff_C>();
	}
};
static_assert(alignof(AB_HunterPickupBuff_C) == 0x000008, "Wrong alignment on AB_HunterPickupBuff_C");
static_assert(sizeof(AB_HunterPickupBuff_C) == 0x000320, "Wrong size on AB_HunterPickupBuff_C");
static_assert(offsetof(AB_HunterPickupBuff_C, UberGraphFrame_B_HunterPickupBuff_C) == 0x000310, "Member 'AB_HunterPickupBuff_C::UberGraphFrame_B_HunterPickupBuff_C' has a wrong offset!");
static_assert(offsetof(AB_HunterPickupBuff_C, Buff) == 0x000318, "Member 'AB_HunterPickupBuff_C::Buff' has a wrong offset!");

}
