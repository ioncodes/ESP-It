#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CalculatedScoreStatToSort

#include "Basic.hpp"

#include "SCalculatedScoreStat_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CalculatedScoreStatToSort.B_CalculatedScoreStatToSort_C
// 0x0018 (0x0040 - 0x0028)
class UB_CalculatedScoreStatToSort_C final : public UObject
{
public:
	struct FSCalculatedScoreStat                  CalculatedScoreStat;                               // 0x0028(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CalculatedScoreStatToSort_C">();
	}
	static class UB_CalculatedScoreStatToSort_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_CalculatedScoreStatToSort_C>();
	}
};
static_assert(alignof(UB_CalculatedScoreStatToSort_C) == 0x000008, "Wrong alignment on UB_CalculatedScoreStatToSort_C");
static_assert(sizeof(UB_CalculatedScoreStatToSort_C) == 0x000040, "Wrong size on UB_CalculatedScoreStatToSort_C");
static_assert(offsetof(UB_CalculatedScoreStatToSort_C, CalculatedScoreStat) == 0x000028, "Member 'UB_CalculatedScoreStatToSort_C::CalculatedScoreStat' has a wrong offset!");

}
