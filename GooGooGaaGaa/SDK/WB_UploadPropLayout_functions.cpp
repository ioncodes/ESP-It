#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_UploadPropLayout

#include "Basic.hpp"

#include "WB_UploadPropLayout_classes.hpp"
#include "WB_UploadPropLayout_parameters.hpp"


namespace SDK
{

// Function WB_UploadPropLayout.WB_UploadPropLayout_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_UploadPropLayout_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.BndEvt__Button_Create_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_UploadPropLayout_C::BndEvt__Button_Create_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "BndEvt__Button_Create_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.BndEvt__OpenWorkshopLegalAgreements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWB_UploadPropLayout_C::BndEvt__OpenWorkshopLegalAgreements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "BndEvt__OpenWorkshopLegalAgreements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.ConfirmAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::ConfirmAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "ConfirmAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_UploadPropLayout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.DiscardChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::DiscardChanges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "DiscardChanges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.ExecuteUbergraph_WB_UploadPropLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_UploadPropLayout_C::ExecuteUbergraph_WB_UploadPropLayout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "ExecuteUbergraph_WB_UploadPropLayout");

	Params::WB_UploadPropLayout_C_ExecuteUbergraph_WB_UploadPropLayout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_UploadPropLayout_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "GetInitialFocusWidget");

	Params::WB_UploadPropLayout_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.HandleQueriedItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWorkshopItemDetails             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_UploadPropLayout_C::HandleQueriedItems(const struct FWorkshopItemDetails& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "HandleQueriedItems");

	Params::WB_UploadPropLayout_C_HandleQueriedItems Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.IsDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDirty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_UploadPropLayout_C::IsDirty(bool* bDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "IsDirty");

	Params::WB_UploadPropLayout_C_IsDirty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bDirty != nullptr)
		*bDirty = Parms.bDirty;
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.RequestConfirmableAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::RequestConfirmableAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "RequestConfirmableAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.RevertChanges
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::RevertChanges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "RevertChanges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.SetPreviewImage
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::SetPreviewImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "SetPreviewImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_UploadPropLayout.WB_UploadPropLayout_C.ShareLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_UploadPropLayout_C::ShareLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_UploadPropLayout_C", "ShareLayout");

	UObject::ProcessEvent(Func, nullptr);
}

}

