#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_VersionManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function B_VersionManager.B_VersionManager_C.CheckVersionNotify
// 0x0048 (0x0048 - 0x0000)
struct B_VersionManager_C_CheckVersionNotify final
{
public:
	bool                                          NewPatchnotes;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalNew;                                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      StoredGameinstance;                                // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetProjectVersion_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UB_GameInstance_C*                      K2Node_DynamicCast_AsB_Game_Instance;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_VersionManager_C_CheckVersionNotify) == 0x000008, "Wrong alignment on B_VersionManager_C_CheckVersionNotify");
static_assert(sizeof(B_VersionManager_C_CheckVersionNotify) == 0x000048, "Wrong size on B_VersionManager_C_CheckVersionNotify");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, NewPatchnotes) == 0x000000, "Member 'B_VersionManager_C_CheckVersionNotify::NewPatchnotes' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, LocalNew) == 0x000001, "Member 'B_VersionManager_C_CheckVersionNotify::LocalNew' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, StoredGameinstance) == 0x000008, "Member 'B_VersionManager_C_CheckVersionNotify::StoredGameinstance' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_GetProjectVersion_ReturnValue) == 0x000010, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_GetProjectVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_Conv_StringToName_ReturnValue) == 0x000020, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, K2Node_DynamicCast_AsB_Game_Instance) == 0x000038, "Member 'B_VersionManager_C_CheckVersionNotify::K2Node_DynamicCast_AsB_Game_Instance' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'B_VersionManager_C_CheckVersionNotify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_Set_Contains_ReturnValue) == 0x000041, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_VersionManager_C_CheckVersionNotify, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'B_VersionManager_C_CheckVersionNotify::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}
