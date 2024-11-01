#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SkinCategoryButton

#include "Basic.hpp"

#include "WB_SkinCategoryButton_classes.hpp"
#include "WB_SkinCategoryButton_parameters.hpp"


namespace SDK
{

// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.BndEvt__SelectCategory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_SkinCategoryButton_C::BndEvt__SelectCategory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "BndEvt__SelectCategory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_SkinCategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.ExecuteUbergraph_WB_SkinCategoryButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkinCategoryButton_C::ExecuteUbergraph_WB_SkinCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "ExecuteUbergraph_WB_SkinCategoryButton");

	Params::WB_SkinCategoryButton_C_ExecuteUbergraph_WB_SkinCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.Get Icon Brush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWB_SkinCategoryButton_C::Get_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "Get Icon Brush");

	Params::WB_SkinCategoryButton_C_Get_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.GetIsActiveCategorySlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_SkinCategoryButton_C::GetIsActiveCategorySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "GetIsActiveCategorySlot");

	Params::WB_SkinCategoryButton_C_GetIsActiveCategorySlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.IsNotifyVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Visibility_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SkinCategoryButton_C::IsNotifyVisible(bool* Visibility_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "IsNotifyVisible");

	Params::WB_SkinCategoryButton_C_IsNotifyVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility_0 != nullptr)
		*Visibility_0 = Parms.Visibility_0;
}


// Function WB_SkinCategoryButton.WB_SkinCategoryButton_C.OnUpdateCategory__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_SkinCategoryButton_C*         Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SkinCategoryButton_C::OnUpdateCategory__DelegateSignature(class UWB_SkinCategoryButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SkinCategoryButton_C", "OnUpdateCategory__DelegateSignature");

	Params::WB_SkinCategoryButton_C_OnUpdateCategory__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

