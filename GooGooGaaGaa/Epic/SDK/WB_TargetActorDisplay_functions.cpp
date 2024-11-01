#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_TargetActorDisplay

#include "Basic.hpp"

#include "WB_TargetActorDisplay_classes.hpp"
#include "WB_TargetActorDisplay_parameters.hpp"


namespace SDK
{

// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.BndEvt__WB_TargetActorDisplay_RemoveCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::BndEvt__WB_TargetActorDisplay_RemoveCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "BndEvt__WB_TargetActorDisplay_RemoveCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::WB_TargetActorDisplay_C_BndEvt__WB_TargetActorDisplay_RemoveCheckbox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UWB_TargetActorDisplay_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "BP_OnItemExpansionChanged");

	Params::WB_TargetActorDisplay_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "BP_OnItemSelectionChanged");

	Params::WB_TargetActorDisplay_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.ExecuteUbergraph_WB_TargetActorDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::ExecuteUbergraph_WB_TargetActorDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "ExecuteUbergraph_WB_TargetActorDisplay");

	Params::WB_TargetActorDisplay_C_ExecuteUbergraph_WB_TargetActorDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.Initialize
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_TargetActorDisplay_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.OnBorderMouseButtonDown
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_TargetActorDisplay_C::OnBorderMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "OnBorderMouseButtonDown");

	Params::WB_TargetActorDisplay_C_OnBorderMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "OnListItemObjectSet");

	Params::WB_TargetActorDisplay_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.OnMinMaximize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_TargetActorDisplay_C::OnMinMaximize__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "OnMinMaximize__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.UpdateContent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_TargetActorDisplay_C::UpdateContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "UpdateContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.UpdateGroupInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AddedOrRemovedActor                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    WasAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::UpdateGroupInfo(class AActor* AddedOrRemovedActor, bool WasAdded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "UpdateGroupInfo");

	Params::WB_TargetActorDisplay_C_UpdateGroupInfo Parms{};

	Parms.AddedOrRemovedActor = AddedOrRemovedActor;
	Parms.WasAdded = WasAdded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.UpdateName
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::UpdateName(class AActor* TargetActor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "UpdateName");

	Params::WB_TargetActorDisplay_C_UpdateName Parms{};

	Parms.TargetActor_0 = TargetActor_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.UpdateNeedsToBeRemoved
// (Protected, BlueprintCallable, BlueprintEvent)

void UWB_TargetActorDisplay_C::UpdateNeedsToBeRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "UpdateNeedsToBeRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.CanContentBeInitialized
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    CanBeInitialized                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_TargetActorDisplay_C::CanContentBeInitialized(bool* CanBeInitialized) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "CanContentBeInitialized");

	Params::WB_TargetActorDisplay_C_CanContentBeInitialized Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanBeInitialized != nullptr)
		*CanBeInitialized = Parms.CanBeInitialized;
}


// Function WB_TargetActorDisplay.WB_TargetActorDisplay_C.GetFullName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           TargetActor_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             FullName                                               (Parm, OutParm)

void UWB_TargetActorDisplay_C::GetFullName(class AActor* TargetActor_0, class FText* FullName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_TargetActorDisplay_C", "GetFullName");

	Params::WB_TargetActorDisplay_C_GetFullName Parms{};

	Parms.TargetActor_0 = TargetActor_0;

	UObject::ProcessEvent(Func, &Parms);

	if (FullName != nullptr)
		*FullName = std::move(Parms.FullName);
}

}

