#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TournamentPlayer

#include "Basic.hpp"

#include "B_TournamentPlayer_classes.hpp"
#include "B_TournamentPlayer_parameters.hpp"


namespace SDK
{

// Function B_TournamentPlayer.B_TournamentPlayer_C.GetStruct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_TournamentPlayer              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

struct FS_TournamentPlayer UB_TournamentPlayer_C::GetStruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TournamentPlayer_C", "GetStruct");

	Params::B_TournamentPlayer_C_GetStruct Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_TournamentPlayer.B_TournamentPlayer_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     InitPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_TournamentPlayer_C::Initialize(class APlayerState* InitPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TournamentPlayer_C", "Initialize");

	Params::B_TournamentPlayer_C_Initialize Parms{};

	Parms.InitPlayerState = InitPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_TournamentPlayer.B_TournamentPlayer_C.InitializeByStruct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_TournamentPlayer              TournamentPlayerStruct                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UB_TournamentPlayer_C::InitializeByStruct(struct FS_TournamentPlayer& TournamentPlayerStruct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TournamentPlayer_C", "InitializeByStruct");

	Params::B_TournamentPlayer_C_InitializeByStruct Parms{};

	Parms.TournamentPlayerStruct = std::move(TournamentPlayerStruct);

	UObject::ProcessEvent(Func, &Parms);

	TournamentPlayerStruct = std::move(Parms.TournamentPlayerStruct);
}

}

