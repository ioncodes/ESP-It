#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_SkillSuitcase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_SkillSuitcase.AB_SkillSuitcase_C
// 0x0130 (0x04A0 - 0x0370)
class UAB_SkillSuitcase_C final : public UAnimInstance
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0378(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0380(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0020)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x03A8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x03C8(0x00C8)()
	bool                                          Open;                                              // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AB_SkillSuitcase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_SkillSuitcase_C">();
	}
	static class UAB_SkillSuitcase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_SkillSuitcase_C>();
	}
};
static_assert(alignof(UAB_SkillSuitcase_C) == 0x000010, "Wrong alignment on UAB_SkillSuitcase_C");
static_assert(sizeof(UAB_SkillSuitcase_C) == 0x0004A0, "Wrong size on UAB_SkillSuitcase_C");
static_assert(offsetof(UAB_SkillSuitcase_C, UberGraphFrame) == 0x000370, "Member 'UAB_SkillSuitcase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, AnimBlueprintExtension_PropertyAccess) == 0x000378, "Member 'UAB_SkillSuitcase_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, AnimBlueprintExtension_Base) == 0x000380, "Member 'UAB_SkillSuitcase_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, AnimGraphNode_Root) == 0x000388, "Member 'UAB_SkillSuitcase_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, AnimGraphNode_StateResult) == 0x0003A8, "Member 'UAB_SkillSuitcase_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, AnimGraphNode_StateMachine) == 0x0003C8, "Member 'UAB_SkillSuitcase_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_SkillSuitcase_C, Open) == 0x000490, "Member 'UAB_SkillSuitcase_C::Open' has a wrong offset!");

}
