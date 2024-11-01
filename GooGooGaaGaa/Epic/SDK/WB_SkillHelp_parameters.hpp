#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillHelp

#include "Basic.hpp"

#include "ETeamID_structs.hpp"
#include "ESkillCategory_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WB_SkillHelp.WB_SkillHelp_C.ExecuteUbergraph_WB_SkillHelp
// 0x0140 (0x0140 - 0x0000)
struct WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillCategory                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_BaseSkill_C*                         K2Node_DynamicCast_AsB_Base_Skill;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       CallFunc_GetSkillTeam_SkillTeam;                   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetTeamColor_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_SkillClass;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESkillCategory                                K2Node_CustomEvent_OldSkillCategory;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillTooltip_Tooltip;                  // 0x0060(0x0010)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0070(0x00D0)()
};
static_assert(alignof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp) == 0x000010, "Wrong alignment on WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp");
static_assert(sizeof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp) == 0x000140, "Wrong size on WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, EntryPoint) == 0x000000, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, Temp_byte_Variable) == 0x000004, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, CallFunc_GetDefaultObject_ReturnValue) == 0x000008, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_DynamicCast_AsB_Base_Skill) == 0x000010, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_DynamicCast_AsB_Base_Skill' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, CallFunc_GetSkillTeam_SkillTeam) == 0x000019, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::CallFunc_GetSkillTeam_SkillTeam' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000020, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, CallFunc_GetTeamColor_ReturnValue) == 0x000028, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::CallFunc_GetTeamColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, Temp_name_Variable) == 0x000038, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, Temp_name_Variable_1) == 0x000040, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_Select_Default) == 0x000048, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_CustomEvent_SkillClass) == 0x000050, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_CustomEvent_SkillClass' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_CustomEvent_OldSkillCategory) == 0x000058, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_CustomEvent_OldSkillCategory' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, CallFunc_GetSkillTooltip_Tooltip) == 0x000060, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::CallFunc_GetSkillTooltip_Tooltip' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp, K2Node_MakeStruct_SlateBrush) == 0x000070, "Member 'WB_SkillHelp_C_ExecuteUbergraph_WB_SkillHelp::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WB_SkillHelp.WB_SkillHelp_C.GetSkillTeam
// 0x0010 (0x0010 - 0x0000)
struct WB_SkillHelp_C_GetSkillTeam final
{
public:
	class UClass*                                 SkillClass_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       SkillTeam_0;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillHelp_C_GetSkillTeam) == 0x000008, "Wrong alignment on WB_SkillHelp_C_GetSkillTeam");
static_assert(sizeof(WB_SkillHelp_C_GetSkillTeam) == 0x000010, "Wrong size on WB_SkillHelp_C_GetSkillTeam");
static_assert(offsetof(WB_SkillHelp_C_GetSkillTeam, SkillClass_0) == 0x000000, "Member 'WB_SkillHelp_C_GetSkillTeam::SkillClass_0' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_GetSkillTeam, SkillTeam_0) == 0x000008, "Member 'WB_SkillHelp_C_GetSkillTeam::SkillTeam_0' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_GetSkillTeam, CallFunc_ClassIsChildOf_ReturnValue) == 0x000009, "Member 'WB_SkillHelp_C_GetSkillTeam::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_GetSkillTeam, CallFunc_ClassIsChildOf_ReturnValue_1) == 0x00000A, "Member 'WB_SkillHelp_C_GetSkillTeam::CallFunc_ClassIsChildOf_ReturnValue_1' has a wrong offset!");

// Function WB_SkillHelp.WB_SkillHelp_C.SetSkill
// 0x0010 (0x0010 - 0x0000)
struct WB_SkillHelp_C_SetSkill final
{
public:
	class UClass*                                 SkillClass_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESkillCategory                                OldSkillCategory;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillHelp_C_SetSkill) == 0x000008, "Wrong alignment on WB_SkillHelp_C_SetSkill");
static_assert(sizeof(WB_SkillHelp_C_SetSkill) == 0x000010, "Wrong size on WB_SkillHelp_C_SetSkill");
static_assert(offsetof(WB_SkillHelp_C_SetSkill, SkillClass_0) == 0x000000, "Member 'WB_SkillHelp_C_SetSkill::SkillClass_0' has a wrong offset!");
static_assert(offsetof(WB_SkillHelp_C_SetSkill, OldSkillCategory) == 0x000008, "Member 'WB_SkillHelp_C_SetSkill::OldSkillCategory' has a wrong offset!");

}

