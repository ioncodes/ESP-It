#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GroupPreviewInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WB_GroupPreviewInfo.WB_GroupPreviewInfo_C.UpdateContentAndVisibility
// 0x0058 (0x0058 - 0x0000)
struct WB_GroupPreviewInfo_C_UpdateContentAndVisibility final
{
public:
	TArray<class AActor*>                         TargetArray;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_String__CombineStrings_Multi_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0010)()
};
static_assert(alignof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility) == 0x000008, "Wrong alignment on WB_GroupPreviewInfo_C_UpdateContentAndVisibility");
static_assert(sizeof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility) == 0x000058, "Wrong size on WB_GroupPreviewInfo_C_UpdateContentAndVisibility");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, TargetArray) == 0x000000, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::TargetArray' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Array_Get_Item) == 0x000018, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_String__CombineStrings_Multi_ReturnValue) == 0x000038, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_String__CombineStrings_Multi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateContentAndVisibility, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'WB_GroupPreviewInfo_C_UpdateContentAndVisibility::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WB_GroupPreviewInfo.WB_GroupPreviewInfo_C.UpdateVisibilityOnGroupAmountChanged
// 0x0010 (0x0010 - 0x0000)
struct WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged final
{
public:
	class AActor*                                 AddedOrRemovedActor;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          WasAdded;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged) == 0x000008, "Wrong alignment on WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged");
static_assert(sizeof(WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged) == 0x000010, "Wrong size on WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged, AddedOrRemovedActor) == 0x000000, "Member 'WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged::AddedOrRemovedActor' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged, WasAdded) == 0x000008, "Member 'WB_GroupPreviewInfo_C_UpdateVisibilityOnGroupAmountChanged::WasAdded' has a wrong offset!");

// Function WB_GroupPreviewInfo.WB_GroupPreviewInfo_C.ExecuteUbergraph_WB_GroupPreviewInfo
// 0x0048 (0x0048 - 0x0000)
struct WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* AddedOrRemovedActor, bool WasAdded)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_AddedOrRemovedActor;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_WasAdded;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_CreativePlayerController_C*          K2Node_DynamicCast_AsB_Creative_Player_Controller; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo) == 0x000008, "Wrong alignment on WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo");
static_assert(sizeof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo) == 0x000048, "Wrong size on WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, EntryPoint) == 0x000000, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, Temp_bool_Variable) == 0x000004, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, Temp_byte_Variable) == 0x000018, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, Temp_byte_Variable_1) == 0x000019, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_CustomEvent_AddedOrRemovedActor) == 0x000028, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_CustomEvent_AddedOrRemovedActor' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_CustomEvent_WasAdded) == 0x000030, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_CustomEvent_WasAdded' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_DynamicCast_AsB_Creative_Player_Controller) == 0x000038, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_DynamicCast_AsB_Creative_Player_Controller' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo, K2Node_Select_Default) == 0x000041, "Member 'WB_GroupPreviewInfo_C_ExecuteUbergraph_WB_GroupPreviewInfo::K2Node_Select_Default' has a wrong offset!");

}

