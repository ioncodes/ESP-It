#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_GenericAccountMessage

#include "Basic.hpp"

#include "WB_GenericAccountMessage_classes.hpp"
#include "WB_GenericAccountMessage_parameters.hpp"


namespace SDK
{

// Function WB_GenericAccountMessage.WB_GenericAccountMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_GenericAccountMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GenericAccountMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_GenericAccountMessage.WB_GenericAccountMessage_C.ExecuteUbergraph_WB_GenericAccountMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_GenericAccountMessage_C::ExecuteUbergraph_WB_GenericAccountMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_GenericAccountMessage_C", "ExecuteUbergraph_WB_GenericAccountMessage");

	Params::WB_GenericAccountMessage_C_ExecuteUbergraph_WB_GenericAccountMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

