#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Timer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Timer.B_Timer_C
// 0x0040 (0x02E0 - 0x02A0)
class UB_Timer_C final : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnSecondElapsed;                                   // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         RemainingSeconds;                                  // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitialTime;                                       // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCounting;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35CE[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinished;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_B_Timer(int32 EntryPoint);
	void OnFinished__DelegateSignature();
	void OnSecondElapsed__DelegateSignature(int32 ElapsedSeconds, int32 Param_RemainingSeconds);
	void ReceiveTick(float DeltaSeconds);
	void Start(int32 Time);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Timer_C">();
	}
	static class UB_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_Timer_C>();
	}
};
static_assert(alignof(UB_Timer_C) == 0x000010, "Wrong alignment on UB_Timer_C");
static_assert(sizeof(UB_Timer_C) == 0x0002E0, "Wrong size on UB_Timer_C");
static_assert(offsetof(UB_Timer_C, UberGraphFrame) == 0x0002A0, "Member 'UB_Timer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_Timer_C, OnSecondElapsed) == 0x0002A8, "Member 'UB_Timer_C::OnSecondElapsed' has a wrong offset!");
static_assert(offsetof(UB_Timer_C, RemainingSeconds) == 0x0002B8, "Member 'UB_Timer_C::RemainingSeconds' has a wrong offset!");
static_assert(offsetof(UB_Timer_C, InitialTime) == 0x0002BC, "Member 'UB_Timer_C::InitialTime' has a wrong offset!");
static_assert(offsetof(UB_Timer_C, IsCounting) == 0x0002C0, "Member 'UB_Timer_C::IsCounting' has a wrong offset!");
static_assert(offsetof(UB_Timer_C, OnFinished) == 0x0002C8, "Member 'UB_Timer_C::OnFinished' has a wrong offset!");

}
