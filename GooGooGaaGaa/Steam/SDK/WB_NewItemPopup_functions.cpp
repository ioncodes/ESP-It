#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_NewItemPopup

#include "Basic.hpp"

#include "WB_NewItemPopup_classes.hpp"
#include "WB_NewItemPopup_parameters.hpp"


namespace SDK
{

// Function WB_NewItemPopup.WB_NewItemPopup_C.AddAchievementPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AchievementData               AchievementData                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UWB_NewItemPopup_C::AddAchievementPopup(const struct FS_AchievementData& AchievementData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "AddAchievementPopup");

	Params::WB_NewItemPopup_C_AddAchievementPopup Parms{};

	Parms.AchievementData = std::move(AchievementData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.AddItemPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemDefId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::AddItemPopup(int32 ItemDefId, int32 Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "AddItemPopup");

	Params::WB_NewItemPopup_C_AddItemPopup Parms{};

	Parms.ItemDefId = ItemDefId;
	Parms.Quantity = Quantity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.AddNewItemToQueue
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       Icon_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       IconFrame_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       PopupFrame                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      FrameColor                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   PreviousCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IconAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::AddNewItemToQueue(const class FText& Title, const class FText& Description, class UTexture2D* Icon_0, class UTexture2D* IconFrame_0, class UTexture2D* PopupFrame, const struct FSlateColor& FrameColor, int32 PreviousCount, int32 NewCount, int32 MaxCount, int32 IconAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "AddNewItemToQueue");

	Params::WB_NewItemPopup_C_AddNewItemToQueue Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.Icon_0 = Icon_0;
	Parms.IconFrame_0 = IconFrame_0;
	Parms.PopupFrame = PopupFrame;
	Parms.FrameColor = std::move(FrameColor);
	Parms.PreviousCount = PreviousCount;
	Parms.NewCount = NewCount;
	Parms.MaxCount = MaxCount;
	Parms.IconAmount = IconAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.AddPropPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PropID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CategoryCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SetCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalSet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::AddPropPopup(int32 PropID, int32 CategoryCount, int32 SetCount, int32 TotalCategory, int32 TotalSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "AddPropPopup");

	Params::WB_NewItemPopup_C_AddPropPopup Parms{};

	Parms.PropID = PropID;
	Parms.CategoryCount = CategoryCount;
	Parms.SetCount = SetCount;
	Parms.TotalCategory = TotalCategory;
	Parms.TotalSet = TotalSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.AddQuestPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQuest                     Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_NewItemPopup_C::AddQuestPopup(const struct FClientQuest& Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "AddQuestPopup");

	Params::WB_NewItemPopup_C_AddQuestPopup Parms{};

	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_NewItemPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.ExecuteUbergraph_WB_NewItemPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::ExecuteUbergraph_WB_NewItemPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "ExecuteUbergraph_WB_NewItemPopup");

	Params::WB_NewItemPopup_C_ExecuteUbergraph_WB_NewItemPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.GetCountPercentage
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWB_NewItemPopup_C::GetCountPercentage(int32 Count, int32 MaxCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "GetCountPercentage");

	Params::WB_NewItemPopup_C_GetCountPercentage Parms{};

	Parms.Count = Count;
	Parms.MaxCount = MaxCount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.HandleProgressBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PreviousCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::HandleProgressBar(int32 PreviousCount, int32 NewCount, int32 MaxCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "HandleProgressBar");

	Params::WB_NewItemPopup_C_HandleProgressBar Parms{};

	Parms.PreviousCount = PreviousCount;
	Parms.NewCount = NewCount;
	Parms.MaxCount = MaxCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.ShowNextItemInQueue
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_NewItemPopup_C::ShowNextItemInQueue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "ShowNextItemInQueue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_NewItemPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "Tick");

	Params::WB_NewItemPopup_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_NewItemPopup.WB_NewItemPopup_C.WidgetAnimationEvt_NewItemAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWB_NewItemPopup_C::WidgetAnimationEvt_NewItemAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_NewItemPopup_C", "WidgetAnimationEvt_NewItemAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}

}
