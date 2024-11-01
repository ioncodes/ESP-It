#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Match

#include "Basic.hpp"


namespace SDK::Params
{

// Function BFL_Match.BFL_Match_C.GetUsedMatchOptions
// 0x0018 (0x0018 - 0x0000)
struct BFL_Match_C_GetUsedMatchOptions final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UB_MatchOptions_C*                      ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UB_GameInstance_C*                      CallFunc_GetBGameInstance_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BFL_Match_C_GetUsedMatchOptions) == 0x000008, "Wrong alignment on BFL_Match_C_GetUsedMatchOptions");
static_assert(sizeof(BFL_Match_C_GetUsedMatchOptions) == 0x000018, "Wrong size on BFL_Match_C_GetUsedMatchOptions");
static_assert(offsetof(BFL_Match_C_GetUsedMatchOptions, __WorldContext) == 0x000000, "Member 'BFL_Match_C_GetUsedMatchOptions::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Match_C_GetUsedMatchOptions, ReturnValue) == 0x000008, "Member 'BFL_Match_C_GetUsedMatchOptions::ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Match_C_GetUsedMatchOptions, CallFunc_GetBGameInstance_ReturnValue) == 0x000010, "Member 'BFL_Match_C_GetUsedMatchOptions::CallFunc_GetBGameInstance_ReturnValue' has a wrong offset!");

// Function BFL_Match.BFL_Match_C.IsUsingPropReplicationOptimization
// 0x0010 (0x0010 - 0x0000)
struct BFL_Match_C_IsUsingPropReplicationOptimization final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PropSleepManagerEnabled;                           // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BFL_Match_C_IsUsingPropReplicationOptimization) == 0x000008, "Wrong alignment on BFL_Match_C_IsUsingPropReplicationOptimization");
static_assert(sizeof(BFL_Match_C_IsUsingPropReplicationOptimization) == 0x000010, "Wrong size on BFL_Match_C_IsUsingPropReplicationOptimization");
static_assert(offsetof(BFL_Match_C_IsUsingPropReplicationOptimization, __WorldContext) == 0x000000, "Member 'BFL_Match_C_IsUsingPropReplicationOptimization::__WorldContext' has a wrong offset!");
static_assert(offsetof(BFL_Match_C_IsUsingPropReplicationOptimization, ReturnValue) == 0x000008, "Member 'BFL_Match_C_IsUsingPropReplicationOptimization::ReturnValue' has a wrong offset!");
static_assert(offsetof(BFL_Match_C_IsUsingPropReplicationOptimization, PropSleepManagerEnabled) == 0x000009, "Member 'BFL_Match_C_IsUsingPropReplicationOptimization::PropSleepManagerEnabled' has a wrong offset!");

}

