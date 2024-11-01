#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ControllerIconWithLabel

#include "Basic.hpp"

#include "WB_ControllerIconWithLabel_classes.hpp"
#include "WB_ControllerIconWithLabel_parameters.hpp"


namespace SDK
{

// Function WB_ControllerIconWithLabel.WB_ControllerIconWithLabel_C.Center
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBoxSlot*               Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIconWithLabel_C::Center(class UHorizontalBoxSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIconWithLabel_C", "Center");

	Params::WB_ControllerIconWithLabel_C_Center Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIconWithLabel.WB_ControllerIconWithLabel_C.AddWidgetsToHorizontalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Right                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIconWithLabel_C::AddWidgetsToHorizontalBox(class UWidget* Left, class UWidget* Right)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIconWithLabel_C", "AddWidgetsToHorizontalBox");

	Params::WB_ControllerIconWithLabel_C_AddWidgetsToHorizontalBox Parms{};

	Parms.Left = Left;
	Parms.Right = Right;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIconWithLabel.WB_ControllerIconWithLabel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIconWithLabel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIconWithLabel_C", "PreConstruct");

	Params::WB_ControllerIconWithLabel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ControllerIconWithLabel.WB_ControllerIconWithLabel_C.UpdateOrder
// (BlueprintCallable, BlueprintEvent)

void UWB_ControllerIconWithLabel_C::UpdateOrder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIconWithLabel_C", "UpdateOrder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ControllerIconWithLabel.WB_ControllerIconWithLabel_C.ExecuteUbergraph_WB_ControllerIconWithLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ControllerIconWithLabel_C::ExecuteUbergraph_WB_ControllerIconWithLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ControllerIconWithLabel_C", "ExecuteUbergraph_WB_ControllerIconWithLabel");

	Params::WB_ControllerIconWithLabel_C_ExecuteUbergraph_WB_ControllerIconWithLabel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

