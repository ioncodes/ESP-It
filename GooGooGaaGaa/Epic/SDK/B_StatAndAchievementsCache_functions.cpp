#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_StatAndAchievementsCache

#include "Basic.hpp"

#include "B_StatAndAchievementsCache_classes.hpp"
#include "B_StatAndAchievementsCache_parameters.hpp"


namespace SDK
{

// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.GetAllStats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Stat>                  ResultData                                             (Parm, OutParm)

void UB_StatAndAchievementsCache_C::GetAllStats(TArray<struct FS_Stat>* ResultData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "GetAllStats");

	Params::B_StatAndAchievementsCache_C_GetAllStats Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ResultData != nullptr)
		*ResultData = std::move(Parms.ResultData);
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.GetStatsBySetByType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_StatSetBy                             SetByFilter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_Stat>                  ResultData                                             (Parm, OutParm)

void UB_StatAndAchievementsCache_C::GetStatsBySetByType(E_StatSetBy SetByFilter, TArray<struct FS_Stat>* ResultData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "GetStatsBySetByType");

	Params::B_StatAndAchievementsCache_C_GetStatsBySetByType Parms{};

	Parms.SetByFilter = SetByFilter;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultData != nullptr)
		*ResultData = std::move(Parms.ResultData);
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.HasStat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StatName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IndexInListIfFound                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_StatAndAchievementsCache_C::HasStat(const class FString& StatName, bool* Result, int32* IndexInListIfFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "HasStat");

	Params::B_StatAndAchievementsCache_C_HasStat Parms{};

	Parms.StatName = std::move(StatName);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (IndexInListIfFound != nullptr)
		*IndexInListIfFound = Parms.IndexInListIfFound;
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.SetStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StatName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_StatSetBy                             SetBy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        AchievementGrantDateTime                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsHidden                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_StatAndAchievementsCache_C::SetStat(const class FString& StatName, int64 Value, E_StatSetBy SetBy, const struct FDateTime& AchievementGrantDateTime, bool bIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "SetStat");

	Params::B_StatAndAchievementsCache_C_SetStat Parms{};

	Parms.StatName = std::move(StatName);
	Parms.Value = Value;
	Parms.SetBy = SetBy;
	Parms.AchievementGrantDateTime = std::move(AchievementGrantDateTime);
	Parms.bIsHidden = bIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.GetCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_StatAndAchievementsCache_C::GetCount(int32* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "GetCount");

	Params::B_StatAndAchievementsCache_C_GetCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.GetStat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           StatName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int64                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    WasFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IndexInList                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        AchievementDateTime                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsHidden                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_StatAndAchievementsCache_C::GetStat(const class FString& StatName, int64* Value, bool* WasFound, int32* IndexInList, struct FDateTime* AchievementDateTime, bool* bIsHidden) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "GetStat");

	Params::B_StatAndAchievementsCache_C_GetStat Parms{};

	Parms.StatName = std::move(StatName);

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (WasFound != nullptr)
		*WasFound = Parms.WasFound;

	if (IndexInList != nullptr)
		*IndexInList = Parms.IndexInList;

	if (AchievementDateTime != nullptr)
		*AchievementDateTime = std::move(Parms.AchievementDateTime);

	if (bIsHidden != nullptr)
		*bIsHidden = Parms.bIsHidden;
}


// Function B_StatAndAchievementsCache.B_StatAndAchievementsCache_C.PrintCache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)

void UB_StatAndAchievementsCache_C::PrintCache() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_StatAndAchievementsCache_C", "PrintCache");

	UObject::ProcessEvent(Func, nullptr);
}

}
