#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_KillPlayerGameModeHandler

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ETeamID_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_KillPlayerGameModeHandler.B_KillPlayerGameModeHandler_C
// 0x0010 (0x00B0 - 0x00A0)
class UB_KillPlayerGameModeHandler_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UB_ActorEvents_C*                       ActorEvents;                                       // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void GetOwnerTeam(ETeamID* PlayerTeam);
	void HandleKill(class AController* Killer);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_KillPlayerGameModeHandler(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_KillPlayerGameModeHandler_C">();
	}
	static class UB_KillPlayerGameModeHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_KillPlayerGameModeHandler_C>();
	}
};
static_assert(alignof(UB_KillPlayerGameModeHandler_C) == 0x000008, "Wrong alignment on UB_KillPlayerGameModeHandler_C");
static_assert(sizeof(UB_KillPlayerGameModeHandler_C) == 0x0000B0, "Wrong size on UB_KillPlayerGameModeHandler_C");
static_assert(offsetof(UB_KillPlayerGameModeHandler_C, UberGraphFrame) == 0x0000A0, "Member 'UB_KillPlayerGameModeHandler_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UB_KillPlayerGameModeHandler_C, ActorEvents) == 0x0000A8, "Member 'UB_KillPlayerGameModeHandler_C::ActorEvents' has a wrong offset!");

}
