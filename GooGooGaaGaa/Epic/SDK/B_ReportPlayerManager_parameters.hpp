#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ReportPlayerManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.AddPlayerReport
// 0x0050 (0x0050 - 0x0000)
struct B_ReportPlayerManager_C_AddPlayerReport final
{
public:
	class FString                                 PlayerToReportId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ReporterId;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UB_PlayerReports_C*                     CallFunc_Map_Find_Value;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_PlayerReports_C*                     CallFunc_CreateObject_Object;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_PlayerReports_C*                     CallFunc_Map_Find_Value_1;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_AddPlayerReport) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_AddPlayerReport");
static_assert(sizeof(B_ReportPlayerManager_C_AddPlayerReport) == 0x000050, "Wrong size on B_ReportPlayerManager_C_AddPlayerReport");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, PlayerToReportId) == 0x000000, "Member 'B_ReportPlayerManager_C_AddPlayerReport::PlayerToReportId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, ReporterId) == 0x000010, "Member 'B_ReportPlayerManager_C_AddPlayerReport::ReporterId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Map_Find_Value) == 0x000020, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Map_Find_ReturnValue) == 0x000028, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_CreateObject_Object) == 0x000030, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_CreateObject_Object' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Map_Find_Value_1) == 0x000040, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Map_Find_ReturnValue_1) == 0x000048, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Map_Contains_ReturnValue) == 0x000049, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_AddPlayerReport, CallFunc_Array_Add_ReturnValue_1) == 0x00004C, "Member 'B_ReportPlayerManager_C_AddPlayerReport::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.CanReporterReport
// 0x0038 (0x0038 - 0x0000)
struct B_ReportPlayerManager_C_CanReporterReport final
{
public:
	class FString                                 PlayerToReportId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 ReporterId;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CanReport;                                         // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_PlayerReports_C*                     CallFunc_Map_Find_Value;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_CanReporterReport) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_CanReporterReport");
static_assert(sizeof(B_ReportPlayerManager_C_CanReporterReport) == 0x000038, "Wrong size on B_ReportPlayerManager_C_CanReporterReport");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, PlayerToReportId) == 0x000000, "Member 'B_ReportPlayerManager_C_CanReporterReport::PlayerToReportId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, ReporterId) == 0x000010, "Member 'B_ReportPlayerManager_C_CanReporterReport::ReporterId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CanReport) == 0x000020, "Member 'B_ReportPlayerManager_C_CanReporterReport::CanReport' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CallFunc_Map_Find_Value) == 0x000028, "Member 'B_ReportPlayerManager_C_CanReporterReport::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'B_ReportPlayerManager_C_CanReporterReport::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CallFunc_Map_Contains_ReturnValue) == 0x000031, "Member 'B_ReportPlayerManager_C_CanReporterReport::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CallFunc_Array_Contains_ReturnValue) == 0x000032, "Member 'B_ReportPlayerManager_C_CanReporterReport::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_CanReporterReport, CallFunc_Not_PreBool_ReturnValue) == 0x000033, "Member 'B_ReportPlayerManager_C_CanReporterReport::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.ExecuteUbergraph_B_ReportPlayerManager
// 0x0178 (0x0178 - 0x0000)
struct B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_DownloadedString_1;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QueryId_1;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& DownloadedString, int32 QueryID)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_DownloadedString;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QueryId;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& DownloadedString, int32 QueryID)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                           K2Node_CustomEvent_PlayerToReport;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Reason;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_CustomEvent_Reporter;                       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId_1; // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReporterReport_CanReport;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDownloadStringCallbackProxy*           CallFunc_UploadString_ReturnValue;                 // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager");
static_assert(sizeof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager) == 0x000178, "Wrong size on B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, EntryPoint) == 0x000000, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_DownloadedString_1) == 0x000008, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_DownloadedString_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_QueryId_1) == 0x000018, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_QueryId_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_DownloadedString) == 0x000030, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_DownloadedString' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_QueryId) == 0x000040, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_QueryId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, Temp_int_Variable) == 0x000054, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, Temp_string_Variable) == 0x000058, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_PlayerToReport) == 0x000068, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_PlayerToReport' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_Reason) == 0x000070, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_Reason' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_CustomEvent_Reporter) == 0x000078, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_CustomEvent_Reporter' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId) == 0x000080, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_DynamicCast_AsB_Game_Instance) == 0x000090, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Conv_IntToString_ReturnValue) == 0x0000A0, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId_1) == 0x0000B0, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_GetNativePlatformAccountIdFromPlayerState_PlatformId_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C0, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D0, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_CanReporterReport_CanReport) == 0x0000E0, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_CanReporterReport_CanReport' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E8, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F8, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000108, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000118, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000128, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000138, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000148, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_Concat_StrStr_ReturnValue_9) == 0x000158, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_UploadString_ReturnValue) == 0x000168, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_UploadString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.OnFailure_CA756CEE40EA230D71CCEA881C25CCBD
// 0x0018 (0x0018 - 0x0000)
struct B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD final
{
public:
	class FString                                 DownloadedString;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         QueryID;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD");
static_assert(sizeof(B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD) == 0x000018, "Wrong size on B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD");
static_assert(offsetof(B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD, DownloadedString) == 0x000000, "Member 'B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD::DownloadedString' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD, QueryID) == 0x000010, "Member 'B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD::QueryID' has a wrong offset!");

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD
// 0x0018 (0x0018 - 0x0000)
struct B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD final
{
public:
	class FString                                 DownloadedString;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         QueryID;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD");
static_assert(sizeof(B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD) == 0x000018, "Wrong size on B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD");
static_assert(offsetof(B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD, DownloadedString) == 0x000000, "Member 'B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD::DownloadedString' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD, QueryID) == 0x000010, "Member 'B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD::QueryID' has a wrong offset!");

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.ReportPlayer
// 0x0018 (0x0018 - 0x0000)
struct B_ReportPlayerManager_C_ReportPlayer final
{
public:
	class APlayerState*                           PlayerToReport;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Reason;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           Reporter;                                          // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_ReportPlayerManager_C_ReportPlayer) == 0x000008, "Wrong alignment on B_ReportPlayerManager_C_ReportPlayer");
static_assert(sizeof(B_ReportPlayerManager_C_ReportPlayer) == 0x000018, "Wrong size on B_ReportPlayerManager_C_ReportPlayer");
static_assert(offsetof(B_ReportPlayerManager_C_ReportPlayer, PlayerToReport) == 0x000000, "Member 'B_ReportPlayerManager_C_ReportPlayer::PlayerToReport' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ReportPlayer, Reason) == 0x000008, "Member 'B_ReportPlayerManager_C_ReportPlayer::Reason' has a wrong offset!");
static_assert(offsetof(B_ReportPlayerManager_C_ReportPlayer, Reporter) == 0x000010, "Member 'B_ReportPlayerManager_C_ReportPlayer::Reporter' has a wrong offset!");

}

