#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_AnnouncementArea

#include "Basic.hpp"

#include "WB_AnnouncementArea_classes.hpp"
#include "WB_AnnouncementArea_parameters.hpp"


namespace SDK
{

// Function WB_AnnouncementArea.WB_AnnouncementArea_C.DetermineLastWitchText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           WitchName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_AnnouncementArea_C::DetermineLastWitchText(const class FString& WitchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "DetermineLastWitchText");

	Params::WB_AnnouncementArea_C_DetermineLastWitchText Parms{};

	Parms.WitchName = std::move(WitchName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.EVENT_OnAnnouncementAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_AnnouncementArea_C::EVENT_OnAnnouncementAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "EVENT_OnAnnouncementAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.GetMyTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ETeamID                                 Team                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AnnouncementArea_C::GetMyTeam(ETeamID* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "GetMyTeam");

	Params::WB_AnnouncementArea_C_GetMyTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.HandleLastWitchAnnouncement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WitchName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_AnnouncementArea_C::HandleLastWitchAnnouncement(const class FString& WitchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "HandleLastWitchAnnouncement");

	Params::WB_AnnouncementArea_C_HandleLastWitchAnnouncement Parms{};

	Parms.WitchName = std::move(WitchName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.IsAnAnnouncementQueued
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_AnnouncementArea_C::IsAnAnnouncementQueued()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "IsAnAnnouncementQueued");

	Params::WB_AnnouncementArea_C_IsAnAnnouncementQueued Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.IsAnAnnouncementShown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_AnnouncementArea_C::IsAnAnnouncementShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "IsAnAnnouncementShown");

	Params::WB_AnnouncementArea_C_IsAnAnnouncementShown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.QueueAnnouncement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AnnouncementEntry_C*          NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWB_AnnouncementArea_C::QueueAnnouncement(const class UWB_AnnouncementEntry_C*& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "QueueAnnouncement");

	Params::WB_AnnouncementArea_C_QueueAnnouncement Parms{};

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_AnnouncementArea.WB_AnnouncementArea_C.ShowAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_AnnouncementEntry_C*          Announcement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_AnnouncementArea_C::ShowAnnouncement(class UWB_AnnouncementEntry_C* Announcement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AnnouncementArea_C", "ShowAnnouncement");

	Params::WB_AnnouncementArea_C_ShowAnnouncement Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);
}

}
