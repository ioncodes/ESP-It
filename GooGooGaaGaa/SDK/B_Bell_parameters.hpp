#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Bell

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Bell.B_Bell_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Bell_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Bell_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Bell_C_ReceiveTick");
static_assert(sizeof(B_Bell_C_ReceiveTick) == 0x000004, "Wrong size on B_Bell_C_ReceiveTick");
static_assert(offsetof(B_Bell_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Bell_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Bell.B_Bell_C.ExecuteUbergraph_B_Bell
// 0x0390 (0x0390 - 0x0000)
struct B_Bell_C_ExecuteUbergraph_B_Bell final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F87[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F88[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent_1;         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit_1;                  // 0x0080(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F89[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8A[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8B[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8C[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0200(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Potato_C*                            K2Node_DynamicCast_AsB_Potato;                     // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F8D[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue_1;            // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue_2;            // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast; // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast; // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast_1; // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Bell_C_ExecuteUbergraph_B_Bell) == 0x000008, "Wrong alignment on B_Bell_C_ExecuteUbergraph_B_Bell");
static_assert(sizeof(B_Bell_C_ExecuteUbergraph_B_Bell) == 0x000390, "Wrong size on B_Bell_C_ExecuteUbergraph_B_Bell");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, EntryPoint) == 0x000000, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_GetActorScale3D_ReturnValue) == 0x000008, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_X) == 0x000020, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Y) == 0x000028, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Z) == 0x000030, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_Event_DeltaSeconds) == 0x000038, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_HitComponent_1) == 0x000050, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_HitComponent_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000058, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000060, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_NormalImpulse_1) == 0x000068, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_NormalImpulse_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_Hit_1) == 0x000080, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_VSize_ReturnValue) == 0x000168, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000170, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000178, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_FMin_ReturnValue) == 0x000180, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000188, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0001A8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001B0, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_FMax_ReturnValue) == 0x0001C0, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BooleanAND_ReturnValue) == 0x0001C8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_HitComponent) == 0x0001D0, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_OtherActor) == 0x0001D8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_OtherComp) == 0x0001E0, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0001E8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_ComponentBoundEvent_Hit) == 0x000200, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0002E8, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_DynamicCast_AsB_Potato) == 0x000300, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_DynamicCast_AsB_Potato' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, K2Node_DynamicCast_bSuccess) == 0x000308, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_GetActorScale3D_ReturnValue_1) == 0x000310, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_GetActorScale3D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_GetActorScale3D_ReturnValue_2) == 0x000328, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_GetActorScale3D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_X_1) == 0x000340, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Y_1) == 0x000348, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Z_1) == 0x000350, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_X_2) == 0x000358, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Y_2) == 0x000360, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_BreakVector_Z_2) == 0x000368, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000370, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x000378, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast) == 0x000380, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_PlaySoundAtLocation_VolumeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast) == 0x000384, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Bell_C_ExecuteUbergraph_B_Bell, CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast_1) == 0x000388, "Member 'B_Bell_C_ExecuteUbergraph_B_Bell::CallFunc_PlaySoundAtLocation_PitchMultiplier_ImplicitCast_1' has a wrong offset!");

// Function B_Bell.B_Bell_C.BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'B_Bell_C_BndEvt__BellHammer_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function B_Bell.B_Bell_C.BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'B_Bell_C_BndEvt__Bell_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

}
