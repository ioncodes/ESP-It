#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadLayout

#include "Basic.hpp"

#include "WB_SaveLoadLayout_classes.hpp"
#include "WB_SaveLoadLayout_parameters.hpp"


namespace SDK
{

// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.AfterSaveAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadLayout_C::AfterSaveAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "AfterSaveAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadLayout_C::BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.BndEvt__CheckBoxAutoSave_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::BndEvt__CheckBoxAutoSave_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "BndEvt__CheckBoxAutoSave_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	Params::WB_SaveLoadLayout_C_BndEvt__CheckBoxAutoSave_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.BndEvt__Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadLayout_C::BndEvt__Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "BndEvt__Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.BndEvt__UseCompression_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWB_CheckBoxWithLabel_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::BndEvt__UseCompression_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(class UWB_CheckBoxWithLabel_C* Sender, bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "BndEvt__UseCompression_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");

	Params::WB_SaveLoadLayout_C_BndEvt__UseCompression_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SaveLoadLayout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.ExecuteUbergraph_WB_SaveLoadLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::ExecuteUbergraph_WB_SaveLoadLayout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "ExecuteUbergraph_WB_SaveLoadLayout");

	Params::WB_SaveLoadLayout_C_ExecuteUbergraph_WB_SaveLoadLayout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.Get_LayoutName_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SaveLoadLayout_C::Get_LayoutName_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "Get_LayoutName_Visibility_0");

	Params::WB_SaveLoadLayout_C_Get_LayoutName_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.Get_SaveAsName_Visibility_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SaveLoadLayout_C::Get_SaveAsName_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "Get_SaveAsName_Visibility_0");

	Params::WB_SaveLoadLayout_C_Get_SaveAsName_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.Get_SaveLoadLayout_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_SaveLoadLayout_C::Get_SaveLoadLayout_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "Get_SaveLoadLayout_Text_0");

	Params::WB_SaveLoadLayout_C_Get_SaveLoadLayout_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "GetInitialFocusWidget");

	Params::WB_SaveLoadLayout_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.Loaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LayoutName_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Saved                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::Loaded(const class FString& LayoutName_0, bool Saved)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "Loaded");

	Params::WB_SaveLoadLayout_C_Loaded Parms{};

	Parms.LayoutName_0 = std::move(LayoutName_0);
	Parms.Saved = Saved;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadLayout_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadLayout_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadLayout_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.RefreshLayoutList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadLayout_C::RefreshLayoutList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "RefreshLayoutList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadLayout.WB_SaveLoadLayout_C.SaveAnswered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_QuestionAnswer                        Answer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadLayout_C::SaveAnswered(E_QuestionAnswer Answer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadLayout_C", "SaveAnswered");

	Params::WB_SaveLoadLayout_C_SaveAnswered Parms{};

	Parms.Answer = Answer;

	UObject::ProcessEvent(Func, &Parms);
}

}
