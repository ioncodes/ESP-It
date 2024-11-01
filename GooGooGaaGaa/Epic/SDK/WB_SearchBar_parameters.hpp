#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SearchBar

#include "Basic.hpp"

#include "S_PropData_structs.hpp"
#include "B_SteamItemDef_structs.hpp"


namespace SDK::Params
{

// Function WB_SearchBar.WB_SearchBar_C.UpdateShownContentAfterInput
// 0x0080 (0x0080 - 0x0000)
struct WB_SearchBar_C_UpdateShownContentAfterInput final
{
public:
	class FText                                   InputText;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_SkinCategoryMenuScreen_C*           K2Node_DynamicCast_AsWB_Skin_Category_Menu_Screen; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ReplaceCharactersExcept_ReturnValue;      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSubstring_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0010)()
};
static_assert(alignof(WB_SearchBar_C_UpdateShownContentAfterInput) == 0x000008, "Wrong alignment on WB_SearchBar_C_UpdateShownContentAfterInput");
static_assert(sizeof(WB_SearchBar_C_UpdateShownContentAfterInput) == 0x000080, "Wrong size on WB_SearchBar_C_UpdateShownContentAfterInput");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, InputText) == 0x000000, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::InputText' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_Conv_TextToString_ReturnValue) == 0x000010, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_Len_ReturnValue) == 0x000020, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, K2Node_DynamicCast_AsWB_Skin_Category_Menu_Screen) == 0x000028, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::K2Node_DynamicCast_AsWB_Skin_Category_Menu_Screen' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000038, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_ReplaceCharactersExcept_ReturnValue) == 0x000048, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_ReplaceCharactersExcept_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_GetSubstring_ReturnValue) == 0x000058, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_GetSubstring_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_UpdateShownContentAfterInput, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'WB_SearchBar_C_UpdateShownContentAfterInput::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WB_SearchBar.WB_SearchBar_C.GetItemName
// 0x0128 (0x0128 - 0x0000)
struct WB_SearchBar_C_GetItemName final
{
public:
	class UB_TileViewData_C*                      ItemData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Item_Name;                                         // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Name_0;                                            // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_PropButtonData_C*                    K2Node_DynamicCast_AsB_Prop_Button_Data;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PropData                            CallFunc_Map_Find_Value;                           // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_SkinSetButtonData_C*                 K2Node_DynamicCast_AsB_Skin_Set_Button_Data;       // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ReplaceCharactersExcept_ReturnValue;      // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UB_SkinOrRecipeItemData_C*              K2Node_DynamicCast_AsB_Skin_or_Recipe_Item_Data;   // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FB_SteamItemDef                        CallFunc_GetSteamItemDef_ReturnValue;              // 0x00E8(0x0040)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SearchBar_C_GetItemName) == 0x000008, "Wrong alignment on WB_SearchBar_C_GetItemName");
static_assert(sizeof(WB_SearchBar_C_GetItemName) == 0x000128, "Wrong size on WB_SearchBar_C_GetItemName");
static_assert(offsetof(WB_SearchBar_C_GetItemName, ItemData) == 0x000000, "Member 'WB_SearchBar_C_GetItemName::ItemData' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, Item_Name) == 0x000008, "Member 'WB_SearchBar_C_GetItemName::Item_Name' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, Name_0) == 0x000018, "Member 'WB_SearchBar_C_GetItemName::Name_0' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'WB_SearchBar_C_GetItemName::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_AsB_Prop_Button_Data) == 0x000030, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_AsB_Prop_Button_Data' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_AsB_Game_Instance) == 0x000040, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_Map_Find_Value) == 0x000050, "Member 'WB_SearchBar_C_GetItemName::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'WB_SearchBar_C_GetItemName::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_Conv_TextToString_ReturnValue) == 0x000068, "Member 'WB_SearchBar_C_GetItemName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_IsValidClass_ReturnValue) == 0x000078, "Member 'WB_SearchBar_C_GetItemName::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000080, "Member 'WB_SearchBar_C_GetItemName::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_GetGameInstance_ReturnValue_1) == 0x000090, "Member 'WB_SearchBar_C_GetItemName::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_AsB_Skin_Set_Button_Data) == 0x000098, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_AsB_Skin_Set_Button_Data' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_bSuccess_2) == 0x0000A0, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x0000A8, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_bSuccess_3) == 0x0000B0, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_Conv_TextToString_ReturnValue_2) == 0x0000B8, "Member 'WB_SearchBar_C_GetItemName::CallFunc_Conv_TextToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_ReplaceCharactersExcept_ReturnValue) == 0x0000C8, "Member 'WB_SearchBar_C_GetItemName::CallFunc_ReplaceCharactersExcept_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_AsB_Skin_or_Recipe_Item_Data) == 0x0000D8, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_AsB_Skin_or_Recipe_Item_Data' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, K2Node_DynamicCast_bSuccess_4) == 0x0000E0, "Member 'WB_SearchBar_C_GetItemName::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_GetItemName, CallFunc_GetSteamItemDef_ReturnValue) == 0x0000E8, "Member 'WB_SearchBar_C_GetItemName::CallFunc_GetSteamItemDef_ReturnValue' has a wrong offset!");

// Function WB_SearchBar.WB_SearchBar_C.CheckItemSearchValidity
// 0x0038 (0x0038 - 0x0000)
struct WB_SearchBar_C_CheckItemSearchValidity final
{
public:
	class UB_TileViewData_C*                      Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemName_Item_Name;                    // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0020(0x0010)()
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SearchBar_C_CheckItemSearchValidity) == 0x000008, "Wrong alignment on WB_SearchBar_C_CheckItemSearchValidity");
static_assert(sizeof(WB_SearchBar_C_CheckItemSearchValidity) == 0x000038, "Wrong size on WB_SearchBar_C_CheckItemSearchValidity");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, Item) == 0x000000, "Member 'WB_SearchBar_C_CheckItemSearchValidity::Item' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, IsValid) == 0x000008, "Member 'WB_SearchBar_C_CheckItemSearchValidity::IsValid' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, CallFunc_GetItemName_Item_Name) == 0x000010, "Member 'WB_SearchBar_C_CheckItemSearchValidity::CallFunc_GetItemName_Item_Name' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'WB_SearchBar_C_CheckItemSearchValidity::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, CallFunc_Contains_ReturnValue) == 0x000030, "Member 'WB_SearchBar_C_CheckItemSearchValidity::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, CallFunc_TextIsEmpty_ReturnValue) == 0x000031, "Member 'WB_SearchBar_C_CheckItemSearchValidity::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_CheckItemSearchValidity, CallFunc_BooleanOR_ReturnValue) == 0x000032, "Member 'WB_SearchBar_C_CheckItemSearchValidity::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WB_SearchBar.WB_SearchBar_C.BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000010, "Wrong size on WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'WB_SearchBar_C_BndEvt__TextField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function WB_SearchBar.WB_SearchBar_C.ExecuteUbergraph_WB_SearchBar
// 0x0028 (0x0028 - 0x0000)
struct WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0010)(ConstParm)
	class UWB_CategoryMenuScreen_C*               CallFunc_FindParentWidgetOfType_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar) == 0x000008, "Wrong alignment on WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar");
static_assert(sizeof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar) == 0x000028, "Wrong size on WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar");
static_assert(offsetof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar, EntryPoint) == 0x000000, "Member 'WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar, CallFunc_FindParentWidgetOfType_ReturnValue) == 0x000018, "Member 'WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar::CallFunc_FindParentWidgetOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'WB_SearchBar_C_ExecuteUbergraph_WB_SearchBar::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

}

