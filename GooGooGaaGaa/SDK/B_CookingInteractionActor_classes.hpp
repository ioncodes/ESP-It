#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CookingInteractionActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_InteractionActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CookingInteractionActor.B_CookingInteractionActor_C
// 0x0028 (0x0340 - 0x0318)
class AB_CookingInteractionActor_C final : public AB_InteractionActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_CookingInteractionActor_C;        // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Smoke;                                          // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UB_Timer_C*                             CookingTimer;                                      // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CookingAudio;                                      // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ReadyForCompletion;                                // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C2F[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CookingTime;                                       // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Act();
	void BndEvt__CookingTimer_K2Node_ComponentBoundEvent_5_OnFinished__DelegateSignature();
	void ExecuteUbergraph_B_CookingInteractionActor(int32 EntryPoint);
	void React();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CookingInteractionActor_C">();
	}
	static class AB_CookingInteractionActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CookingInteractionActor_C>();
	}
};
static_assert(alignof(AB_CookingInteractionActor_C) == 0x000008, "Wrong alignment on AB_CookingInteractionActor_C");
static_assert(sizeof(AB_CookingInteractionActor_C) == 0x000340, "Wrong size on AB_CookingInteractionActor_C");
static_assert(offsetof(AB_CookingInteractionActor_C, UberGraphFrame_B_CookingInteractionActor_C) == 0x000318, "Member 'AB_CookingInteractionActor_C::UberGraphFrame_B_CookingInteractionActor_C' has a wrong offset!");
static_assert(offsetof(AB_CookingInteractionActor_C, NS_Smoke) == 0x000320, "Member 'AB_CookingInteractionActor_C::NS_Smoke' has a wrong offset!");
static_assert(offsetof(AB_CookingInteractionActor_C, CookingTimer) == 0x000328, "Member 'AB_CookingInteractionActor_C::CookingTimer' has a wrong offset!");
static_assert(offsetof(AB_CookingInteractionActor_C, CookingAudio) == 0x000330, "Member 'AB_CookingInteractionActor_C::CookingAudio' has a wrong offset!");
static_assert(offsetof(AB_CookingInteractionActor_C, ReadyForCompletion) == 0x000338, "Member 'AB_CookingInteractionActor_C::ReadyForCompletion' has a wrong offset!");
static_assert(offsetof(AB_CookingInteractionActor_C, CookingTime) == 0x00033C, "Member 'AB_CookingInteractionActor_C::CookingTime' has a wrong offset!");

}
