#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_LuaqAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_LuaqAttack.AB_LuaqAttack_C
// 0x0C50 (0x0FA0 - 0x0350)
class UAB_LuaqAttack_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3738[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	uint8                                         Pad_3739[0x8];                                     // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0390(0x0950)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0CE0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0D00(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0D20(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0D48(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0D70(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0D98(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0DE0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0E00(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0E48(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0E68(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0EB0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0ED0(0x00C8)()
	bool                                          ShouldEnd;                                         // 0x0F98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_LuaqAttack_AnimGraphNode_TransitionResult_4ECB4A4F42ACCD7D90B032A889615192();
	void ExecuteUbergraph_AB_LuaqAttack(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_LuaqAttack_C">();
	}
	static class UAB_LuaqAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_LuaqAttack_C>();
	}
};
static_assert(alignof(UAB_LuaqAttack_C) == 0x000010, "Wrong alignment on UAB_LuaqAttack_C");
static_assert(sizeof(UAB_LuaqAttack_C) == 0x000FA0, "Wrong size on UAB_LuaqAttack_C");
static_assert(offsetof(UAB_LuaqAttack_C, UberGraphFrame) == 0x000350, "Member 'UAB_LuaqAttack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UAB_LuaqAttack_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UAB_LuaqAttack_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_Root) == 0x000368, "Member 'UAB_LuaqAttack_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_RigidBody) == 0x000390, "Member 'UAB_LuaqAttack_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_LocalToComponentSpace) == 0x000CE0, "Member 'UAB_LuaqAttack_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_ComponentToLocalSpace) == 0x000D00, "Member 'UAB_LuaqAttack_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_TransitionResult_2) == 0x000D20, "Member 'UAB_LuaqAttack_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_TransitionResult_1) == 0x000D48, "Member 'UAB_LuaqAttack_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_TransitionResult) == 0x000D70, "Member 'UAB_LuaqAttack_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_SequencePlayer_2) == 0x000D98, "Member 'UAB_LuaqAttack_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_StateResult_2) == 0x000DE0, "Member 'UAB_LuaqAttack_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_SequencePlayer_1) == 0x000E00, "Member 'UAB_LuaqAttack_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_StateResult_1) == 0x000E48, "Member 'UAB_LuaqAttack_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_SequencePlayer) == 0x000E68, "Member 'UAB_LuaqAttack_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_StateResult) == 0x000EB0, "Member 'UAB_LuaqAttack_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, AnimGraphNode_StateMachine) == 0x000ED0, "Member 'UAB_LuaqAttack_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_LuaqAttack_C, ShouldEnd) == 0x000F98, "Member 'UAB_LuaqAttack_C::ShouldEnd' has a wrong offset!");

}
