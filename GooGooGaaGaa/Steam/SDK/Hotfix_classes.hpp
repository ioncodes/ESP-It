#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hotfix

#include "Basic.hpp"

#include "Hotfix_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Hotfix.OnlineHotfixManager
// 0x0240 (0x0268 - 0x0028)
class UOnlineHotfixManager final : public UObject
{
public:
	uint8                                         Pad_28[0x200];                                     // 0x0028(0x0200)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OSSName;                                           // 0x0228(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 HotfixManagerClassName;                            // 0x0238(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DebugPrefix;                                       // 0x0248(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        AssetsHotfixedFromIniFiles;                        // 0x0258(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	void StartHotfixProcess();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OnlineHotfixManager">();
	}
	static class UOnlineHotfixManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineHotfixManager>();
	}
};
static_assert(alignof(UOnlineHotfixManager) == 0x000008, "Wrong alignment on UOnlineHotfixManager");
static_assert(sizeof(UOnlineHotfixManager) == 0x000268, "Wrong size on UOnlineHotfixManager");
static_assert(offsetof(UOnlineHotfixManager, OSSName) == 0x000228, "Member 'UOnlineHotfixManager::OSSName' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, HotfixManagerClassName) == 0x000238, "Member 'UOnlineHotfixManager::HotfixManagerClassName' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, DebugPrefix) == 0x000248, "Member 'UOnlineHotfixManager::DebugPrefix' has a wrong offset!");
static_assert(offsetof(UOnlineHotfixManager, AssetsHotfixedFromIniFiles) == 0x000258, "Member 'UOnlineHotfixManager::AssetsHotfixedFromIniFiles' has a wrong offset!");

// Class Hotfix.UpdateManager
// 0x01D0 (0x01F8 - 0x0028)
class UUpdateManager final : public UObject
{
public:
	uint8                                         Pad_28[0x60];                                      // 0x0028(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdateCheckStartDelay;                             // 0x0088(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         UpdateCheckCachedResponseDelay;                    // 0x008C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HotfixCheckCompleteDelay;                          // 0x0090(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         UpdateCheckCompleteDelay;                          // 0x0094(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         HotfixAvailabilityCheckCompleteDelay;              // 0x0098(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         UpdateCheckAvailabilityCompleteDelay;              // 0x009C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A0[0x4];                                       // 0x00A0(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AppSuspendedUpdateCheckTimeSeconds;                // 0x00A4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bInitialUpdateFinished;                            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCheckHotfixAvailabilityOnly;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EUpdateState                                  CurrentUpdateState;                                // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B3[0x1];                                       // 0x00B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WorstNumFilesPendingLoadViewed;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B8[0x4];                                       // 0x00B8(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	EHotfixResult                                 LastHotfixResult;                                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_BD[0x23];                                      // 0x00BD(0x0023)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LastUpdateCheck[0x2];                              // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EUpdateCompletionStatus                       LastCompletionResult[0x2];                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_F2[0x26];                                      // 0x00F2(0x0026)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnum*                                  UpdateStateEnum;                                   // 0x0118(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                  UpdateCompletionEnum;                              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUpdateContextDefinition               UpdateContextDefinitionUnknown;                    // 0x0128(0x0068)(Config, NativeAccessSpecifierPrivate)
	TArray<struct FUpdateContextDefinition>       UpdateContextDefinitions;                          // 0x0190(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A0[0x58];                                     // 0x01A0(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UpdateManager">();
	}
	static class UUpdateManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpdateManager>();
	}
};
static_assert(alignof(UUpdateManager) == 0x000008, "Wrong alignment on UUpdateManager");
static_assert(sizeof(UUpdateManager) == 0x0001F8, "Wrong size on UUpdateManager");
static_assert(offsetof(UUpdateManager, UpdateCheckStartDelay) == 0x000088, "Member 'UUpdateManager::UpdateCheckStartDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckCachedResponseDelay) == 0x00008C, "Member 'UUpdateManager::UpdateCheckCachedResponseDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, HotfixCheckCompleteDelay) == 0x000090, "Member 'UUpdateManager::HotfixCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckCompleteDelay) == 0x000094, "Member 'UUpdateManager::UpdateCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, HotfixAvailabilityCheckCompleteDelay) == 0x000098, "Member 'UUpdateManager::HotfixAvailabilityCheckCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCheckAvailabilityCompleteDelay) == 0x00009C, "Member 'UUpdateManager::UpdateCheckAvailabilityCompleteDelay' has a wrong offset!");
static_assert(offsetof(UUpdateManager, AppSuspendedUpdateCheckTimeSeconds) == 0x0000A4, "Member 'UUpdateManager::AppSuspendedUpdateCheckTimeSeconds' has a wrong offset!");
static_assert(offsetof(UUpdateManager, bInitialUpdateFinished) == 0x0000B0, "Member 'UUpdateManager::bInitialUpdateFinished' has a wrong offset!");
static_assert(offsetof(UUpdateManager, bCheckHotfixAvailabilityOnly) == 0x0000B1, "Member 'UUpdateManager::bCheckHotfixAvailabilityOnly' has a wrong offset!");
static_assert(offsetof(UUpdateManager, CurrentUpdateState) == 0x0000B2, "Member 'UUpdateManager::CurrentUpdateState' has a wrong offset!");
static_assert(offsetof(UUpdateManager, WorstNumFilesPendingLoadViewed) == 0x0000B4, "Member 'UUpdateManager::WorstNumFilesPendingLoadViewed' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastHotfixResult) == 0x0000BC, "Member 'UUpdateManager::LastHotfixResult' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastUpdateCheck) == 0x0000E0, "Member 'UUpdateManager::LastUpdateCheck' has a wrong offset!");
static_assert(offsetof(UUpdateManager, LastCompletionResult) == 0x0000F0, "Member 'UUpdateManager::LastCompletionResult' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateStateEnum) == 0x000118, "Member 'UUpdateManager::UpdateStateEnum' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateCompletionEnum) == 0x000120, "Member 'UUpdateManager::UpdateCompletionEnum' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitionUnknown) == 0x000128, "Member 'UUpdateManager::UpdateContextDefinitionUnknown' has a wrong offset!");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitions) == 0x000190, "Member 'UUpdateManager::UpdateContextDefinitions' has a wrong offset!");

}
