#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WitchStudyTask

#include "Basic.hpp"

#include "B_CollectTask_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WitchStudyTask.B_WitchStudyTask_C
// 0x0000 (0x0318 - 0x0318)
class AB_WitchStudyTask_C final : public AB_CollectTask_C
{
public:
	void InitializeIndividualTaskParameters();
	void SpawnTargets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WitchStudyTask_C">();
	}
	static class AB_WitchStudyTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WitchStudyTask_C>();
	}
};
static_assert(alignof(AB_WitchStudyTask_C) == 0x000008, "Wrong alignment on AB_WitchStudyTask_C");
static_assert(sizeof(AB_WitchStudyTask_C) == 0x000318, "Wrong size on AB_WitchStudyTask_C");

}

