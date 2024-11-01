#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_RecentlyPlayed

#include "Basic.hpp"

#include "WB_RecentlyPlayed_classes.hpp"
#include "WB_RecentlyPlayed_parameters.hpp"


namespace SDK
{

// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.AcceptButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::AcceptButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "AcceptButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.AddListItemsSorted
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UOnlineRecentPlayerRef*>   NewPlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_RecentlyPlayed_C::AddListItemsSorted(TArray<class UOnlineRecentPlayerRef*>& NewPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "AddListItemsSorted");

	Params::WB_RecentlyPlayed_C_AddListItemsSorted Parms{};

	Parms.NewPlayers = std::move(NewPlayers);

	UObject::ProcessEvent(Func, &Parms);

	NewPlayers = std::move(Parms.NewPlayers);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_RecentlyPlayed_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.Deinit
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::Deinit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "Deinit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.ExecuteUbergraph_WB_RecentlyPlayed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::ExecuteUbergraph_WB_RecentlyPlayed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "ExecuteUbergraph_WB_RecentlyPlayed");

	Params::WB_RecentlyPlayed_C_ExecuteUbergraph_WB_RecentlyPlayed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.GetCurrentlyFocusedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          FocusedWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::GetCurrentlyFocusedWidget(class UWidget** FocusedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "GetCurrentlyFocusedWidget");

	Params::WB_RecentlyPlayed_C_GetCurrentlyFocusedWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FocusedWidget != nullptr)
		*FocusedWidget = Parms.FocusedWidget;
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.GetSelectedEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_OnlineUserEntry_C*            ListEntry                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::GetSelectedEntry(class UWB_OnlineUserEntry_C** ListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "GetSelectedEntry");

	Params::WB_RecentlyPlayed_C_GetSelectedEntry Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ListEntry != nullptr)
		*ListEntry = Parms.ListEntry;
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.PresenceUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::PresenceUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "PresenceUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.RecentPlayerComparator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ObjectA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          ObjectB                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::RecentPlayerComparator(class UObject* ObjectA, class UObject* ObjectB, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "RecentPlayerComparator");

	Params::WB_RecentlyPlayed_C_RecentPlayerComparator Parms{};

	Parms.ObjectA = ObjectA;
	Parms.ObjectB = ObjectB;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.RefreshRecentPlayers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::RefreshRecentPlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "RefreshRecentPlayers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.RemoveEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EntryListObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::RemoveEntry(class UObject* EntryListObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "RemoveEntry");

	Params::WB_RecentlyPlayed_C_RemoveEntry Parms{};

	Parms.EntryListObject = EntryListObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.RemoveEntryFromMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EntryListObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::RemoveEntryFromMap(class UObject* EntryListObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "RemoveEntryFromMap");

	Params::WB_RecentlyPlayed_C_RemoveEntryFromMap Parms{};

	Parms.EntryListObject = EntryListObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.ScrollToSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::ScrollToSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "ScrollToSelectedItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.SelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::SelectionChanged(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "SelectionChanged");

	Params::WB_RecentlyPlayed_C_SelectionChanged Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.SetItemFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ResetFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RecentlyPlayed_C::SetItemFocus(bool ResetFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "SetItemFocus");

	Params::WB_RecentlyPlayed_C_SetItemFocus Parms{};

	Parms.ResetFocus = ResetFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_RecentlyPlayed.WB_RecentlyPlayed_C.SpecialButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_RecentlyPlayed_C::SpecialButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_RecentlyPlayed_C", "SpecialButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}

}

