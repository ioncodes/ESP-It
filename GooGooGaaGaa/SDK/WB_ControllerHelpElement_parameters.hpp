#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerHelpElement

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "ETeamID_structs.hpp"


namespace SDK::Params
{

// Function WB_ControllerHelpElement.WB_ControllerHelpElement_C.ExecuteUbergraph_WB_ControllerHelpElement
// 0x01A8 (0x01A8 - 0x0000)
struct WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CBE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CBF[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FKey, class FName>                K2Node_CustomEvent_Bindings;                       // 0x0070(0x0050)()
	ETeamID                                       K2Node_CustomEvent_Team;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC1[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00C8(0x0018)()
	class FName                                   CallFunc_Map_Find_Value;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC2[0x5];                                     // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value_1;                         // 0x00F0(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       Temp_byte_Variable_1;                              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC3[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_3;                              // 0x0110(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0128(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC4[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_5;                              // 0x0148(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0160(0x0018)()
	class FName                                   CallFunc_Map_Find_Value_2;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC5[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value_3;                         // 0x0188(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement) == 0x000008, "Wrong alignment on WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement");
static_assert(sizeof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement) == 0x0001A8, "Wrong size on WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, EntryPoint) == 0x000000, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_byte_Variable) == 0x000004, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable) == 0x000008, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable_1) == 0x000020, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable_2) == 0x000038, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_Event_IsDesignTime) == 0x000050, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_GetGameInstance_ReturnValue) == 0x000058, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_DynamicCast_AsB_Game_Instance) == 0x000060, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_CustomEvent_Bindings) == 0x000070, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_CustomEvent_Bindings' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_CustomEvent_Team) == 0x0000C0, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_CustomEvent_Team' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_Select_Default) == 0x0000C8, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_Value) == 0x0000E0, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_ReturnValue) == 0x0000E8, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000E9, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000EA, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_Value_1) == 0x0000F0, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_ReturnValue_1) == 0x000108, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_byte_Variable_1) == 0x000109, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable_3) == 0x000110, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable_4) == 0x000128, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_TextIsEmpty_ReturnValue) == 0x000140, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, Temp_text_Variable_5) == 0x000148, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, K2Node_Select_Default_1) == 0x000160, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_Value_2) == 0x000178, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_ReturnValue_2) == 0x000180, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_Value_3) == 0x000188, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement, CallFunc_Map_Find_ReturnValue_3) == 0x0001A0, "Member 'WB_ControllerHelpElement_C_ExecuteUbergraph_WB_ControllerHelpElement::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");

// Function WB_ControllerHelpElement.WB_ControllerHelpElement_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WB_ControllerHelpElement_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerHelpElement_C_PreConstruct) == 0x000001, "Wrong alignment on WB_ControllerHelpElement_C_PreConstruct");
static_assert(sizeof(WB_ControllerHelpElement_C_PreConstruct) == 0x000001, "Wrong size on WB_ControllerHelpElement_C_PreConstruct");
static_assert(offsetof(WB_ControllerHelpElement_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WB_ControllerHelpElement_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WB_ControllerHelpElement.WB_ControllerHelpElement_C.UpdateActionName
// 0x0058 (0x0058 - 0x0000)
struct WB_ControllerHelpElement_C_UpdateActionName final
{
public:
	TMap<struct FKey, class FName>                Bindings;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	ETeamID                                       Team;                                              // 0x0050(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ControllerHelpElement_C_UpdateActionName) == 0x000008, "Wrong alignment on WB_ControllerHelpElement_C_UpdateActionName");
static_assert(sizeof(WB_ControllerHelpElement_C_UpdateActionName) == 0x000058, "Wrong size on WB_ControllerHelpElement_C_UpdateActionName");
static_assert(offsetof(WB_ControllerHelpElement_C_UpdateActionName, Bindings) == 0x000000, "Member 'WB_ControllerHelpElement_C_UpdateActionName::Bindings' has a wrong offset!");
static_assert(offsetof(WB_ControllerHelpElement_C_UpdateActionName, Team) == 0x000050, "Member 'WB_ControllerHelpElement_C_UpdateActionName::Team' has a wrong offset!");

}
