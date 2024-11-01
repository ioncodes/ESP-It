#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchStudyInteractionActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_WaitInteractionActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WitchStudyInteractionActor.B_WitchStudyInteractionActor_C
// 0x0008 (0x0330 - 0x0328)
class AB_WitchStudyInteractionActor_C final : public AB_WaitInteractionActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_WitchStudyInteractionActor_C;     // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Act();
	void ExecuteUbergraph_B_WitchStudyInteractionActor(int32 EntryPoint);
	void React();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WitchStudyInteractionActor_C">();
	}
	static class AB_WitchStudyInteractionActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WitchStudyInteractionActor_C>();
	}
};
static_assert(alignof(AB_WitchStudyInteractionActor_C) == 0x000008, "Wrong alignment on AB_WitchStudyInteractionActor_C");
static_assert(sizeof(AB_WitchStudyInteractionActor_C) == 0x000330, "Wrong size on AB_WitchStudyInteractionActor_C");
static_assert(offsetof(AB_WitchStudyInteractionActor_C, UberGraphFrame_B_WitchStudyInteractionActor_C) == 0x000328, "Member 'AB_WitchStudyInteractionActor_C::UberGraphFrame_B_WitchStudyInteractionActor_C' has a wrong offset!");

}

