#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MutedPlayersSave

#include "Basic.hpp"

#include "B_MutedPlayersSave_classes.hpp"
#include "B_MutedPlayersSave_parameters.hpp"


namespace SDK
{

// Function B_MutedPlayersSave.B_MutedPlayersSave_C.IsPlayerMuted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMuted                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_MutedPlayersSave_C::IsPlayerMuted(class AB_PlayerState_C* PlayerState, bool* IsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MutedPlayersSave_C", "IsPlayerMuted");

	Params::B_MutedPlayersSave_C_IsPlayerMuted Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMuted != nullptr)
		*IsMuted = Parms.IsMuted;
}


// Function B_MutedPlayersSave.B_MutedPlayersSave_C.MutePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MutedPlayersSave_C::MutePlayer(class AB_PlayerState_C* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MutedPlayersSave_C", "MutePlayer");

	Params::B_MutedPlayersSave_C_MutePlayer Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MutedPlayersSave.B_MutedPlayersSave_C.UnmutePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PlayerState_C*                 PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MutedPlayersSave_C::UnmutePlayer(class AB_PlayerState_C* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MutedPlayersSave_C", "UnmutePlayer");

	Params::B_MutedPlayersSave_C_UnmutePlayer Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}
