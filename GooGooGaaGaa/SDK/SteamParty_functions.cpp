#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SteamParty

#include "Basic.hpp"

#include "SteamParty_classes.hpp"
#include "SteamParty_parameters.hpp"


namespace SDK
{

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostConnectionFailure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyHostConnectionFailure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyHostReconnecting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyHostReconnecting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           FriendName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PartyInviteReceived(const class FString& FriendName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyInviteReceived");

	Params::SteamBeaconPlayerController_BPEvent_PartyInviteReceived Parms{};

	Parms.FriendName = std::move(FriendName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyJoiningGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyJoiningGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 InUniqueId                                             (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyOwnerChanged");

	Params::SteamBeaconPlayerController_BPEvent_PartyOwnerChanged Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged
// (Event, Public, BlueprintEvent)

void ASteamBeaconPlayerController::BPEvent_PartyStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "BPEvent_PartyStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerId                                               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerController::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "IsPlayerControllerUniqueIdMatch");

	Params::SteamBeaconPlayerController_IsPlayerControllerUniqueIdMatch Parms{};

	Parms.PlayerId = std::move(PlayerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerId                                               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASteamBeaconPlayerController::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "IsPlayerVoiceMuted");

	Params::SteamBeaconPlayerController_IsPlayerVoiceMuted Parms{};

	Parms.PlayerId = std::move(PlayerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerId                                               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "MutePlayerVoice");

	Params::SteamBeaconPlayerController_MutePlayerVoice Parms{};

	Parms.PlayerId = std::move(PlayerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void ASteamBeaconPlayerController::StartPlayerTalking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "StartPlayerTalking");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking
// (Final, Native, Public, BlueprintCallable)

void ASteamBeaconPlayerController::StopPlayerTalking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "StopPlayerTalking");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl                 PlayerId                                               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASteamBeaconPlayerController::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SteamBeaconPlayerController", "UnMutePlayerVoice");

	Params::SteamBeaconPlayerController_UnMutePlayerVoice Parms{};

	Parms.PlayerId = std::move(PlayerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

