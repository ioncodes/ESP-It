#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CreativeHunter

#include "Basic.hpp"

#include "B_CreativeHunter_classes.hpp"
#include "B_CreativeHunter_parameters.hpp"


namespace SDK
{

// Function B_CreativeHunter.B_CreativeHunter_C.ExecuteUbergraph_B_CreativeHunter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CreativeHunter_C::ExecuteUbergraph_B_CreativeHunter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativeHunter_C", "ExecuteUbergraph_B_CreativeHunter");

	Params::B_CreativeHunter_C_ExecuteUbergraph_B_CreativeHunter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativeHunter.B_CreativeHunter_C.PossessedClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AB_CreativeHunter_C::PossessedClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativeHunter_C", "PossessedClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CreativeHunter.B_CreativeHunter_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_CreativeHunter_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativeHunter_C", "ReceivePossessed");

	Params::B_CreativeHunter_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CreativeHunter.B_CreativeHunter_C.TickVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AB_CreativeHunter_C::TickVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreativeHunter_C", "TickVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}

