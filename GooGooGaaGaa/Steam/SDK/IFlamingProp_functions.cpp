#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IFlamingProp

#include "Basic.hpp"

#include "IFlamingProp_classes.hpp"


namespace SDK
{

// Function IFlamingProp.IFlamingProp_C.EnterWaterWithFlame
// (Public, BlueprintCallable, BlueprintEvent)

void IIFlamingProp_C::EnterWaterWithFlame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFlamingProp_C", "EnterWaterWithFlame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IFlamingProp.IFlamingProp_C.LeaveWaterWithFlame
// (Public, BlueprintCallable, BlueprintEvent)

void IIFlamingProp_C::LeaveWaterWithFlame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IFlamingProp_C", "LeaveWaterWithFlame");

	UObject::ProcessEvent(Func, nullptr);
}

}

