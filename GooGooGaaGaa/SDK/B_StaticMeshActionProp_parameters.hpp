#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StaticMeshActionProp

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.DeactivateActionProp
// 0x0008 (0x0008 - 0x0000)
struct B_StaticMeshActionProp_C_DeactivateActionProp final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE5[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast;     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_DeactivateActionProp) == 0x000004, "Wrong alignment on B_StaticMeshActionProp_C_DeactivateActionProp");
static_assert(sizeof(B_StaticMeshActionProp_C_DeactivateActionProp) == 0x000008, "Wrong size on B_StaticMeshActionProp_C_DeactivateActionProp");
static_assert(offsetof(B_StaticMeshActionProp_C_DeactivateActionProp, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'B_StaticMeshActionProp_C_DeactivateActionProp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_DeactivateActionProp, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'B_StaticMeshActionProp_C_DeactivateActionProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_DeactivateActionProp, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'B_StaticMeshActionProp_C_DeactivateActionProp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_DeactivateActionProp, CallFunc_FadeOut_FadeOutDuration_ImplicitCast) == 0x000004, "Member 'B_StaticMeshActionProp_C_DeactivateActionProp::CallFunc_FadeOut_FadeOutDuration_ImplicitCast' has a wrong offset!");

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ActivateActionProp
// 0x0028 (0x0028 - 0x0000)
struct B_StaticMeshActionProp_C_ActivateActionProp final
{
public:
	bool                                          Override;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AudioPlaying;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         CallFunc_GetAsset_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE7[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FadeIn_FadeInDuration_ImplicitCast;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FadeIn_FadeInDuration_ImplicitCast_1;     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_ActivateActionProp) == 0x000008, "Wrong alignment on B_StaticMeshActionProp_C_ActivateActionProp");
static_assert(sizeof(B_StaticMeshActionProp_C_ActivateActionProp) == 0x000028, "Wrong size on B_StaticMeshActionProp_C_ActivateActionProp");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, Override) == 0x000000, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::Override' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, AudioPlaying) == 0x000001, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::AudioPlaying' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, K2Node_SwitchEnum_CmpSuccess_1) == 0x000003, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_GetAsset_ReturnValue) == 0x000008, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000010, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_IsPlaying_ReturnValue) == 0x000018, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001B, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_IsValid_ReturnValue_1) == 0x00001C, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_FadeIn_FadeInDuration_ImplicitCast) == 0x000020, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_FadeIn_FadeInDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ActivateActionProp, CallFunc_FadeIn_FadeInDuration_ImplicitCast_1) == 0x000024, "Member 'B_StaticMeshActionProp_C_ActivateActionProp::CallFunc_FadeIn_FadeInDuration_ImplicitCast_1' has a wrong offset!");

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ApplyTemplateData
// 0x0020 (0x0020 - 0x0000)
struct B_StaticMeshActionProp_C_ApplyTemplateData final
{
public:
	class AActor*                                 Template;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ForcedBoolean;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_StaticMeshActionProp_C*              K2Node_DynamicCast_AsB_Static_Mesh_Action_Prop;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ApplyTemplateData_ForcedBoolean;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_ApplyTemplateData) == 0x000008, "Wrong alignment on B_StaticMeshActionProp_C_ApplyTemplateData");
static_assert(sizeof(B_StaticMeshActionProp_C_ApplyTemplateData) == 0x000020, "Wrong size on B_StaticMeshActionProp_C_ApplyTemplateData");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, Template) == 0x000000, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::Template' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, ForcedBoolean) == 0x000008, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::ForcedBoolean' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, K2Node_DynamicCast_AsB_Static_Mesh_Action_Prop) == 0x000010, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::K2Node_DynamicCast_AsB_Static_Mesh_Action_Prop' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ApplyTemplateData, CallFunc_ApplyTemplateData_ForcedBoolean) == 0x00001A, "Member 'B_StaticMeshActionProp_C_ApplyTemplateData::CallFunc_ApplyTemplateData_ForcedBoolean' has a wrong offset!");

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.UpdateActionProp
// 0x0002 (0x0002 - 0x0000)
struct B_StaticMeshActionProp_C_UpdateActionProp final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_UpdateActionProp) == 0x000001, "Wrong alignment on B_StaticMeshActionProp_C_UpdateActionProp");
static_assert(sizeof(B_StaticMeshActionProp_C_UpdateActionProp) == 0x000002, "Wrong size on B_StaticMeshActionProp_C_UpdateActionProp");
static_assert(offsetof(B_StaticMeshActionProp_C_UpdateActionProp, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'B_StaticMeshActionProp_C_UpdateActionProp::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_UpdateActionProp, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'B_StaticMeshActionProp_C_UpdateActionProp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.Action
// 0x0005 (0x0005 - 0x0000)
struct B_StaticMeshActionProp_C_Action final
{
public:
	bool                                          ForcedBoolean;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_Action) == 0x000001, "Wrong alignment on B_StaticMeshActionProp_C_Action");
static_assert(sizeof(B_StaticMeshActionProp_C_Action) == 0x000005, "Wrong size on B_StaticMeshActionProp_C_Action");
static_assert(offsetof(B_StaticMeshActionProp_C_Action, ForcedBoolean) == 0x000000, "Member 'B_StaticMeshActionProp_C_Action::ForcedBoolean' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_Action, CallFunc_HasAuthority_ReturnValue) == 0x000001, "Member 'B_StaticMeshActionProp_C_Action::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_Action, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'B_StaticMeshActionProp_C_Action::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_Action, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'B_StaticMeshActionProp_C_Action::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_Action, CallFunc_Not_PreBool_ReturnValue_1) == 0x000004, "Member 'B_StaticMeshActionProp_C_Action::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function B_StaticMeshActionProp.B_StaticMeshActionProp_C.ExecuteUbergraph_B_StaticMeshActionProp
// 0x0018 (0x0018 - 0x0000)
struct B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE9[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp) == 0x000008, "Wrong alignment on B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp");
static_assert(sizeof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp) == 0x000018, "Wrong size on B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp");
static_assert(offsetof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp, EntryPoint) == 0x000000, "Member 'B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp, Temp_bool_Variable) == 0x000004, "Member 'B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000005, "Member 'B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp, K2Node_Select_Default) == 0x000008, "Member 'B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp, CallFunc_Delay_Duration_ImplicitCast) == 0x000010, "Member 'B_StaticMeshActionProp_C_ExecuteUbergraph_B_StaticMeshActionProp::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}
