#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_KillRagdoll

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SRuntimePropData_structs.hpp"


namespace SDK::Params
{

// Function B_KillRagdoll.B_KillRagdoll_C.DeathEffect
// 0x0008 (0x0008 - 0x0000)
struct B_KillRagdoll_C_DeathEffect final
{
public:
	class AController*                            Killer;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_KillRagdoll_C_DeathEffect) == 0x000008, "Wrong alignment on B_KillRagdoll_C_DeathEffect");
static_assert(sizeof(B_KillRagdoll_C_DeathEffect) == 0x000008, "Wrong size on B_KillRagdoll_C_DeathEffect");
static_assert(offsetof(B_KillRagdoll_C_DeathEffect, Killer) == 0x000000, "Member 'B_KillRagdoll_C_DeathEffect::Killer' has a wrong offset!");

// Function B_KillRagdoll.B_KillRagdoll_C.SetVelocity
// 0x0008 (0x0008 - 0x0000)
struct B_KillRagdoll_C_SetVelocity final
{
public:
	class AB_Death_C*                             Ragdoll;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_KillRagdoll_C_SetVelocity) == 0x000008, "Wrong alignment on B_KillRagdoll_C_SetVelocity");
static_assert(sizeof(B_KillRagdoll_C_SetVelocity) == 0x000008, "Wrong size on B_KillRagdoll_C_SetVelocity");
static_assert(offsetof(B_KillRagdoll_C_SetVelocity, Ragdoll) == 0x000000, "Member 'B_KillRagdoll_C_SetVelocity::Ragdoll' has a wrong offset!");

// Function B_KillRagdoll.B_KillRagdoll_C.ExecuteUbergraph_B_KillRagdoll
// 0x05C0 (0x05C0 - 0x0000)
struct B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_GameState_C*                         CallFunc_GetBGameState_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_2;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_3;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_4;             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue_2;      // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_5;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_Killer;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Death_C*                             K2Node_CustomEvent_Ragdoll;                        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIProp_C>              K2Node_DynamicCast_AsIProp;                        // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PropPawnPhysics_C*                   K2Node_DynamicCast_AsB_Prop_Pawn_Physics;          // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSRuntimePropData                      CallFunc_GetRuntimePropData_RuntimePropData;       // 0x0080(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Witch_C*                             K2Node_DynamicCast_AsB_Witch;                      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_MatchParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UB_ActorEvents_C*>               CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UB_ActorEvents_C*                       CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IIControlled_C>        K2Node_DynamicCast_AsIControlled;                  // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AController* Killer)>    K2Node_CreateDelegate_OutputDelegate;              // 0x014C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetCurrentController_Controller;          // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PlayerState_C*                       K2Node_DynamicCast_AsB_Player_State;               // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0180(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0260(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x02C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0338(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0350(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x0368(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0380(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x03E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue; // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsLinearVelocity_ReturnValue;     // 0x0410(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Hunter_C*                            K2Node_DynamicCast_AsB_Hunter;                     // 0x0430(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439[0x7];                                      // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Death_C*                             CallFunc_FinishSpawningActor_ReturnValue;          // 0x0440(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBaseAimRotation_ReturnValue;           // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0460(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_478[0x8];                                      // 0x0478(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_2;               // 0x0480(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x04E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x04F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x0510(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_528[0x8];                                      // 0x0528(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0530(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1; // 0x0590(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsLinearVelocity_ReturnValue_1;   // 0x05A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll) == 0x000010, "Wrong alignment on B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll");
static_assert(sizeof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll) == 0x0005C0, "Wrong size on B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, EntryPoint) == 0x000000, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetBGameState_ReturnValue) == 0x000008, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetBGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_NotEqual_ClassClass_ReturnValue) == 0x000018, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_NotEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue) == 0x000019, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x00001A, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue_1) == 0x00001B, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetObjectClass_ReturnValue_1) == 0x000020, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue_2) == 0x000028, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetObjectClass_ReturnValue_2) == 0x000030, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetObjectClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue_3) == 0x000038, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_EqualEqual_ClassClass_ReturnValue_1) == 0x000039, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_EqualEqual_ClassClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue_4) == 0x00003A, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_EqualEqual_ClassClass_ReturnValue_2) == 0x00003B, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_EqualEqual_ClassClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ClassIsChildOf_ReturnValue_5) == 0x00003C, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ClassIsChildOf_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_CustomEvent_Killer) == 0x000040, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_CustomEvent_Killer' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_CustomEvent_Ragdoll) == 0x000050, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_CustomEvent_Ragdoll' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsIProp) == 0x000058, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsIProp' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsB_Prop_Pawn_Physics) == 0x000070, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsB_Prop_Pawn_Physics' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetRuntimePropData_RuntimePropData) == 0x000080, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetRuntimePropData_RuntimePropData' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsB_Witch) == 0x0000B8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsB_Witch' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetWorldSubsystem_ReturnValue) == 0x0000C8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetDisplayName_ReturnValue) == 0x0000D0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0000F0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000108, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000118, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Array_Get_Item) == 0x000128, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Array_Length_ReturnValue) == 0x000130, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000134, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Greater_IntInt_ReturnValue) == 0x000135, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsIControlled) == 0x000138, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsIControlled' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess_3) == 0x000148, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_CreateDelegate_OutputDelegate) == 0x00014C, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetCurrentController_Controller) == 0x000160, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetCurrentController_Controller' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsB_Player_State) == 0x000170, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsB_Player_State' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess_4) == 0x000178, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetTransform_ReturnValue) == 0x000180, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Location) == 0x0001E0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Rotation) == 0x0001F8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Scale) == 0x000210, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000228, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ComposeRotators_ReturnValue) == 0x000240, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetTransform_ReturnValue_1) == 0x000260, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_MakeTransform_ReturnValue) == 0x0002C0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Location_1) == 0x000320, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Rotation_1) == 0x000338, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Scale_1) == 0x000350, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_ComposeRotators_ReturnValue_1) == 0x000368, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_MakeTransform_ReturnValue_1) == 0x000380, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0003E0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue) == 0x0003F8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetPhysicsLinearVelocity_ReturnValue) == 0x000410, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetPhysicsLinearVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000428, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_AsB_Hunter) == 0x000430, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_AsB_Hunter' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, K2Node_DynamicCast_bSuccess_5) == 0x000438, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_FinishSpawningActor_ReturnValue) == 0x000440, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetBaseAimRotation_ReturnValue) == 0x000448, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetBaseAimRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000460, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetTransform_ReturnValue_2) == 0x000480, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Location_2) == 0x0004E0, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Rotation_2) == 0x0004F8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_BreakTransform_Scale_2) == 0x000510, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_MakeTransform_ReturnValue_2) == 0x000530, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1) == 0x000590, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll, CallFunc_GetPhysicsLinearVelocity_ReturnValue_1) == 0x0005A8, "Member 'B_KillRagdoll_C_ExecuteUbergraph_B_KillRagdoll::CallFunc_GetPhysicsLinearVelocity_ReturnValue_1' has a wrong offset!");

}

