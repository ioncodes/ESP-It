#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Clock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_StaticMeshActionProp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Clock.B_Clock_C
// 0x0020 (0x0600 - 0x05E0)
#pragma pack(push, 0x1)
class alignas(0x10) AB_Clock_C : public AB_StaticMeshActionProp_C
{
public:
	uint8                                         Pad_4DD0[0x7];                                     // 0x05D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Clock_C;                          // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Second;                                            // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Minute;                                            // 0x05E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalSeconds;                                      // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators);
	void UpdateClockTime();
	void RotateHands(double NewRotation);
	void SetTotalSecondsAndStart();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartClock();
	void ExecuteUbergraph_B_Clock(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Clock_C">();
	}
	static class AB_Clock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Clock_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AB_Clock_C) == 0x000010, "Wrong alignment on AB_Clock_C");
static_assert(sizeof(AB_Clock_C) == 0x000600, "Wrong size on AB_Clock_C");
static_assert(offsetof(AB_Clock_C, UberGraphFrame_B_Clock_C) == 0x0005D8, "Member 'AB_Clock_C::UberGraphFrame_B_Clock_C' has a wrong offset!");
static_assert(offsetof(AB_Clock_C, Second) == 0x0005E0, "Member 'AB_Clock_C::Second' has a wrong offset!");
static_assert(offsetof(AB_Clock_C, Minute) == 0x0005E8, "Member 'AB_Clock_C::Minute' has a wrong offset!");
static_assert(offsetof(AB_Clock_C, TotalSeconds) == 0x0005F0, "Member 'AB_Clock_C::TotalSeconds' has a wrong offset!");

}
