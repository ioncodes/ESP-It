#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_UserMessagesSave

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_UserMessagesSave.B_UserMessagesSave_C
// 0x0010 (0x0038 - 0x0028)
class UB_UserMessagesSave_C final : public USaveGame
{
public:
	struct FDateTime                              LastMessageCheck;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int64                                         LastSeenMessageId;                                 // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_UserMessagesSave_C">();
	}
	static class UB_UserMessagesSave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_UserMessagesSave_C>();
	}
};
static_assert(alignof(UB_UserMessagesSave_C) == 0x000008, "Wrong alignment on UB_UserMessagesSave_C");
static_assert(sizeof(UB_UserMessagesSave_C) == 0x000038, "Wrong size on UB_UserMessagesSave_C");
static_assert(offsetof(UB_UserMessagesSave_C, LastMessageCheck) == 0x000028, "Member 'UB_UserMessagesSave_C::LastMessageCheck' has a wrong offset!");
static_assert(offsetof(UB_UserMessagesSave_C, LastSeenMessageId) == 0x000030, "Member 'UB_UserMessagesSave_C::LastSeenMessageId' has a wrong offset!");

}
