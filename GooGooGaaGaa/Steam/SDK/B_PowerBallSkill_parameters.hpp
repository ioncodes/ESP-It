#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PowerBallSkill

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_PowerBallSkill.B_PowerBallSkill_C.BallDestroyed
// 0x0008 (0x0008 - 0x0000)
struct B_PowerBallSkill_C_BallDestroyed final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_BallDestroyed) == 0x000008, "Wrong alignment on B_PowerBallSkill_C_BallDestroyed");
static_assert(sizeof(B_PowerBallSkill_C_BallDestroyed) == 0x000008, "Wrong size on B_PowerBallSkill_C_BallDestroyed");
static_assert(offsetof(B_PowerBallSkill_C_BallDestroyed, DestroyedActor) == 0x000000, "Member 'B_PowerBallSkill_C_BallDestroyed::DestroyedActor' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.CanActivate
// 0x0028 (0x0028 - 0x0000)
struct B_PowerBallSkill_C_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanActivate_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMovementEnabled_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_CanActivate) == 0x000008, "Wrong alignment on B_PowerBallSkill_C_CanActivate");
static_assert(sizeof(B_PowerBallSkill_C_CanActivate) == 0x000028, "Wrong size on B_PowerBallSkill_C_CanActivate");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, ReturnValue) == 0x000000, "Member 'B_PowerBallSkill_C_CanActivate::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_CanActivate_ReturnValue) == 0x000010, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_CanActivate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, K2Node_DynamicCast_AsB_Hunter) == 0x000018, "Member 'B_PowerBallSkill_C_CanActivate::K2Node_DynamicCast_AsB_Hunter' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'B_PowerBallSkill_C_CanActivate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_IsMovementEnabled_ReturnValue) == 0x000021, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_IsMovementEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_Not_PreBool_ReturnValue) == 0x000022, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_Not_PreBool_ReturnValue_1) == 0x000023, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_BooleanOR_ReturnValue) == 0x000024, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_CanActivate, CallFunc_BooleanAND_ReturnValue) == 0x000025, "Member 'B_PowerBallSkill_C_CanActivate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.ExecuteUbergraph_B_PowerBallSkill
// 0x00F0 (0x00F0 - 0x0000)
struct B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSpawnTransform_SpawnTransform;         // 0x0050(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PowerBall_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_cooldown;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_PlayerController_C*                  K2Node_DynamicCast_AsB_Player_Controller;          // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill) == 0x000010, "Wrong alignment on B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill");
static_assert(sizeof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill) == 0x0000F0, "Wrong size on B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, EntryPoint) == 0x000000, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_AsB_Hunter) == 0x000030, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_AsB_Hunter' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_AsB_Player_State) == 0x000040, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_GetSpawnTransform_SpawnTransform) == 0x000050, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_GetSpawnTransform_SpawnTransform' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_IsValid_ReturnValue) == 0x0000C0, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_CustomEvent_DestroyedActor) == 0x0000C8, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_CustomEvent_cooldown) == 0x0000D0, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_CustomEvent_cooldown' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, CallFunc_GetController_ReturnValue) == 0x0000D8, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_AsB_Player_Controller) == 0x0000E0, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_AsB_Player_Controller' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill, K2Node_DynamicCast_bSuccess_2) == 0x0000E8, "Member 'B_PowerBallSkill_C_ExecuteUbergraph_B_PowerBallSkill::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.GetSpawnTransform
// 0x0130 (0x0130 - 0x0000)
struct B_PowerBallSkill_C_GetSpawnTransform final
{
public:
	struct FTransform                             SpawnTransform;                                    // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_MatchParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;           // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_GetSpawnTransform) == 0x000010, "Wrong alignment on B_PowerBallSkill_C_GetSpawnTransform");
static_assert(sizeof(B_PowerBallSkill_C_GetSpawnTransform) == 0x000130, "Wrong size on B_PowerBallSkill_C_GetSpawnTransform");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, SpawnTransform) == 0x000000, "Member 'B_PowerBallSkill_C_GetSpawnTransform::SpawnTransform' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000060, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_GetOwner_ReturnValue) == 0x000068, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, K2Node_DynamicCast_AsPawn) == 0x000070, "Member 'B_PowerBallSkill_C_GetSpawnTransform::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'B_PowerBallSkill_C_GetSpawnTransform::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_GetControlRotation_ReturnValue) == 0x000080, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000098, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_GetSpawnTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'B_PowerBallSkill_C_GetSpawnTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.InitializeRules
// 0x0018 (0x0018 - 0x0000)
struct B_PowerBallSkill_C_InitializeRules final
{
public:
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetSkillCooldown_Cooldown;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_cooldown_ImplicitCast;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_InitializeRules) == 0x000008, "Wrong alignment on B_PowerBallSkill_C_InitializeRules");
static_assert(sizeof(B_PowerBallSkill_C_InitializeRules) == 0x000018, "Wrong size on B_PowerBallSkill_C_InitializeRules");
static_assert(offsetof(B_PowerBallSkill_C_InitializeRules, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000000, "Member 'B_PowerBallSkill_C_InitializeRules::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_InitializeRules, CallFunc_GetSkillCooldown_Cooldown) == 0x000008, "Member 'B_PowerBallSkill_C_InitializeRules::CallFunc_GetSkillCooldown_Cooldown' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_InitializeRules, K2Node_VariableSet_cooldown_ImplicitCast) == 0x000010, "Member 'B_PowerBallSkill_C_InitializeRules::K2Node_VariableSet_cooldown_ImplicitCast' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.OwnlingClientCooldown
// 0x0001 (0x0001 - 0x0000)
struct B_PowerBallSkill_C_OwnlingClientCooldown final
{
public:
	bool                                          Cooldown_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_OwnlingClientCooldown) == 0x000001, "Wrong alignment on B_PowerBallSkill_C_OwnlingClientCooldown");
static_assert(sizeof(B_PowerBallSkill_C_OwnlingClientCooldown) == 0x000001, "Wrong size on B_PowerBallSkill_C_OwnlingClientCooldown");
static_assert(offsetof(B_PowerBallSkill_C_OwnlingClientCooldown, Cooldown_0) == 0x000000, "Member 'B_PowerBallSkill_C_OwnlingClientCooldown::Cooldown_0' has a wrong offset!");

// Function B_PowerBallSkill.B_PowerBallSkill_C.UpdateMaxSpeedIfHunterBuffed
// 0x0018 (0x0018 - 0x0000)
struct B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed final
{
public:
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed) == 0x000008, "Wrong alignment on B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed");
static_assert(sizeof(B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed) == 0x000018, "Wrong size on B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed");
static_assert(offsetof(B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000000, "Member 'B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'B_PowerBallSkill_C_UpdateMaxSpeedIfHunterBuffed::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

