#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ItemSetList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "S_ItemInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_ItemSetList.WB_ItemSetList_C.Get_SetNameField_ColorAndOpacity_0
// 0x00E8 (0x00E8 - 0x0000)
struct WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0 final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemInfo                            CallFunc_GetSkinItem_ReturnValue;                  // 0x0030(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetSkinItem_Found;                        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRarityInfo_Name;                       // 0x00B0(0x0010)()
	struct FLinearColor                           CallFunc_GetRarityInfo_Color;                      // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D0(0x0014)()
};
static_assert(alignof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0) == 0x000008, "Wrong alignment on WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0");
static_assert(sizeof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0) == 0x0000E8, "Wrong size on WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_GetGameInstance_ReturnValue) == 0x000018, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, K2Node_DynamicCast_AsB_Game_Instance) == 0x000020, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_Array_Get_Item) == 0x00002C, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_GetSkinItem_ReturnValue) == 0x000030, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_GetSkinItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_GetSkinItem_Found) == 0x0000A8, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_GetSkinItem_Found' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_GetRarityInfo_Name) == 0x0000B0, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_GetRarityInfo_Name' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, CallFunc_GetRarityInfo_Color) == 0x0000C0, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::CallFunc_GetRarityInfo_Color' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0, K2Node_MakeStruct_SlateColor) == 0x0000D0, "Member 'WB_ItemSetList_C_Get_SetNameField_ColorAndOpacity_0::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WB_ItemSetList.WB_ItemSetList_C.ItemSetListVisibility
// 0x0020 (0x0020 - 0x0000)
struct WB_ItemSetList_C_ItemSetListVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        CallFunc_GetListItems_ReturnValue;                 // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemSetList_C_ItemSetListVisibility) == 0x000008, "Wrong alignment on WB_ItemSetList_C_ItemSetListVisibility");
static_assert(sizeof(WB_ItemSetList_C_ItemSetListVisibility) == 0x000020, "Wrong size on WB_ItemSetList_C_ItemSetListVisibility");
static_assert(offsetof(WB_ItemSetList_C_ItemSetListVisibility, ReturnValue) == 0x000000, "Member 'WB_ItemSetList_C_ItemSetListVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_ItemSetListVisibility, CallFunc_GetListItems_ReturnValue) == 0x000008, "Member 'WB_ItemSetList_C_ItemSetListVisibility::CallFunc_GetListItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_ItemSetListVisibility, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WB_ItemSetList_C_ItemSetListVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_ItemSetListVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'WB_ItemSetList_C_ItemSetListVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WB_ItemSetList.WB_ItemSetList_C.UpdateSetList
// 0x00D8 (0x00D8 - 0x0000)
struct WB_ItemSetList_C_UpdateSetList final
{
public:
	class FText                                   SetName_0;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 SortedIds;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_ItemInfo                            CallFunc_GetSkinItem_ReturnValue;                  // 0x0050(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetSkinItem_Found;                        // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_SkinOrRecipeItemData_C*              CallFunc_GetSkinOrRecipeData_Data;                 // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemSetList_C_UpdateSetList) == 0x000008, "Wrong alignment on WB_ItemSetList_C_UpdateSetList");
static_assert(sizeof(WB_ItemSetList_C_UpdateSetList) == 0x0000D8, "Wrong size on WB_ItemSetList_C_UpdateSetList");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, SetName_0) == 0x000000, "Member 'WB_ItemSetList_C_UpdateSetList::SetName_0' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, SortedIds) == 0x000010, "Member 'WB_ItemSetList_C_UpdateSetList::SortedIds' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WB_ItemSetList_C_UpdateSetList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WB_ItemSetList_C_UpdateSetList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_GetGameInstance_ReturnValue) == 0x000030, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, K2Node_DynamicCast_AsB_Game_Instance) == 0x000038, "Member 'WB_ItemSetList_C_UpdateSetList::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WB_ItemSetList_C_UpdateSetList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_Array_Get_Item) == 0x000044, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_GetSkinItem_ReturnValue) == 0x000050, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_GetSkinItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_GetSkinItem_Found) == 0x0000C8, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_GetSkinItem_Found' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_Less_IntInt_ReturnValue) == 0x0000C9, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_UpdateSetList, CallFunc_GetSkinOrRecipeData_Data) == 0x0000D0, "Member 'WB_ItemSetList_C_UpdateSetList::CallFunc_GetSkinOrRecipeData_Data' has a wrong offset!");

// Function WB_ItemSetList.WB_ItemSetList_C.ExecuteUbergraph_WB_ItemSetList
// 0x0010 (0x0010 - 0x0000)
struct WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_MenuTileViewManager_C*               CallFunc_CreateObject_Object;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList) == 0x000008, "Wrong alignment on WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList");
static_assert(sizeof(WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList) == 0x000010, "Wrong size on WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList");
static_assert(offsetof(WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList, EntryPoint) == 0x000000, "Member 'WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList, CallFunc_CreateObject_Object) == 0x000008, "Member 'WB_ItemSetList_C_ExecuteUbergraph_WB_ItemSetList::CallFunc_CreateObject_Object' has a wrong offset!");

}
