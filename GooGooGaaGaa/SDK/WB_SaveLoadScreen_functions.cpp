#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_SaveLoadScreen

#include "Basic.hpp"

#include "WB_SaveLoadScreen_classes.hpp"
#include "WB_SaveLoadScreen_parameters.hpp"


namespace SDK
{

// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnFileLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                        Param_SaveFile                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::OnFileLoaded__DelegateSignature(const class FString& Filename, class USaveGame* Param_SaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnFileLoaded__DelegateSignature");

	Params::WB_SaveLoadScreen_C_OnFileLoaded__DelegateSignature Parms{};

	Parms.Filename = std::move(Filename);
	Parms.Param_SaveFile = Param_SaveFile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnBackPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnBackPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnBackPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        EntrySaveFile                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::OnEntrySelected__DelegateSignature(class USaveGame* EntrySaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnEntrySelected__DelegateSignature");

	Params::WB_SaveLoadScreen_C_OnEntrySelected__DelegateSignature Parms{};

	Parms.EntrySaveFile = EntrySaveFile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnFileDeleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnFileDeleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnFileDeleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnFileSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::OnFileSaved__DelegateSignature(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnFileSaved__DelegateSignature");

	Params::WB_SaveLoadScreen_C_OnFileSaved__DelegateSignature Parms{};

	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetInitialFocusWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InitialFocusWidget                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::GetInitialFocusWidget(class UUserWidget** InitialFocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetInitialFocusWidget");

	Params::WB_SaveLoadScreen_C_GetInitialFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InitialFocusWidget != nullptr)
		*InitialFocusWidget = Parms.InitialFocusWidget;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SaveLoadScreen_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetVisibility_1");

	Params::WB_SaveLoadScreen_C_GetVisibility_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWB_SaveLoadScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnPreviewKeyDown");

	Params::WB_SaveLoadScreen_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.RefocusList
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::RefocusList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "RefocusList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.ToggleSavingAllowed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SaveAllowed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::ToggleSavingAllowed(bool SaveAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "ToggleSavingAllowed");

	Params::WB_SaveLoadScreen_C_ToggleSavingAllowed Parms{};

	Parms.SaveAllowed = SaveAllowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.RemoveListEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EntryName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::RemoveListEntry(const class FString& EntryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "RemoveListEntry");

	Params::WB_SaveLoadScreen_C_RemoveListEntry Parms{};

	Parms.EntryName = std::move(EntryName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.LoadCurrentEntryName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        SaveFile                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::LoadCurrentEntryName(class USaveGame** SaveFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "LoadCurrentEntryName");

	Params::WB_SaveLoadScreen_C_LoadCurrentEntryName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SaveFile != nullptr)
		*SaveFile = Parms.SaveFile;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.CreateNewSaveEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EntryName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UB_SaveEntryData_C*               Entry                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::CreateNewSaveEntry(const class FString& EntryName, class UB_SaveEntryData_C** Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "CreateNewSaveEntry");

	Params::WB_SaveLoadScreen_C_CreateNewSaveEntry Parms{};

	Parms.EntryName = std::move(EntryName);

	UObject::ProcessEvent(Func, &Parms);

	if (Entry != nullptr)
		*Entry = Parms.Entry;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.InputCommitted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InputText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_SaveLoadScreen_C::InputCommitted(const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "InputCommitted");

	Params::WB_SaveLoadScreen_C_InputCommitted Parms{};

	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.SaveFile
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        File                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           Filename                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::SaveFile(class USaveGame* File, const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "SaveFile");

	Params::WB_SaveLoadScreen_C_SaveFile Parms{};

	Parms.File = File;
	Parms.Filename = std::move(Filename);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.SetUITexts
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::SetUITexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "SetUITexts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.InitializeSaveLoadUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_SaveLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    AllowFileEditing                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                        Param_FileToSave                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::InitializeSaveLoadUI(const class FString& Param_SaveLocation, bool AllowFileEditing, class USaveGame* Param_FileToSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "InitializeSaveLoadUI");

	Params::WB_SaveLoadScreen_C_InitializeSaveLoadUI Parms{};

	Parms.Param_SaveLocation = std::move(Param_SaveLocation);
	Parms.AllowFileEditing = AllowFileEditing;
	Parms.Param_FileToSave = Param_FileToSave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetSystemFriendlyFileName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OldName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           SystemFriendly                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::GetSystemFriendlyFileName(const class FString& OldName, class FString* SystemFriendly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetSystemFriendlyFileName");

	Params::WB_SaveLoadScreen_C_GetSystemFriendlyFileName Parms{};

	Parms.OldName = std::move(OldName);

	UObject::ProcessEvent(Func, &Parms);

	if (SystemFriendly != nullptr)
		*SystemFriendly = std::move(Parms.SystemFriendly);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetUserFriendlyFileName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OldName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           UserFriendly                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::GetUserFriendlyFileName(const class FString& OldName, class FString* UserFriendly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetUserFriendlyFileName");

	Params::WB_SaveLoadScreen_C_GetUserFriendlyFileName Parms{};

	Parms.OldName = std::move(OldName);

	UObject::ProcessEvent(Func, &Parms);

	if (UserFriendly != nullptr)
		*UserFriendly = std::move(Parms.UserFriendly);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.DeleteItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::DeleteItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "DeleteItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetValidFileName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UWB_SaveLoadScreen_C::GetValidFileName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetValidFileName");

	Params::WB_SaveLoadScreen_C_GetValidFileName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.Get_Save_bIsEnabled_0
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_SaveLoadScreen_C::Get_Save_bIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "Get_Save_bIsEnabled_0");

	Params::WB_SaveLoadScreen_C_Get_Save_bIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.Valid_Save_Selected_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_SaveLoadScreen_C::Valid_Save_Selected_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "Valid_Save_Selected_0");

	Params::WB_SaveLoadScreen_C_Valid_Save_Selected_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.SaveEntryClicked
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameRuleName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UB_SaveEntryData_C*               Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::SaveEntryClicked(const class FString& GameRuleName, class UB_SaveEntryData_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "SaveEntryClicked");

	Params::WB_SaveLoadScreen_C_SaveEntryClicked Parms{};

	Parms.GameRuleName = std::move(GameRuleName);
	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.RefreshSaveEntryList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::RefreshSaveEntryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "RefreshSaveEntryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GetVisibility_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_SaveLoadScreen_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GetVisibility_0");

