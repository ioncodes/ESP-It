#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ExplosionProp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_ExplosionProp.B_ExplosionProp_C.InitDissolve
// 0x0002 (0x0002 - 0x0000)
struct B_ExplosionProp_C_InitDissolve final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_InitDissolve) == 0x000001, "Wrong alignment on B_ExplosionProp_C_InitDissolve");
static_assert(sizeof(B_ExplosionProp_C_InitDissolve) == 0x000002, "Wrong size on B_ExplosionProp_C_InitDissolve");
static_assert(offsetof(B_ExplosionProp_C_InitDissolve, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_ExplosionProp_C_InitDissolve::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_InitDissolve, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'B_ExplosionProp_C_InitDissolve::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.ApplyExplosion
// 0x0040 (0x0040 - 0x0000)
struct B_ExplosionProp_C_ApplyExplosion final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C35[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_ApplyDamage_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C36[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C37[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyDamage_BaseDamage_ImplicitCast;      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_ApplyExplosion) == 0x000008, "Wrong alignment on B_ExplosionProp_C_ApplyExplosion");
static_assert(sizeof(B_ExplosionProp_C_ApplyExplosion) == 0x000040, "Wrong size on B_ExplosionProp_C_ApplyExplosion");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_ApplyDamage_ReturnValue) == 0x000004, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_ApplyDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_GetObjectClass_ReturnValue) == 0x000008, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_GetObjectClass_ReturnValue_1) == 0x000010, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_ClassIsChildOf_ReturnValue) == 0x000018, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_ClassIsChildOf_ReturnValue_1) == 0x000019, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_ClassIsChildOf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_GetInstigator_ReturnValue) == 0x000020, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_GetObjectClass_ReturnValue_2) == 0x000030, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_ClassIsChildOf_ReturnValue_2) == 0x000038, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_ClassIsChildOf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_BooleanAND_ReturnValue) == 0x000039, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_BooleanOR_ReturnValue) == 0x00003A, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_BooleanOR_ReturnValue_1) == 0x00003B, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ApplyExplosion, CallFunc_ApplyDamage_BaseDamage_ImplicitCast) == 0x00003C, "Member 'B_ExplosionProp_C_ApplyExplosion::CallFunc_ApplyDamage_BaseDamage_ImplicitCast' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.ActivateActionProp
// 0x0058 (0x0058 - 0x0000)
struct B_ExplosionProp_C_ActivateActionProp final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C38[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C39[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_GameState_C*                         K2Node_DynamicCast_AsB_Game_State_1;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRoundEnd_RoundIsEnd;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3A[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_CreativeGameState_C*                 K2Node_DynamicCast_AsB_Creative_Game_State;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTrackingStarted_HasTrackingStarted;    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3B[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_ActivateActionProp) == 0x000008, "Wrong alignment on B_ExplosionProp_C_ActivateActionProp");
static_assert(sizeof(B_ExplosionProp_C_ActivateActionProp) == 0x000058, "Wrong size on B_ExplosionProp_C_ActivateActionProp");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, Override) == 0x000000, "Member 'B_ExplosionProp_C_ActivateActionProp::Override' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_GetGameState_ReturnValue_1) == 0x000010, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_AsB_Game_State) == 0x000018, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_AsB_Game_State' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_AsB_Game_State_1) == 0x000028, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_AsB_Game_State_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_IsRoundEnd_RoundIsEnd) == 0x000031, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_IsRoundEnd_RoundIsEnd' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_AsB_Creative_Game_State) == 0x000038, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_AsB_Creative_Game_State' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'B_ExplosionProp_C_ActivateActionProp::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_HasTrackingStarted_HasTrackingStarted) == 0x000041, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_HasTrackingStarted_HasTrackingStarted' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_BooleanOR_ReturnValue) == 0x000042, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_HasAuthority_ReturnValue) == 0x000043, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000045, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_K2_SetTimer_ReturnValue) == 0x000048, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ActivateActionProp, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000050, "Member 'B_ExplosionProp_C_ActivateActionProp::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.StartExplosion
// 0x0120 (0x0120 - 0x0000)
struct B_ExplosionProp_C_StartExplosion final
{
public:
	struct FTransform                             ExplosionTransform;                                // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3C[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         CallFunc_GetAsset_ReturnValue;                     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3D[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_StartExplosion) == 0x000010, "Wrong alignment on B_ExplosionProp_C_StartExplosion");
static_assert(sizeof(B_ExplosionProp_C_StartExplosion) == 0x000120, "Wrong size on B_ExplosionProp_C_StartExplosion");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, ExplosionTransform) == 0x000000, "Member 'B_ExplosionProp_C_StartExplosion::ExplosionTransform' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Location) == 0x000060, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Rotation) == 0x000078, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Scale) == 0x000090, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Location_1) == 0x0000A8, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Rotation_1) == 0x0000C0, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_BreakTransform_Scale_1) == 0x0000D8, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_GetAsset_ReturnValue) == 0x0000F8, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000100, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_IsValid_ReturnValue_1) == 0x000108, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartExplosion, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000110, "Member 'B_ExplosionProp_C_StartExplosion::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.Explode
// 0x0060 (0x0060 - 0x0000)
struct B_ExplosionProp_C_Explode final
{
public:
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0000(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_Explode) == 0x000010, "Wrong alignment on B_ExplosionProp_C_Explode");
static_assert(sizeof(B_ExplosionProp_C_Explode) == 0x000060, "Wrong size on B_ExplosionProp_C_Explode");
static_assert(offsetof(B_ExplosionProp_C_Explode, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000000, "Member 'B_ExplosionProp_C_Explode::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.StartFuse
// 0x0010 (0x0010 - 0x0000)
struct B_ExplosionProp_C_StartFuse final
{
public:
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_StartFuse) == 0x000008, "Wrong alignment on B_ExplosionProp_C_StartFuse");
static_assert(sizeof(B_ExplosionProp_C_StartFuse) == 0x000010, "Wrong size on B_ExplosionProp_C_StartFuse");
static_assert(offsetof(B_ExplosionProp_C_StartFuse, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000000, "Member 'B_ExplosionProp_C_StartFuse::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_StartFuse, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000008, "Member 'B_ExplosionProp_C_StartFuse::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.ExplodeMulti
// 0x0060 (0x0060 - 0x0000)
struct B_ExplosionProp_C_ExplodeMulti final
{
public:
	struct FTransform                             ExplosionTransform;                                // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_ExplodeMulti) == 0x000010, "Wrong alignment on B_ExplosionProp_C_ExplodeMulti");
static_assert(sizeof(B_ExplosionProp_C_ExplodeMulti) == 0x000060, "Wrong size on B_ExplosionProp_C_ExplodeMulti");
static_assert(offsetof(B_ExplosionProp_C_ExplodeMulti, ExplosionTransform) == 0x000000, "Member 'B_ExplosionProp_C_ExplodeMulti::ExplosionTransform' has a wrong offset!");

// Function B_ExplosionProp.B_ExplosionProp_C.ExecuteUbergraph_B_ExplosionProp
// 0x0070 (0x0070 - 0x0000)
struct B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C3E[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             K2Node_CustomEvent_ExplosionTransform;             // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp) == 0x000010, "Wrong alignment on B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp");
static_assert(sizeof(B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp) == 0x000070, "Wrong size on B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp");
static_assert(offsetof(B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp, EntryPoint) == 0x000000, "Member 'B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp, K2Node_CustomEvent_ExplosionTransform) == 0x000010, "Member 'B_ExplosionProp_C_ExecuteUbergraph_B_ExplosionProp::K2Node_CustomEvent_ExplosionTransform' has a wrong offset!");

}
