#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ProjectileSkill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_ProjectileSkill.B_ProjectileSkill_C.OnProjectileSpawned__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature) == 0x000008, "Wrong alignment on B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature");
static_assert(sizeof(B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature) == 0x000008, "Wrong size on B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature");
static_assert(offsetof(B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature, SpawnedActor) == 0x000000, "Member 'B_ProjectileSkill_C_OnProjectileSpawned__DelegateSignature::SpawnedActor' has a wrong offset!");

// Function B_ProjectileSkill.B_ProjectileSkill_C.ExecuteUbergraph_B_ProjectileSkill
// 0x0110 (0x0110 - 0x0000)
struct B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IIHunter_C>            K2Node_DynamicCast_AsIHunter;                      // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIHunter_C>            K2Node_DynamicCast_AsIHunter_1;                    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayModelAnimation_ForcedBoolean;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter_1;                   // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0xF];                                       // 0x0091(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSpawnTransform_ReturnValue;            // 0x00A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_SpawnActorOrTakeFromPool_ReturnValue;     // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill) == 0x000010, "Wrong alignment on B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill");
static_assert(sizeof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill) == 0x000110, "Wrong size on B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, EntryPoint) == 0x000000, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_AsIHunter) == 0x000008, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_AsIHunter' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_AsB_Hunter) == 0x000028, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_AsB_Hunter' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_AsIHunter_1) == 0x000040, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_AsIHunter_1' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_GetOwner_ReturnValue_2) == 0x000058, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_PlayModelAnimation_ForcedBoolean) == 0x000060, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_PlayModelAnimation_ForcedBoolean' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_GetOwner_ReturnValue_3) == 0x000080, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_AsB_Hunter_1) == 0x000088, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_AsB_Hunter_1' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_GetSpawnTransform_ReturnValue) == 0x0000A0, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_GetSpawnTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_SpawnActorOrTakeFromPool_ReturnValue) == 0x000100, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_SpawnActorOrTakeFromPool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_Delay_Duration_ImplicitCast) == 0x000108, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill, CallFunc_Delay_Duration_ImplicitCast_1) == 0x00010C, "Member 'B_ProjectileSkill_C_ExecuteUbergraph_B_ProjectileSkill::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

}

