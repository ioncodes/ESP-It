#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_QuestionDialog

#include "Basic.hpp"

#include "WB_QuestionDialog_classes.hpp"
#include "WB_QuestionDialog_parameters.hpp"


namespace SDK
{

// Function WB_QuestionDialog.WB_QuestionDialog_C.OnAnswer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_QuestionAnswer                        Answer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestionDialog_C::OnAnswer__DelegateSignature(E_QuestionAnswer Answer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "OnAnswer__DelegateSignature");

	Params::WB_QuestionDialog_C_OnAnswer__DelegateSignature Parms{};

	Parms.Answer = Answer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_QuestionDialog_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "BndEvt__Cancel_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_QuestionDialog_C::BndEvt__No_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "BndEvt__No_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.BndEvt__Ok_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_QuestionDialog_C::BndEvt__Ok_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "BndEvt__Ok_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.BndEvt__Yes_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_QuestionDialog_C::BndEvt__Yes_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "BndEvt__Yes_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.BottomButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UWB_QuestionDialog_C::BottomButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "BottomButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.CloseDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestionDialog_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_QuestionDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.ExecuteUbergraph_WB_QuestionDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestionDialog_C::ExecuteUbergraph_WB_QuestionDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "ExecuteUbergraph_WB_QuestionDialog");

	Params::WB_QuestionDialog_C_ExecuteUbergraph_WB_QuestionDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_QuestionDialog_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "GetInitialFocusWidget");

	Params::WB_QuestionDialog_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestionDialog_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestionDialog_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_QuestionDialog_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "OnPreviewKeyDown");

	Params::WB_QuestionDialog_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_QuestionDialog_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_QuestionDialog.WB_QuestionDialog_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             QuestionText_0                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    OkButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    YesButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NoButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CancelButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_QuestionDialog_C::SetData(const class FText& Title, const class FText& QuestionText_0, bool OkButton, bool YesButton, bool NoButton, bool CancelButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_QuestionDialog_C", "SetData");

	Params::WB_QuestionDialog_C_SetData Parms{};

	Parms.Title = std::move(Title);
	Parms.QuestionText_0 = std::move(QuestionText_0);
	Parms.OkButton = OkButton;
	Parms.YesButton = YesButton;
	Parms.NoButton = NoButton;
	Parms.CancelButton = CancelButton;

	UObject::ProcessEvent(Func, &Parms);
}

}