	Params::WB_SaveLoadScreen_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_Save_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.SaveAnswered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_QuestionAnswer                        Answer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::SaveAnswered(E_QuestionAnswer Answer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "SaveAnswered");

	Params::WB_SaveLoadScreen_C_SaveAnswered Parms{};

	Parms.Answer = Answer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_Load_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_Load_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_Load_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_Delete_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_Delete_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_Delete_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.DeleteAnswered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_QuestionAnswer                        Answer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::DeleteAnswered(E_QuestionAnswer Answer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "DeleteAnswered");

	Params::WB_SaveLoadScreen_C_DeleteAnswered Parms{};

	Parms.Answer = Answer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::WB_SaveLoadScreen_C_BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnApply
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_RuleList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_RuleList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_RuleList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::WB_SaveLoadScreen_C_BndEvt__WB_SaveLoadRules_RuleList_K2Node_ComponentBoundEvent_7_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_SaveLoadScreen_C::BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::WB_SaveLoadScreen_C_BndEvt__WB_SaveLoadRules_GameRulesName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "PreConstruct");

	Params::WB_SaveLoadScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.LoadEvent
// (BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::LoadEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "LoadEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.GamepadTextInputFocus
// (BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::GamepadTextInputFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "GamepadTextInputFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.OnEmptyEntryLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_SaveLoadScreen_C::OnEmptyEntryLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "OnEmptyEntryLoaded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_SaveLoadScreen.WB_SaveLoadScreen_C.ExecuteUbergraph_WB_SaveLoadScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_SaveLoadScreen_C::ExecuteUbergraph_WB_SaveLoadScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_SaveLoadScreen_C", "ExecuteUbergraph_WB_SaveLoadScreen");

	Params::WB_SaveLoadScreen_C_ExecuteUbergraph_WB_SaveLoadScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
