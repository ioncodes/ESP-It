#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_PasswordCheckBoxWithLabelAndField

#include "Basic.hpp"

#include "WB_PasswordCheckBoxWithLabelAndField_classes.hpp"
#include "WB_PasswordCheckBoxWithLabelAndField_parameters.hpp"


namespace SDK
{

// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_PasswordCheckBoxWithLabelAndField_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "OnFocusReceived");

	Params::WB_PasswordCheckBoxWithLabelAndField_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.GetVisibility_PasswordField_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_PasswordCheckBoxWithLabelAndField_C::GetVisibility_PasswordField_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "GetVisibility_PasswordField_0");

	Params::WB_PasswordCheckBoxWithLabelAndField_C_GetVisibility_PasswordField_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.OnClickedEvent
// (BlueprintCallable, BlueprintEvent)

void UWB_PasswordCheckBoxWithLabelAndField_C::OnClickedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "OnClickedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PasswordCheckBoxWithLabelAndField_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "Tick");

	Params::WB_PasswordCheckBoxWithLabelAndField_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PasswordCheckBoxWithLabelAndField_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "PreConstruct");

	Params::WB_PasswordCheckBoxWithLabelAndField_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_PasswordCheckBoxWithLabelAndField.WB_PasswordCheckBoxWithLabelAndField_C.ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PasswordCheckBoxWithLabelAndField_C::ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_PasswordCheckBoxWithLabelAndField_C", "ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField");

	Params::WB_PasswordCheckBoxWithLabelAndField_C_ExecuteUbergraph_WB_PasswordCheckBoxWithLabelAndField Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
