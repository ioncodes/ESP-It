#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MobificationGameMode

#include "Basic.hpp"

#include "B_HideAndSeekGameMode_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_MobificationGameMode.B_MobificationGameMode_C
// 0x0000 (0x05D0 - 0x05D0)
class AB_MobificationGameMode_C final : public AB_HideAndSeekGameMode_C
{
public:
	void GetPlayObjectiveId(int64* ObjectiveId) const;
	void GetWinObjectiveId(int64* ObjectiveId) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_MobificationGameMode_C">();
	}
	static class AB_MobificationGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_MobificationGameMode_C>();
	}
};
static_assert(alignof(AB_MobificationGameMode_C) == 0x000008, "Wrong alignment on AB_MobificationGameMode_C");
static_assert(sizeof(AB_MobificationGameMode_C) == 0x0005D0, "Wrong size on AB_MobificationGameMode_C");

}
