#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AddFriendPopup

#include "Basic.hpp"

#include "OnlineSubsystemBlueprints_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.AcceptFriendInvite
// 0x0030 (0x0030 - 0x0000)
struct WB_AddFriendPopup_C_AcceptFriendInvite final
{
public:
	struct FUniqueNetIdRepl                       PlayerId;                                          // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_AcceptFriendInvite) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_AcceptFriendInvite");
static_assert(sizeof(WB_AddFriendPopup_C_AcceptFriendInvite) == 0x000030, "Wrong size on WB_AddFriendPopup_C_AcceptFriendInvite");
static_assert(offsetof(WB_AddFriendPopup_C_AcceptFriendInvite, PlayerId) == 0x000000, "Member 'WB_AddFriendPopup_C_AcceptFriendInvite::PlayerId' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.CheckForUniqueNetIDValidity
// 0x00E0 (0x00E0 - 0x0000)
struct WB_AddFriendPopup_C_CheckForUniqueNetIDValidity final
{
public:
	struct FUniqueNetIdRepl                       InNetId;                                           // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_FUniqueNetIdIsValid_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOnlineFriendsSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UOnlineFriendRef*>               CallFunc_GetFriendsList_OutFriends;                // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetFriendsList_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOnlineFriendRef*                       CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetUserId_ReturnValue;                    // 0x0068(0x0030)(HasGetValueTypeHash)
	EInviteStatus_                                CallFunc_GetInviteStatus_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetUserId_ReturnValue_1;                  // 0x00A0(0x0030)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue; // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1; // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_CheckForUniqueNetIDValidity");
static_assert(sizeof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity) == 0x0000E0, "Wrong size on WB_AddFriendPopup_C_CheckForUniqueNetIDValidity");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, InNetId) == 0x000000, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::InNetId' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_FUniqueNetIdIsValid_ReturnValue) == 0x000030, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_FUniqueNetIdIsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, Temp_int_Array_Index_Variable) == 0x000034, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000040, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetFriendsList_OutFriends) == 0x000048, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetFriendsList_OutFriends' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetFriendsList_ReturnValue) == 0x000058, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetFriendsList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_Array_Get_Item) == 0x000060, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetUserId_ReturnValue) == 0x000068, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetUserId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetInviteStatus_ReturnValue) == 0x000098, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetInviteStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_GetUserId_ReturnValue_1) == 0x0000A0, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_GetUserId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_Array_Length_ReturnValue) == 0x0000D4, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue) == 0x0000D9, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CheckForUniqueNetIDValidity, CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1) == 0x0000DA, "Member 'WB_AddFriendPopup_C_CheckForUniqueNetIDValidity::CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.CloseDialog
// 0x0018 (0x0018 - 0x0000)
struct WB_AddFriendPopup_C_CloseDialog final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_CloseDialog) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_CloseDialog");
static_assert(sizeof(WB_AddFriendPopup_C_CloseDialog) == 0x000018, "Wrong size on WB_AddFriendPopup_C_CloseDialog");
static_assert(offsetof(WB_AddFriendPopup_C_CloseDialog, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'WB_AddFriendPopup_C_CloseDialog::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CloseDialog, K2Node_DynamicCast_AsB_Game_Instance) == 0x000008, "Member 'WB_AddFriendPopup_C_CloseDialog::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_CloseDialog, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WB_AddFriendPopup_C_CloseDialog::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.CreateTooltip
// 0x0008 (0x0008 - 0x0000)
struct WB_AddFriendPopup_C_CreateTooltip final
{
public:
	class UUserWidget*                            CallFunc_CreateTextTooltip_Tooltip;                // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_CreateTooltip) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_CreateTooltip");
static_assert(sizeof(WB_AddFriendPopup_C_CreateTooltip) == 0x000008, "Wrong size on WB_AddFriendPopup_C_CreateTooltip");
static_assert(offsetof(WB_AddFriendPopup_C_CreateTooltip, CallFunc_CreateTextTooltip_Tooltip) == 0x000000, "Member 'WB_AddFriendPopup_C_CreateTooltip::CallFunc_CreateTextTooltip_Tooltip' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.ExecuteUbergraph_WB_AddFriendPopup
// 0x01A8 (0x01A8 - 0x0000)
struct WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ClipboardGet_ReturnValue;                 // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0010)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0060(0x0010)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x0090(0x0030)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x00D0(0x0010)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_PlayerId_1;                     // 0x0100(0x0030)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_PlayerId;                       // 0x0130(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_SendFriendInvite_InitialSuccess;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AcceptFriendRequest_InitialSuccess;       // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadMode_ReturnValue;                // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_163[0x5];                                      // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UOnlineIdentitySubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_CreateUniquePlayerId_ReturnValue;         // 0x0170(0x0030)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup");
static_assert(sizeof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup) == 0x0001A8, "Wrong size on WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, EntryPoint) == 0x000000, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, Temp_byte_Variable) == 0x000004, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, Temp_bool_Variable) == 0x000019, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetGameInstance_ReturnValue_1) == 0x000020, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000028, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_ClipboardGet_ReturnValue) == 0x000038, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_ClipboardGet_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, Temp_byte_Variable_1) == 0x000058, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetText_ReturnValue) == 0x000060, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_Len_ReturnValue) == 0x000080, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000084, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetOwningPlayer_ReturnValue) == 0x000088, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetControllerUniqueNetId_ReturnValue) == 0x000090, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetControllerUniqueNetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue) == 0x0000C0, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetText_ReturnValue_1) == 0x0000D0, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0000E0, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000E8, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_BooleanAND_ReturnValue) == 0x0000F8, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_CustomEvent_PlayerId_1) == 0x000100, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_CustomEvent_PlayerId_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_CustomEvent_PlayerId) == 0x000130, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_CustomEvent_PlayerId' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_SendFriendInvite_InitialSuccess) == 0x000160, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_SendFriendInvite_InitialSuccess' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_AcceptFriendRequest_InitialSuccess) == 0x000161, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_AcceptFriendRequest_InitialSuccess' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_IsGamepadMode_ReturnValue) == 0x000162, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_IsGamepadMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000168, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, CallFunc_CreateUniquePlayerId_ReturnValue) == 0x000170, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::CallFunc_CreateUniquePlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup, K2Node_Select_Default) == 0x0001A0, "Member 'WB_AddFriendPopup_C_ExecuteUbergraph_WB_AddFriendPopup::K2Node_Select_Default' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.GetInitialFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WB_AddFriendPopup_C_GetInitialFocusWidget final
{
public:
	class UUserWidget*                            InitialFocusWidget;                                // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_GetInitialFocusWidget) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_GetInitialFocusWidget");
static_assert(sizeof(WB_AddFriendPopup_C_GetInitialFocusWidget) == 0x000008, "Wrong size on WB_AddFriendPopup_C_GetInitialFocusWidget");
static_assert(offsetof(WB_AddFriendPopup_C_GetInitialFocusWidget, InitialFocusWidget) == 0x000000, "Member 'WB_AddFriendPopup_C_GetInitialFocusWidget::InitialFocusWidget' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.GetVisibility_0
// 0x0006 (0x0006 - 0x0000)
struct WB_AddFriendPopup_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsoleBuild_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_GetVisibility_0) == 0x000001, "Wrong alignment on WB_AddFriendPopup_C_GetVisibility_0");
static_assert(sizeof(WB_AddFriendPopup_C_GetVisibility_0) == 0x000006, "Wrong size on WB_AddFriendPopup_C_GetVisibility_0");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WB_AddFriendPopup_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, Temp_bool_Variable) == 0x000001, "Member 'WB_AddFriendPopup_C_GetVisibility_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, Temp_byte_Variable) == 0x000002, "Member 'WB_AddFriendPopup_C_GetVisibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, Temp_byte_Variable_1) == 0x000003, "Member 'WB_AddFriendPopup_C_GetVisibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, CallFunc_IsConsoleBuild_ReturnValue) == 0x000004, "Member 'WB_AddFriendPopup_C_GetVisibility_0::CallFunc_IsConsoleBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_GetVisibility_0, K2Node_Select_Default) == 0x000005, "Member 'WB_AddFriendPopup_C_GetVisibility_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.OnPreviewKeyDown
// 0x02C0 (0x02C0 - 0x0000)
struct WB_AddFriendPopup_C_OnPreviewKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0130(0x00B8)()
	struct FEventReply                            CallFunc_OnPreviewKeyDown_ReturnValue;             // 0x01E8(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x02A0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_OnPreviewKeyDown) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_OnPreviewKeyDown");
static_assert(sizeof(WB_AddFriendPopup_C_OnPreviewKeyDown) == 0x0002C0, "Wrong size on WB_AddFriendPopup_C_OnPreviewKeyDown");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, MyGeometry) == 0x000000, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, InKeyEvent) == 0x000038, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, ReturnValue) == 0x000078, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, CallFunc_Handled_ReturnValue) == 0x000130, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, CallFunc_OnPreviewKeyDown_ReturnValue) == 0x0001E8, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::CallFunc_OnPreviewKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, CallFunc_GetKey_ReturnValue) == 0x0002A0, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_AddFriendPopup_C_OnPreviewKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0002B8, "Member 'WB_AddFriendPopup_C_OnPreviewKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function WB_AddFriendPopup.WB_AddFriendPopup_C.SendFriendInvite
// 0x0030 (0x0030 - 0x0000)
struct WB_AddFriendPopup_C_SendFriendInvite final
{
public:
	struct FUniqueNetIdRepl                       PlayerId;                                          // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WB_AddFriendPopup_C_SendFriendInvite) == 0x000008, "Wrong alignment on WB_AddFriendPopup_C_SendFriendInvite");
static_assert(sizeof(WB_AddFriendPopup_C_SendFriendInvite) == 0x000030, "Wrong size on WB_AddFriendPopup_C_SendFriendInvite");
static_assert(offsetof(WB_AddFriendPopup_C_SendFriendInvite, PlayerId) == 0x000000, "Member 'WB_AddFriendPopup_C_SendFriendInvite::PlayerId' has a wrong offset!");

}
