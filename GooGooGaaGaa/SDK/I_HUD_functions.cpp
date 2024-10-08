#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_HUD

#include "Basic.hpp"

#include "I_HUD_classes.hpp"
#include "I_HUD_parameters.hpp"


namespace SDK
{

// Function I_HUD.I_HUD_C.GetHUDSkills
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_HUDSkill_C*                   Movement                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_HUDSkill_C*                   Utility                                                (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void II_HUD_C::GetHUDSkills(class UWB_HUDSkill_C** Movement, class UWB_HUDSkill_C** Utility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_HUD_C", "GetHUDSkills");

	Params::I_HUD_C_GetHUDSkills Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Movement != nullptr)
		*Movement = Parms.Movement;

	if (Utility != nullptr)
		*Utility = Parms.Utility;
}


// Function I_HUD.I_HUD_C.PlayNoValidTransform
// (Public, BlueprintCallable, BlueprintEvent)

void II_HUD_C::PlayNoValidTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_HUD_C", "PlayNoValidTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_HUD.I_HUD_C.PlayPossessNotWorking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PossessNotWorkingReason               Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_HUD_C::PlayPossessNotWorking(E_PossessNotWorkingReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_HUD_C", "PlayPossessNotWorking");

	Params::I_HUD_C_PlayPossessNotWorking Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_HUD.I_HUD_C.PlayYouHaveBeenKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayerWasHunter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_HUD_C::PlayYouHaveBeenKilled(class APlayerState* Killer, bool PlayerWasHunter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_HUD_C", "PlayYouHaveBeenKilled");

	Params::I_HUD_C_PlayYouHaveBeenKilled Parms{};

	Parms.Killer = Killer;
	Parms.PlayerWasHunter = PlayerWasHunter;

	UObject::ProcessEvent(Func, &Parms);
}

}

