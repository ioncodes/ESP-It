#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CameraScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ETeamID_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_CameraScreen.WB_CameraScreen_C.CloseScreen
// 0x0090 (0x0090 - 0x0000)
struct WB_CameraScreen_C_CloseScreen final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E53[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E54[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E55[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ImpostorHUD_C*                      K2Node_DynamicCast_AsWB_Impostor_HUD;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E56[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AB_HunterSkinedMesh_C*>          CallFunc_GetAllActorsOfClass_OutActors;            // 0x0048(0x0010)(ReferenceParm)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E57[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_HunterSkinedMesh_C*                  CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CameraScreen_C_CloseScreen) == 0x000008, "Wrong alignment on WB_CameraScreen_C_CloseScreen");
static_assert(sizeof(WB_CameraScreen_C_CloseScreen) == 0x000090, "Wrong size on WB_CameraScreen_C_CloseScreen");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WB_CameraScreen_C_CloseScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WB_CameraScreen_C_CloseScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_AsWB_Impostor_HUD) == 0x000028, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_AsWB_Impostor_HUD' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_GetGameInstance_ReturnValue_1) == 0x000040, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_GetAllActorsOfClass_OutActors) == 0x000048, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000058, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WB_CameraScreen_C_CloseScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_GetGameInstance_ReturnValue_2) == 0x000068, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000070, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_K2_GetPawn_ReturnValue) == 0x000078, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_Array_Get_Item) == 0x000080, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_CloseScreen, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'WB_CameraScreen_C_CloseScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WB_CameraScreen.WB_CameraScreen_C.ExecuteUbergraph_WB_CameraScreen
// 0x0080 (0x0080 - 0x0000)
struct WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E58[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E59[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorGameState_C*                 K2Node_DynamicCast_AsB_Impostor_Game_State;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5A[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_1;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsScreenOpen_IsOpen;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5B[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance_2;            // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen) == 0x000008, "Wrong alignment on WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen");
static_assert(sizeof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen) == 0x000080, "Wrong size on WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, EntryPoint) == 0x000000, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_AsB_Impostor_Game_State) == 0x000038, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_AsB_Impostor_Game_State' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000041, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_GetGameInstance_ReturnValue_1) == 0x000048, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_AsB_Game_Instance_1) == 0x000050, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_AsB_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_IsScreenOpen_IsOpen) == 0x000059, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_IsScreenOpen_IsOpen' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, CallFunc_GetGameInstance_ReturnValue_2) == 0x000068, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_AsB_Game_Instance_2) == 0x000070, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_AsB_Game_Instance_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen, K2Node_DynamicCast_bSuccess_3) == 0x000078, "Member 'WB_CameraScreen_C_ExecuteUbergraph_WB_CameraScreen::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function WB_CameraScreen.WB_CameraScreen_C.Get_Title_Text_0
// 0x0198 (0x0198 - 0x0000)
struct WB_CameraScreen_C_Get_Title_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0140(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5D[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetFirstLocalPlayerController_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_ImpostorPlayerState_C*               K2Node_DynamicCast_AsB_Impostor_Player_State;      // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E5E[0x6];                                     // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0180(0x0018)()
};
static_assert(alignof(WB_CameraScreen_C_Get_Title_Text_0) == 0x000008, "Wrong alignment on WB_CameraScreen_C_Get_Title_Text_0");
static_assert(sizeof(WB_CameraScreen_C_Get_Title_Text_0) == 0x000198, "Wrong size on WB_CameraScreen_C_Get_Title_Text_0");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, ReturnValue) == 0x000000, "Member 'WB_CameraScreen_C_Get_Title_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, Temp_bool_Variable) == 0x000018, "Member 'WB_CameraScreen_C_Get_Title_Text_0::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, Temp_text_Variable) == 0x000020, "Member 'WB_CameraScreen_C_Get_Title_Text_0::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000038, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_GetPlayerName_ReturnValue) == 0x000090, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_MakeArray_Array_1) == 0x000130, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_Format_ReturnValue_1) == 0x000140, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_GetGameInstance_ReturnValue) == 0x000160, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, CallFunc_GetFirstLocalPlayerController_ReturnValue) == 0x000168, "Member 'WB_CameraScreen_C_Get_Title_Text_0::CallFunc_GetFirstLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_DynamicCast_AsB_Impostor_Player_State) == 0x000170, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_DynamicCast_AsB_Impostor_Player_State' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_SwitchEnum_CmpSuccess) == 0x000179, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Text_0, K2Node_Select_Default) == 0x000180, "Member 'WB_CameraScreen_C_Get_Title_Text_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_CameraScreen.WB_CameraScreen_C.Get_Title_Visibility_0
// 0x0006 (0x0006 - 0x0000)
struct WB_CameraScreen_C_Get_Title_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamID                                       Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CameraScreen_C_Get_Title_Visibility_0) == 0x000001, "Wrong alignment on WB_CameraScreen_C_Get_Title_Visibility_0");
static_assert(sizeof(WB_CameraScreen_C_Get_Title_Visibility_0) == 0x000006, "Wrong size on WB_CameraScreen_C_Get_Title_Visibility_0");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, ReturnValue) == 0x000000, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, Temp_byte_Variable) == 0x000001, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, Temp_byte_Variable_1) == 0x000002, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, Temp_byte_Variable_2) == 0x000003, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, Temp_byte_Variable_3) == 0x000004, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_Get_Title_Visibility_0, K2Node_Select_Default) == 0x000005, "Member 'WB_CameraScreen_C_Get_Title_Visibility_0::K2Node_Select_Default' has a wrong offset!");

// Function WB_CameraScreen.WB_CameraScreen_C.StartVoteOutSequence
// 0x0030 (0x0030 - 0x0000)
struct WB_CameraScreen_C_StartVoteOutSequence final
{
public:
	class AB_VoteOutSequence_C*                   VoteOutSequence;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AB_VoteOutSequence_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class AB_VoteOutSequence_C*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_CameraScreen_C_StartVoteOutSequence) == 0x000008, "Wrong alignment on WB_CameraScreen_C_StartVoteOutSequence");
static_assert(sizeof(WB_CameraScreen_C_StartVoteOutSequence) == 0x000030, "Wrong size on WB_CameraScreen_C_StartVoteOutSequence");
static_assert(offsetof(WB_CameraScreen_C_StartVoteOutSequence, VoteOutSequence) == 0x000000, "Member 'WB_CameraScreen_C_StartVoteOutSequence::VoteOutSequence' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_StartVoteOutSequence, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WB_CameraScreen_C_StartVoteOutSequence::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_StartVoteOutSequence, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'WB_CameraScreen_C_StartVoteOutSequence::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WB_CameraScreen_C_StartVoteOutSequence, CallFunc_Array_Get_Item) == 0x000028, "Member 'WB_CameraScreen_C_StartVoteOutSequence::CallFunc_Array_Get_Item' has a wrong offset!");

}
