#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerReports

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerReports.B_PlayerReports_C
// 0x0010 (0x0038 - 0x0028)
class UB_PlayerReports_C final : public UObject
{
public:
	TArray<class FString>                         ReportedPlayers;                                   // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerReports_C">();
	}
	static class UB_PlayerReports_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_PlayerReports_C>();
	}
};
static_assert(alignof(UB_PlayerReports_C) == 0x000008, "Wrong alignment on UB_PlayerReports_C");
static_assert(sizeof(UB_PlayerReports_C) == 0x000038, "Wrong size on UB_PlayerReports_C");
static_assert(offsetof(UB_PlayerReports_C, ReportedPlayers) == 0x000028, "Member 'UB_PlayerReports_C::ReportedPlayers' has a wrong offset!");

}

