#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IHunter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function IHunter.IHunter_C.GetCurrentControllerYaw
// 0x0008 (0x0008 - 0x0000)
struct IHunter_C_GetCurrentControllerYaw final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_GetCurrentControllerYaw) == 0x000008, "Wrong alignment on IHunter_C_GetCurrentControllerYaw");
static_assert(sizeof(IHunter_C_GetCurrentControllerYaw) == 0x000008, "Wrong size on IHunter_C_GetCurrentControllerYaw");
static_assert(offsetof(IHunter_C_GetCurrentControllerYaw, ReturnValue) == 0x000000, "Member 'IHunter_C_GetCurrentControllerYaw::ReturnValue' has a wrong offset!");

// Function IHunter.IHunter_C.GetIsConfused
// 0x0001 (0x0001 - 0x0000)
struct IHunter_C_GetIsConfused final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_GetIsConfused) == 0x000001, "Wrong alignment on IHunter_C_GetIsConfused");
static_assert(sizeof(IHunter_C_GetIsConfused) == 0x000001, "Wrong size on IHunter_C_GetIsConfused");
static_assert(offsetof(IHunter_C_GetIsConfused, ReturnValue) == 0x000000, "Member 'IHunter_C_GetIsConfused::ReturnValue' has a wrong offset!");

// Function IHunter.IHunter_C.GetRotateInstantForOneFrame
// 0x0001 (0x0001 - 0x0000)
struct IHunter_C_GetRotateInstantForOneFrame final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_GetRotateInstantForOneFrame) == 0x000001, "Wrong alignment on IHunter_C_GetRotateInstantForOneFrame");
static_assert(sizeof(IHunter_C_GetRotateInstantForOneFrame) == 0x000001, "Wrong size on IHunter_C_GetRotateInstantForOneFrame");
static_assert(offsetof(IHunter_C_GetRotateInstantForOneFrame, ReturnValue) == 0x000000, "Member 'IHunter_C_GetRotateInstantForOneFrame::ReturnValue' has a wrong offset!");

// Function IHunter.IHunter_C.GetSpawnTransform
// 0x0080 (0x0080 - 0x0000)
struct IHunter_C_GetSpawnTransform final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CF4[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnValue;                                       // 0x0020(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_GetSpawnTransform) == 0x000010, "Wrong alignment on IHunter_C_GetSpawnTransform");
static_assert(sizeof(IHunter_C_GetSpawnTransform) == 0x000080, "Wrong size on IHunter_C_GetSpawnTransform");
static_assert(offsetof(IHunter_C_GetSpawnTransform, Offset) == 0x000000, "Member 'IHunter_C_GetSpawnTransform::Offset' has a wrong offset!");
static_assert(offsetof(IHunter_C_GetSpawnTransform, ReturnValue) == 0x000020, "Member 'IHunter_C_GetSpawnTransform::ReturnValue' has a wrong offset!");

// Function IHunter.IHunter_C.GetSpawnTransformRotated
// 0x0080 (0x0080 - 0x0000)
struct IHunter_C_GetSpawnTransformRotated final
{
public:
	struct FVector                                Offset;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CF5[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnValue;                                       // 0x0020(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_GetSpawnTransformRotated) == 0x000010, "Wrong alignment on IHunter_C_GetSpawnTransformRotated");
static_assert(sizeof(IHunter_C_GetSpawnTransformRotated) == 0x000080, "Wrong size on IHunter_C_GetSpawnTransformRotated");
static_assert(offsetof(IHunter_C_GetSpawnTransformRotated, Offset) == 0x000000, "Member 'IHunter_C_GetSpawnTransformRotated::Offset' has a wrong offset!");
static_assert(offsetof(IHunter_C_GetSpawnTransformRotated, ReturnValue) == 0x000020, "Member 'IHunter_C_GetSpawnTransformRotated::ReturnValue' has a wrong offset!");

// Function IHunter.IHunter_C.IsPlayingQuestionTaunt
// 0x0001 (0x0001 - 0x0000)
struct IHunter_C_IsPlayingQuestionTaunt final
{
public:
	bool                                          IsPlaying;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_IsPlayingQuestionTaunt) == 0x000001, "Wrong alignment on IHunter_C_IsPlayingQuestionTaunt");
static_assert(sizeof(IHunter_C_IsPlayingQuestionTaunt) == 0x000001, "Wrong size on IHunter_C_IsPlayingQuestionTaunt");
static_assert(offsetof(IHunter_C_IsPlayingQuestionTaunt, IsPlaying) == 0x000000, "Member 'IHunter_C_IsPlayingQuestionTaunt::IsPlaying' has a wrong offset!");

// Function IHunter.IHunter_C.IsPlayingSpeakTaunt
// 0x0001 (0x0001 - 0x0000)
struct IHunter_C_IsPlayingSpeakTaunt final
{
public:
	bool                                          IsPlaying;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_IsPlayingSpeakTaunt) == 0x000001, "Wrong alignment on IHunter_C_IsPlayingSpeakTaunt");
static_assert(sizeof(IHunter_C_IsPlayingSpeakTaunt) == 0x000001, "Wrong size on IHunter_C_IsPlayingSpeakTaunt");
static_assert(offsetof(IHunter_C_IsPlayingSpeakTaunt, IsPlaying) == 0x000000, "Member 'IHunter_C_IsPlayingSpeakTaunt::IsPlaying' has a wrong offset!");

// Function IHunter.IHunter_C.PlayModelAnimation
// 0x0018 (0x0018 - 0x0000)
struct IHunter_C_PlayModelAnimation final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        InPlayRate;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForcedBoolean;                                     // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IHunter_C_PlayModelAnimation) == 0x000008, "Wrong alignment on IHunter_C_PlayModelAnimation");
static_assert(sizeof(IHunter_C_PlayModelAnimation) == 0x000018, "Wrong size on IHunter_C_PlayModelAnimation");
static_assert(offsetof(IHunter_C_PlayModelAnimation, Montage) == 0x000000, "Member 'IHunter_C_PlayModelAnimation::Montage' has a wrong offset!");
static_assert(offsetof(IHunter_C_PlayModelAnimation, InPlayRate) == 0x000008, "Member 'IHunter_C_PlayModelAnimation::InPlayRate' has a wrong offset!");
static_assert(offsetof(IHunter_C_PlayModelAnimation, ForcedBoolean) == 0x000010, "Member 'IHunter_C_PlayModelAnimation::ForcedBoolean' has a wrong offset!");

}
