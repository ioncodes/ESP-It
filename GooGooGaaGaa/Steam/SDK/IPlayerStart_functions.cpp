#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IPlayerStart

#include "Basic.hpp"

#include "IPlayerStart_classes.hpp"
#include "IPlayerStart_parameters.hpp"


namespace SDK
{

// Function IPlayerStart.IPlayerStart_C.GetOccupied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Occupied                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerStart_C::GetOccupied(bool* Occupied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IPlayerStart_C", "GetOccupied");

	Params::IPlayerStart_C_GetOccupied Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Occupied != nullptr)
		*Occupied = Parms.Occupied;
}


// Function IPlayerStart.IPlayerStart_C.SetOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Occupied                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPlayerStart_C::SetOccupied(bool Occupied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IPlayerStart_C", "SetOccupied");

	Params::IPlayerStart_C_SetOccupied Parms{};

	Parms.Occupied = Occupied;

	UObject::ProcessEvent(Func, &Parms);
}

}
