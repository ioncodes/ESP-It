#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_StartoVersionInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WB_StartoVersionInfo.WB_StartoVersionInfo_C.GetText_0
// 0x0108 (0x0108 - 0x0000)
struct WB_StartoVersionInfo_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetProjectVersion_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0048)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0090(0x0010)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A0(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0010)()
};
static_assert(alignof(WB_StartoVersionInfo_C_GetText_0) == 0x000008, "Wrong alignment on WB_StartoVersionInfo_C_GetText_0");
static_assert(sizeof(WB_StartoVersionInfo_C_GetText_0) == 0x000108, "Wrong size on WB_StartoVersionInfo_C_GetText_0");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, ReturnValue) == 0x000000, "Member 'WB_StartoVersionInfo_C_GetText_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'WB_StartoVersionInfo_C_GetText_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, CallFunc_GetProjectVersion_ReturnValue) == 0x000018, "Member 'WB_StartoVersionInfo_C_GetText_0::CallFunc_GetProjectVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, K2Node_DynamicCast_AsB_Game_Instance) == 0x000028, "Member 'WB_StartoVersionInfo_C_GetText_0::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WB_StartoVersionInfo_C_GetText_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'WB_StartoVersionInfo_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WB_StartoVersionInfo_C_GetText_0::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000090, "Member 'WB_StartoVersionInfo_C_GetText_0::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'WB_StartoVersionInfo_C_GetText_0::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, K2Node_MakeArray_Array) == 0x0000E8, "Member 'WB_StartoVersionInfo_C_GetText_0::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetText_0, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'WB_StartoVersionInfo_C_GetText_0::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WB_StartoVersionInfo.WB_StartoVersionInfo_C.GetVisibility_0
// 0x0038 (0x0038 - 0x0000)
struct WB_StartoVersionInfo_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetProjectVersion_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_StartoVersionInfo_C_GetVisibility_0) == 0x000008, "Wrong alignment on WB_StartoVersionInfo_C_GetVisibility_0");
static_assert(sizeof(WB_StartoVersionInfo_C_GetVisibility_0) == 0x000038, "Wrong size on WB_StartoVersionInfo_C_GetVisibility_0");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, K2Node_DynamicCast_AsB_Game_Instance) == 0x000010, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_GetProjectVersion_ReturnValue) == 0x000020, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_GetProjectVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000031, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000032, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_BooleanOR_ReturnValue) == 0x000033, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_BooleanOR_ReturnValue_1) == 0x000034, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_StartoVersionInfo_C_GetVisibility_0, CallFunc_BooleanOR_ReturnValue_2) == 0x000035, "Member 'WB_StartoVersionInfo_C_GetVisibility_0::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

}

