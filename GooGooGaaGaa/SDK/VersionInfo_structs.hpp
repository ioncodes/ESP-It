#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VersionInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct VersionInfo.VersionInfo
// 0x0030 (0x0030 - 0x0000)
struct FVersionInfo final
{
public:
	class FName                                   Version_10_CAD4908A44A088866648E29092D52F69;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Date_6_1E09C7484BC68BDB63E4FD8506A7A3B2;           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Notes_9_F4633A6E4F111AA9796E638D8461462A;          // 0x0018(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FVersionInfo) == 0x000008, "Wrong alignment on FVersionInfo");
static_assert(sizeof(FVersionInfo) == 0x000030, "Wrong size on FVersionInfo");
static_assert(offsetof(FVersionInfo, Version_10_CAD4908A44A088866648E29092D52F69) == 0x000000, "Member 'FVersionInfo::Version_10_CAD4908A44A088866648E29092D52F69' has a wrong offset!");
static_assert(offsetof(FVersionInfo, Date_6_1E09C7484BC68BDB63E4FD8506A7A3B2) == 0x000008, "Member 'FVersionInfo::Date_6_1E09C7484BC68BDB63E4FD8506A7A3B2' has a wrong offset!");
static_assert(offsetof(FVersionInfo, Notes_9_F4633A6E4F111AA9796E638D8461462A) == 0x000018, "Member 'FVersionInfo::Notes_9_F4633A6E4F111AA9796E638D8461462A' has a wrong offset!");

}
