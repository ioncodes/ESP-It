#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AccountMessage

#include "Basic.hpp"

#include "WB_AccountMessage_classes.hpp"
#include "WB_AccountMessage_parameters.hpp"


namespace SDK
{

// Function WB_AccountMessage.WB_AccountMessage_C.MarkAsCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_AccountMessage_C::MarkAsCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AccountMessage_C", "MarkAsCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

}
