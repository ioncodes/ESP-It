#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ServerClientConfig

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "LowEntryJson_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ServerClientConfig.B_ServerClientConfig_C
// 0x0008 (0x0030 - 0x0028)
class UB_ServerClientConfig_C final : public UObject
{
public:
	bool                                          bUseWebSocketConnection;                           // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseNewStatsSystem;                                // 0x0029(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseNewInventorySystem;                            // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseNewServerBrowser;                              // 0x002B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FillFromJsonObject(class ULowEntryJsonObject* Json);

	void GetBool(class ULowEntryJsonObject*& Json, const class FString& Key, bool* bResult) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ServerClientConfig_C">();
	}
	static class UB_ServerClientConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_ServerClientConfig_C>();
	}
};
static_assert(alignof(UB_ServerClientConfig_C) == 0x000008, "Wrong alignment on UB_ServerClientConfig_C");
static_assert(sizeof(UB_ServerClientConfig_C) == 0x000030, "Wrong size on UB_ServerClientConfig_C");
static_assert(offsetof(UB_ServerClientConfig_C, bUseWebSocketConnection) == 0x000028, "Member 'UB_ServerClientConfig_C::bUseWebSocketConnection' has a wrong offset!");
static_assert(offsetof(UB_ServerClientConfig_C, bUseNewStatsSystem) == 0x000029, "Member 'UB_ServerClientConfig_C::bUseNewStatsSystem' has a wrong offset!");
static_assert(offsetof(UB_ServerClientConfig_C, bUseNewInventorySystem) == 0x00002A, "Member 'UB_ServerClientConfig_C::bUseNewInventorySystem' has a wrong offset!");
static_assert(offsetof(UB_ServerClientConfig_C, bUseNewServerBrowser) == 0x00002B, "Member 'UB_ServerClientConfig_C::bUseNewServerBrowser' has a wrong offset!");

}
