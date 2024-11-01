#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServerListBase

#include "Basic.hpp"

#include "OnlineSubsystemBlueprints_structs.hpp"
#include "AdvancedSessions_structs.hpp"
#include "Engine_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"


namespace SDK::Params
{

// Function WB_ServerListBase.WB_ServerListBase_C.AddServerRowEOS
// 0x0440 (0x0440 - 0x0000)
struct WB_ServerListBase_C_AddServerRowEOS final
{
public:
	struct FOnlineSessionSearchResultBP           SearchResult;                                      // 0x0000(0x01B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsCustom;                                          // 0x01B8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UserGeneratedContent;                              // 0x01B9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BA[0x6];                                      // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ServerRow_C*                        ServerWidget;                                      // 0x01C0(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FOnlineSessionSettingBP> ExtraSettings;                                     // 0x01C8(0x0050)(Edit, BlueprintVisible)
	struct FOnlineSessionSearchResultBP           BlueprintSearchResult;                             // 0x0218(0x01B8)(Edit, BlueprintVisible)
	TMap<class FName, struct FOnlineSessionSettingBP> CallFunc_GetExtraSessionSettings_ExtraSettings;    // 0x03D0(0x0050)()
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0420(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_421[0x3];                                      // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0424(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWB_ServerRow_C*                        CallFunc_Create_ReturnValue;                       // 0x0430(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServerListBase_C_AddServerRowEOS) == 0x000008, "Wrong alignment on WB_ServerListBase_C_AddServerRowEOS");
static_assert(sizeof(WB_ServerListBase_C_AddServerRowEOS) == 0x000440, "Wrong size on WB_ServerListBase_C_AddServerRowEOS");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, SearchResult) == 0x000000, "Member 'WB_ServerListBase_C_AddServerRowEOS::SearchResult' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, IsCustom) == 0x0001B8, "Member 'WB_ServerListBase_C_AddServerRowEOS::IsCustom' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, UserGeneratedContent) == 0x0001B9, "Member 'WB_ServerListBase_C_AddServerRowEOS::UserGeneratedContent' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, ServerWidget) == 0x0001C0, "Member 'WB_ServerListBase_C_AddServerRowEOS::ServerWidget' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, ExtraSettings) == 0x0001C8, "Member 'WB_ServerListBase_C_AddServerRowEOS::ExtraSettings' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, BlueprintSearchResult) == 0x000218, "Member 'WB_ServerListBase_C_AddServerRowEOS::BlueprintSearchResult' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_GetExtraSessionSettings_ExtraSettings) == 0x0003D0, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_GetExtraSessionSettings_ExtraSettings' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_Array_Contains_ReturnValue) == 0x000420, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_Array_Add_ReturnValue) == 0x000424, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_GetOwningPlayer_ReturnValue) == 0x000428, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_Create_ReturnValue) == 0x000430, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_AddServerRowEOS, CallFunc_Array_Add_ReturnValue_1) == 0x000438, "Member 'WB_ServerListBase_C_AddServerRowEOS::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function WB_ServerListBase.WB_ServerListBase_C.HandleServersFoundEOS
// 0x0328 (0x0328 - 0x0000)
struct WB_ServerListBase_C_HandleServersFoundEOS final
{
public:
	TArray<struct FOnlineSessionSearchResultBP>   Servers;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSessionPropertyKeyPair>        CurrentExtraSettings;                              // 0x0010(0x0010)(Edit, BlueprintVisible)
	struct FBlueprintSessionResult                CurrentServer;                                     // 0x0020(0x0120)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSessionUsageAllowed_bIsAllowed;         // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOnlineSessionSearchResultBP           CallFunc_Array_Get_Item;                           // 0x0150(0x01B8)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ServerRow_C*                        CallFunc_HandleServerFoundEOS_ServerWidget;        // 0x0310(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServerListBase_C_HandleServersFoundEOS) == 0x000008, "Wrong alignment on WB_ServerListBase_C_HandleServersFoundEOS");
static_assert(sizeof(WB_ServerListBase_C_HandleServersFoundEOS) == 0x000328, "Wrong size on WB_ServerListBase_C_HandleServersFoundEOS");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, Servers) == 0x000000, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::Servers' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CurrentExtraSettings) == 0x000010, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CurrentExtraSettings' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CurrentServer) == 0x000020, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CurrentServer' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, Temp_int_Array_Index_Variable) == 0x000144, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Greater_IntInt_ReturnValue) == 0x000148, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_IsSessionUsageAllowed_bIsAllowed) == 0x000149, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_IsSessionUsageAllowed_bIsAllowed' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Array_Get_Item) == 0x000150, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Array_Length_ReturnValue_1) == 0x000308, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_HandleServerFoundEOS_ServerWidget) == 0x000310, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_HandleServerFoundEOS_ServerWidget' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, Temp_int_Loop_Counter_Variable) == 0x000318, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Less_IntInt_ReturnValue) == 0x00031C, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServersFoundEOS, CallFunc_Add_IntInt_ReturnValue) == 0x000320, "Member 'WB_ServerListBase_C_HandleServersFoundEOS::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WB_ServerListBase.WB_ServerListBase_C.HandleServerFoundEOS
// 0x0488 (0x0488 - 0x0000)
struct WB_ServerListBase_C_HandleServerFoundEOS final
{
public:
	struct FOnlineSessionSearchResultBP           CurrentServer;                                     // 0x0000(0x01B8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWB_ServerRow_C*                        ServerWidget;                                      // 0x01B8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          UserGeneratedContent;                              // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, struct FOnlineSessionSettingBP> CurrentExtraSessings;                              // 0x01C8(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, struct FOnlineSessionSettingBP> CallFunc_GetExtraSessionSettings_ExtraSettings;    // 0x0218(0x0050)()
	class FName                                   Temp_name_Variable;                                // 0x0268(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SwitchPlatform_ReturnValue;               // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x0274(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FOnlineSessionSettingBP                CallFunc_Map_Find_Value;                           // 0x0288(0x0030)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettingValue_As_Bool;           // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CA[0x2];                                      // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettingValue_As_Int;            // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSessionSettingValue_As_Float;          // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetSessionSettingValue_As_Int_64;         // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSessionSettingValue_As_String;         // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCanCommunicateOnline_CanCommunicate;   // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F3[0x5];                                      // 0x02F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSessionDedicatedServer_Is_Dedicated;    // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetControllerUniqueNetId_ReturnValue;     // 0x0308(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue; // 0x0340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0350(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSessionDedicatedServer_Is_Dedicated_1;  // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A[0x6];                                      // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOnlineSessionSettingBP                CallFunc_Map_Find_Value_1;                         // 0x0360(0x0030)()
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOnlineSessionSettingBP                CallFunc_Map_Find_Value_2;                         // 0x0398(0x0030)()
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettingValue_As_Bool_1;         // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA[0x2];                                      // 0x03CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettingValue_As_Int_1;          // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSessionSettingValue_As_Float_1;        // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetSessionSettingValue_As_Int_64_1;       // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSessionSettingValue_As_String_1;       // 0x03E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSessionSettingValue_As_Bool_2;         // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSessionSettingValue_As_Int_2;          // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSessionSettingValue_As_Float_2;        // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FC[0x4];                                      // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetSessionSettingValue_As_Int_64_2;       // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSessionSettingValue_As_String_2;       // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_ServerRow_C*                        CallFunc_AddServerRowEOS_ServerWidget;             // 0x0420(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UOnlineSessionSubsystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful; // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo; // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_LeftS;                              // 0x0448(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Split_RightS;                             // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Split_ReturnValue;                        // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0469(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A[0x6];                                      // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetProjectVersion_ReturnValue;            // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0481(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WB_ServerListBase_C_HandleServerFoundEOS) == 0x000008, "Wrong alignment on WB_ServerListBase_C_HandleServerFoundEOS");
static_assert(sizeof(WB_ServerListBase_C_HandleServerFoundEOS) == 0x000488, "Wrong size on WB_ServerListBase_C_HandleServerFoundEOS");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CurrentServer) == 0x000000, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CurrentServer' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, ServerWidget) == 0x0001B8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::ServerWidget' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, UserGeneratedContent) == 0x0001C0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::UserGeneratedContent' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CurrentExtraSessings) == 0x0001C8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CurrentExtraSessings' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetExtraSessionSettings_ExtraSettings) == 0x000218, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetExtraSessionSettings_ExtraSettings' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, Temp_name_Variable) == 0x000268, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_SwitchPlatform_ReturnValue) == 0x000270, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_SwitchPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, Temp_name_Variable_1) == 0x000274, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetGameInstance_ReturnValue) == 0x000280, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_Value) == 0x000288, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_ReturnValue) == 0x0002B8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, K2Node_DynamicCast_AsB_Game_Instance) == 0x0002C0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, K2Node_DynamicCast_bSuccess) == 0x0002C8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Bool) == 0x0002C9, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Bool' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int) == 0x0002CC, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Float) == 0x0002D0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Float' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int_64) == 0x0002D8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int_64' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_String) == 0x0002E0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_String' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetCanCommunicateOnline_CanCommunicate) == 0x0002F0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetCanCommunicateOnline_CanCommunicate' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Contains_ReturnValue) == 0x0002F1, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Not_PreBool_ReturnValue) == 0x0002F2, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002F8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_IsSessionDedicatedServer_Is_Dedicated) == 0x000300, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_IsSessionDedicatedServer_Is_Dedicated' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetControllerUniqueNetId_ReturnValue) == 0x000308, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetControllerUniqueNetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Not_PreBool_ReturnValue_1) == 0x000338, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue) == 0x000340, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Conv_FUniqueNetIdReplToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, Temp_name_Variable_2) == 0x000350, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_IsSessionDedicatedServer_Is_Dedicated_1) == 0x000358, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_IsSessionDedicatedServer_Is_Dedicated_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Not_PreBool_ReturnValue_2) == 0x000359, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_Value_1) == 0x000360, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_ReturnValue_1) == 0x000390, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_Value_2) == 0x000398, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Map_Find_ReturnValue_2) == 0x0003C8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Bool_1) == 0x0003C9, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Bool_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int_1) == 0x0003CC, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Float_1) == 0x0003D0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Float_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int_64_1) == 0x0003D8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int_64_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_String_1) == 0x0003E0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_String_1' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Bool_2) == 0x0003F0, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Bool_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int_2) == 0x0003F4, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Float_2) == 0x0003F8, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Float_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_Int_64_2) == 0x000400, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_Int_64_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetSessionSettingValue_As_String_2) == 0x000408, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetSessionSettingValue_As_String_2' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_BooleanAND_ReturnValue) == 0x000418, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_AddServerRowEOS_ServerWidget) == 0x000420, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_AddServerRowEOS_ServerWidget' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000428, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful) == 0x000430, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetResolvedConnectStringBySearchResult_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo) == 0x000438, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetResolvedConnectStringBySearchResult_OutConnectInfo' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Split_LeftS) == 0x000448, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Split_LeftS' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Split_RightS) == 0x000458, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Split_RightS' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Split_ReturnValue) == 0x000468, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Split_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000469, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_GetProjectVersion_ReturnValue) == 0x000470, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_GetProjectVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000480, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerListBase_C_HandleServerFoundEOS, CallFunc_Not_PreBool_ReturnValue_3) == 0x000481, "Member 'WB_ServerListBase_C_HandleServerFoundEOS::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");

}

