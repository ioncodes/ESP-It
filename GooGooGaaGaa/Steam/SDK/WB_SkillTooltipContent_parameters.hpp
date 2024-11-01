#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkillTooltipContent

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.ExecuteUbergraph_WB_SkillTooltipContent
// 0x0020 (0x0020 - 0x0000)
struct WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_BaseSkill_C*                         K2Node_DynamicCast_AsB_Base_Skill;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent");
static_assert(sizeof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent) == 0x000020, "Wrong size on WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, EntryPoint) == 0x000000, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, CallFunc_GetDefaultObject_ReturnValue) == 0x000008, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, K2Node_DynamicCast_AsB_Base_Skill) == 0x000010, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::K2Node_DynamicCast_AsB_Base_Skill' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent, CallFunc_OpenUrl_ReturnValue) == 0x000019, "Member 'WB_SkillTooltipContent_C_ExecuteUbergraph_WB_SkillTooltipContent::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_ActivationMana_Text_0
// 0x0090 (0x0090 - 0x0000)
struct WB_SkillTooltipContent_C_Get_ActivationMana_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFloatValueByName_Value;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0010)()
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_ActivationMana_Text_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0) == 0x000090, "Wrong size on WB_SkillTooltipContent_C_Get_ActivationMana_Text_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, CallFunc_GetFloatValueByName_Value) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::CallFunc_GetFloatValueByName_Value' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, K2Node_MakeArray_Array) == 0x000070, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Text_0, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_ActivationMana_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0010)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0) == 0x000020, "Wrong size on WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WB_SkillTooltipContent_C_Get_ActivationMana_Visibility_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_Cooldown_Text_0
// 0x0090 (0x0090 - 0x0000)
struct WB_SkillTooltipContent_C_Get_Cooldown_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFloatValueByName_Value;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0010)()
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_Cooldown_Text_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0) == 0x000090, "Wrong size on WB_SkillTooltipContent_C_Get_Cooldown_Text_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, CallFunc_GetFloatValueByName_Value) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::CallFunc_GetFloatValueByName_Value' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, K2Node_MakeArray_Array) == 0x000070, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Text_0, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_Cooldown_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0010)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0) == 0x000020, "Wrong size on WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WB_SkillTooltipContent_C_Get_Cooldown_Visibility_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_Description_Text_0
// 0x0050 (0x0050 - 0x0000)
struct WB_SkillTooltipContent_C_Get_Description_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_BaseSkill_C*                         K2Node_DynamicCast_AsB_Base_Skill;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillTooltip_Tooltip;                  // 0x0030(0x0010)()
	class FText                                   CallFunc_GetSkillTooltipText_ReturnValue;          // 0x0040(0x0010)()
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_Description_Text_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_Description_Text_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_Description_Text_0) == 0x000050, "Wrong size on WB_SkillTooltipContent_C_Get_Description_Text_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, CallFunc_GetDefaultObject_ReturnValue) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, K2Node_DynamicCast_AsB_Base_Skill) == 0x000020, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::K2Node_DynamicCast_AsB_Base_Skill' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, CallFunc_GetSkillTooltip_Tooltip) == 0x000030, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::CallFunc_GetSkillTooltip_Tooltip' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Description_Text_0, CallFunc_GetSkillTooltipText_ReturnValue) == 0x000040, "Member 'WB_SkillTooltipContent_C_Get_Description_Text_0::CallFunc_GetSkillTooltipText_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_ManaPerSec_Text_0
// 0x0098 (0x0098 - 0x0000)
struct WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	double                                        ManaPerSecs;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_SkillParametersSubsystem_C*          CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetFloatValueByName_Value;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0010)()
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0) == 0x000098, "Wrong size on WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, ManaPerSecs) == 0x000010, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::ManaPerSecs' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, CallFunc_GetFloatValueByName_Value) == 0x000020, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::CallFunc_GetFloatValueByName_Value' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000028, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, K2Node_MakeArray_Array) == 0x000078, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_ManaPerSec_Visibility_0
// 0x0020 (0x0020 - 0x0000)
struct WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0008(0x0010)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0) == 0x000020, "Wrong size on WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0, CallFunc_GetText_ReturnValue) == 0x000008, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'WB_SkillTooltipContent_C_Get_ManaPerSec_Visibility_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_Name_Text_0
// 0x0010 (0x0010 - 0x0000)
struct WB_SkillTooltipContent_C_Get_Name_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_Name_Text_0) == 0x000008, "Wrong alignment on WB_SkillTooltipContent_C_Get_Name_Text_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_Name_Text_0) == 0x000010, "Wrong size on WB_SkillTooltipContent_C_Get_Name_Text_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Name_Text_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_Name_Text_0::ReturnValue' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.Get_Video_Visibility_0
// 0x0006 (0x0006 - 0x0000)
struct WB_SkillTooltipContent_C_Get_Video_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_Get_Video_Visibility_0) == 0x000001, "Wrong alignment on WB_SkillTooltipContent_C_Get_Video_Visibility_0");
static_assert(sizeof(WB_SkillTooltipContent_C_Get_Video_Visibility_0) == 0x000006, "Wrong size on WB_SkillTooltipContent_C_Get_Video_Visibility_0");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, ReturnValue) == 0x000000, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, Temp_bool_Variable) == 0x000001, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, Temp_byte_Variable) == 0x000002, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, CallFunc_IsEmpty_ReturnValue) == 0x000004, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SkillTooltipContent_C_Get_Video_Visibility_0, K2Node_Select_Default) == 0x000005, "Member 'WB_SkillTooltipContent_C_Get_Video_Visibility_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_SkillTooltipContent.WB_SkillTooltipContent_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_SkillTooltipContent_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SkillTooltipContent_C_PreConstruct) == 0x000001, "Wrong alignment on WB_SkillTooltipContent_C_PreConstruct");
static_assert(sizeof(WB_SkillTooltipContent_C_PreConstruct) == 0x000001, "Wrong size on WB_SkillTooltipContent_C_PreConstruct");
static_assert(offsetof(WB_SkillTooltipContent_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_SkillTooltipContent_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

