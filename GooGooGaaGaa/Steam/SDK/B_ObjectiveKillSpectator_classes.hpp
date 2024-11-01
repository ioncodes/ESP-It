#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ObjectiveKillSpectator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Spectator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_ObjectiveKillSpectator.B_ObjectiveKillSpectator_C
// 0x0010 (0x04A0 - 0x0490)
class AB_ObjectiveKillSpectator_C final : public AB_Spectator_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_ObjectiveKillSpectator_C;         // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_ObjectiveKillSpectator(int32 EntryPoint);
	void HandleClientProcessed(class APlayerController* PlayerController);
	void ReceivePossessed(class AController* NewController);
	void TickObjectiveSpectatorHUD();
	void TimerFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_ObjectiveKillSpectator_C">();
	}
	static class AB_ObjectiveKillSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_ObjectiveKillSpectator_C>();
	}
};
static_assert(alignof(AB_ObjectiveKillSpectator_C) == 0x000010, "Wrong alignment on AB_ObjectiveKillSpectator_C");
static_assert(sizeof(AB_ObjectiveKillSpectator_C) == 0x0004A0, "Wrong size on AB_ObjectiveKillSpectator_C");
static_assert(offsetof(AB_ObjectiveKillSpectator_C, UberGraphFrame_B_ObjectiveKillSpectator_C) == 0x000490, "Member 'AB_ObjectiveKillSpectator_C::UberGraphFrame_B_ObjectiveKillSpectator_C' has a wrong offset!");

}

