#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SelectLayouts

#include "Basic.hpp"

#include "S_PropLayoutData_structs.hpp"
#include "SMapData_structs.hpp"


namespace SDK::Params
{

// Function WB_SelectLayouts.WB_SelectLayouts_C.AddLayouts
// 0x0108 (0x0108 - 0x0000)
struct WB_SelectLayouts_C_AddLayouts final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FS_PropLayoutData                      CurrentPropLayout;                                 // 0x0010(0x0048)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_PropLayoutData>              PropLayouts;                                       // 0x0058(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PropLayoutData                      CallFunc_Array_Get_Item;                           // 0x0088(0x0048)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_PropLayoutData>              CallFunc_GetAllCustomMapsOrByLevelNameFromSave_Layouts; // 0x00D0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_SelectLayoutEntry_C*                CallFunc_Create_ReturnValue;                       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SelectLayouts_C_AddLayouts) == 0x000008, "Wrong alignment on WB_SelectLayouts_C_AddLayouts");
static_assert(sizeof(WB_SelectLayouts_C_AddLayouts) == 0x000108, "Wrong size on WB_SelectLayouts_C_AddLayouts");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, LevelName) == 0x000000, "Member 'WB_SelectLayouts_C_AddLayouts::LevelName' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CurrentPropLayout) == 0x000010, "Member 'WB_SelectLayouts_C_AddLayouts::CurrentPropLayout' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, PropLayouts) == 0x000058, "Member 'WB_SelectLayouts_C_AddLayouts::PropLayouts' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, Temp_int_Array_Index_Variable) == 0x000068, "Member 'WB_SelectLayouts_C_AddLayouts::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_GetGameInstance_ReturnValue) == 0x000070, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, K2Node_DynamicCast_AsB_Game_Instance) == 0x000078, "Member 'WB_SelectLayouts_C_AddLayouts::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WB_SelectLayouts_C_AddLayouts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_Array_Get_Item) == 0x000088, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_GetAllCustomMapsOrByLevelNameFromSave_Layouts) == 0x0000D0, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_GetAllCustomMapsOrByLevelNameFromSave_Layouts' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, Temp_int_Loop_Counter_Variable) == 0x0000E4, "Member 'WB_SelectLayouts_C_AddLayouts::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_Add_IntInt_ReturnValue) == 0x0000EC, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000F0, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_Create_ReturnValue) == 0x0000F8, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_AddLayouts, CallFunc_AddChild_ReturnValue) == 0x000100, "Member 'WB_SelectLayouts_C_AddLayouts::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WB_SelectLayouts.WB_SelectLayouts_C.ExecuteUbergraph_WB_SelectLayouts
// 0x0038 (0x0038 - 0x0000)
struct WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts final
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
};
static_assert(alignof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts) == 0x000008, "Wrong alignment on WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts");
static_assert(sizeof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts) == 0x000038, "Wrong size on WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, EntryPoint) == 0x000000, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, CallFunc_GetGameInstance_ReturnValue_1) == 0x000010, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, K2Node_DynamicCast_AsB_Game_Instance) == 0x000018, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000028, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts, CallFunc_MakeLiteralByte_ReturnValue) == 0x000031, "Member 'WB_SelectLayouts_C_ExecuteUbergraph_WB_SelectLayouts::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

// Function WB_SelectLayouts.WB_SelectLayouts_C.RefreshLayoutList
// 0x0190 (0x0190 - 0x0000)
struct WB_SelectLayouts_C_RefreshLayoutList final
{
public:
	TArray<struct FSMapData>                      QuickmatchMaps;                                    // 0x0000(0x0010)(Edit, BlueprintVisible)
	struct FS_PropLayoutData                      CurrentPropLayout;                                 // 0x0010(0x0048)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_PropLayoutData>              PropLayouts;                                       // 0x0058(0x0010)(Edit, BlueprintVisible)
	class FString                                 LevelName;                                         // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_2;            // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSMapData>                      CallFunc_GetAllQuickmatchMaps_QuickmatchMaps;      // 0x00C8(0x0010)(ReferenceParm)
	class FString                                 Temp_string_Variable;                              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_3;            // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_3;            // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FB[0x5];                                       // 0x00FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLevelNameFromFileName_MapName;         // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSMapData                              CallFunc_Array_Get_Item;                           // 0x0138(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLevelNameFromFileName_MapName_1;       // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_SelectLayouts_C_RefreshLayoutList) == 0x000008, "Wrong alignment on WB_SelectLayouts_C_RefreshLayoutList");
static_assert(sizeof(WB_SelectLayouts_C_RefreshLayoutList) == 0x000190, "Wrong size on WB_SelectLayouts_C_RefreshLayoutList");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, QuickmatchMaps) == 0x000000, "Member 'WB_SelectLayouts_C_RefreshLayoutList::QuickmatchMaps' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CurrentPropLayout) == 0x000010, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CurrentPropLayout' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, PropLayouts) == 0x000058, "Member 'WB_SelectLayouts_C_RefreshLayoutList::PropLayouts' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, LevelName) == 0x000068, "Member 'WB_SelectLayouts_C_RefreshLayoutList::LevelName' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, Temp_int_Array_Index_Variable) == 0x000078, "Member 'WB_SelectLayouts_C_RefreshLayoutList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetGameInstance_ReturnValue) == 0x000080, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_AsB_Game_Instance) == 0x000088, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetGameInstance_ReturnValue_1) == 0x000098, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x0000A0, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetGameInstance_ReturnValue_2) == 0x0000B0, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_AsB_Game_Instance_2) == 0x0000B8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_AsB_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetAllQuickmatchMaps_QuickmatchMaps) == 0x0000C8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetAllQuickmatchMaps_QuickmatchMaps' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, Temp_string_Variable) == 0x0000D8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetGameInstance_ReturnValue_3) == 0x0000E8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetGameInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_AsB_Game_Instance_3) == 0x0000F0, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_AsB_Game_Instance_3' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, Temp_bool_Variable) == 0x0000F9, "Member 'WB_SelectLayouts_C_RefreshLayoutList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000FA, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetLevelNameFromFileName_MapName) == 0x000100, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetLevelNameFromFileName_MapName' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000110, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, K2Node_Select_Default) == 0x000118, "Member 'WB_SelectLayouts_C_RefreshLayoutList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, Temp_int_Loop_Counter_Variable) == 0x000128, "Member 'WB_SelectLayouts_C_RefreshLayoutList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_Add_IntInt_ReturnValue) == 0x00012C, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_Array_Length_ReturnValue) == 0x000130, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_Array_Get_Item) == 0x000138, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_SelectLayouts_C_RefreshLayoutList, CallFunc_GetLevelNameFromFileName_MapName_1) == 0x000180, "Member 'WB_SelectLayouts_C_RefreshLayoutList::CallFunc_GetLevelNameFromFileName_MapName_1' has a wrong offset!");

}

