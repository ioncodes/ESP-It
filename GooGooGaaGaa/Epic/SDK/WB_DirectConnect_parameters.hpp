#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_DirectConnect

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WB_DirectConnect.WB_DirectConnect_C.BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000018, "Wrong size on WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000010, "Member 'WB_DirectConnect_C_BndEvt__IPTextfield_K2Node_ComponentBoundEvent_65_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function WB_DirectConnect.WB_DirectConnect_C.ExecuteUbergraph_WB_DirectConnect
// 0x0068 (0x0068 - 0x0000)
struct WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0038(0x0010)()
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0048(0x0010)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect) == 0x000008, "Wrong alignment on WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect");
static_assert(sizeof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect) == 0x000068, "Wrong size on WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, EntryPoint) == 0x000000, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, CallFunc_GetGameInstance_ReturnValue_1) == 0x000010, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_DynamicCast_AsB_Game_Instance) == 0x000018, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000028, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, CallFunc_MakeLiteralByte_ReturnValue) == 0x000031, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, CallFunc_GetText_ReturnValue) == 0x000038, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_ComponentBoundEvent_Text) == 0x000048, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, K2Node_ComponentBoundEvent_CommitMethod) == 0x000058, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect, CallFunc_GetOwningPlayer_ReturnValue) == 0x000060, "Member 'WB_DirectConnect_C_ExecuteUbergraph_WB_DirectConnect::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

// Function WB_DirectConnect.WB_DirectConnect_C.GetInitialFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_DirectConnect_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_DirectConnect_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_DirectConnect_C_GetInitialFocusWidget");
static_assert(sizeof(WB_DirectConnect_C_GetInitialFocusWidget) == 0x000008, "Wrong size on WB_DirectConnect_C_GetInitialFocusWidget");
static_assert(offsetof(WB_DirectConnect_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_DirectConnect_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");

}

