#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RadialMenuOptionWidget

#include "Basic.hpp"

#include "WB_RadialMenuOptionWidget_classes.hpp"
#include "WB_RadialMenuOptionWidget_parameters.hpp"


namespace SDK
{

// Function WB_RadialMenuOptionWidget.WB_RadialMenuOptionWidget_C.ExecuteUbergraph_WB_RadialMenuOptionWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RadialMenuOptionWidget_C::ExecuteUbergraph_WB_RadialMenuOptionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RadialMenuOptionWidget_C", "ExecuteUbergraph_WB_RadialMenuOptionWidget");

	Params::WB_RadialMenuOptionWidget_C_ExecuteUbergraph_WB_RadialMenuOptionWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RadialMenuOptionWidget.WB_RadialMenuOptionWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RadialMenuOptionWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RadialMenuOptionWidget_C", "PreConstruct");

	Params::WB_RadialMenuOptionWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RadialMenuOptionWidget.WB_RadialMenuOptionWidget_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RadialMenuOptionWidget_C::UpdateBackgroundImage(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RadialMenuOptionWidget_C", "UpdateBackgroundImage");

	Params::WB_RadialMenuOptionWidget_C_UpdateBackgroundImage Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}
