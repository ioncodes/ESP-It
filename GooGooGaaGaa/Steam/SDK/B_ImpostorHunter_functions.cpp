#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ImpostorHunter

#include "Basic.hpp"

#include "B_ImpostorHunter_classes.hpp"
#include "B_ImpostorHunter_parameters.hpp"


namespace SDK
{

// Function B_ImpostorHunter.B_ImpostorHunter_C.DestroyVoteCamera
// (BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::DestroyVoteCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "DestroyVoteCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.ExecuteUbergraph_B_ImpostorHunter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::ExecuteUbergraph_B_ImpostorHunter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "ExecuteUbergraph_B_ImpostorHunter");

	Params::B_ImpostorHunter_C_ExecuteUbergraph_B_ImpostorHunter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.InitPlayername
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::InitPlayername()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "InitPlayername");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.InpActEvt_Fire_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_ImpostorHunter_C::InpActEvt_Fire_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "InpActEvt_Fire_K2Node_InputActionEvent_0");

	Params::B_ImpostorHunter_C_InpActEvt_Fire_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_ImpostorHunter_C::InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "InpActEvt_Fire_K2Node_InputActionEvent_1");

	Params::B_ImpostorHunter_C_InpActEvt_Fire_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.LoadSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Controller_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::LoadSkills(class AController* Controller_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "LoadSkills");

	Params::B_ImpostorHunter_C_LoadSkills Parms{};

	Parms.Controller_0 = Controller_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.LoadSkinsServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimaryAssetId                  HeadSkinClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  UpperBodySkinClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  LowerBodySkinClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  HatSkinClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  RangedWeaponSkinClass                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  MeleeWeaponSkinClass                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId                  SkinColorSkinClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::LoadSkinsServer(const struct FPrimaryAssetId& HeadSkinClass, const struct FPrimaryAssetId& UpperBodySkinClass, const struct FPrimaryAssetId& LowerBodySkinClass, const struct FPrimaryAssetId& HatSkinClass, const struct FPrimaryAssetId& RangedWeaponSkinClass, const struct FPrimaryAssetId& MeleeWeaponSkinClass, const struct FPrimaryAssetId& SkinColorSkinClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "LoadSkinsServer");

	Params::B_ImpostorHunter_C_LoadSkinsServer Parms{};

	Parms.HeadSkinClass = std::move(HeadSkinClass);
	Parms.UpperBodySkinClass = std::move(UpperBodySkinClass);
	Parms.LowerBodySkinClass = std::move(LowerBodySkinClass);
	Parms.HatSkinClass = std::move(HatSkinClass);
	Parms.RangedWeaponSkinClass = std::move(RangedWeaponSkinClass);
	Parms.MeleeWeaponSkinClass = std::move(MeleeWeaponSkinClass);
	Parms.SkinColorSkinClass = std::move(SkinColorSkinClass);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.MeetingMontageMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::MeetingMontageMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "MeetingMontageMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.MeetingMontageServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::MeetingMontageServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "MeetingMontageServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnBlendOut_0F49F8E54A1C01D08D27A3B6F539057F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnBlendOut_0F49F8E54A1C01D08D27A3B6F539057F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnBlendOut_0F49F8E54A1C01D08D27A3B6F539057F");

	Params::B_ImpostorHunter_C_OnBlendOut_0F49F8E54A1C01D08D27A3B6F539057F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnBlendOut_EF630AE44486DF9984CFA1AC53D5774B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnBlendOut_EF630AE44486DF9984CFA1AC53D5774B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnBlendOut_EF630AE44486DF9984CFA1AC53D5774B");

	Params::B_ImpostorHunter_C_OnBlendOut_EF630AE44486DF9984CFA1AC53D5774B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnCompleted_0F49F8E54A1C01D08D27A3B6F539057F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnCompleted_0F49F8E54A1C01D08D27A3B6F539057F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnCompleted_0F49F8E54A1C01D08D27A3B6F539057F");

	Params::B_ImpostorHunter_C_OnCompleted_0F49F8E54A1C01D08D27A3B6F539057F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnCompleted_EF630AE44486DF9984CFA1AC53D5774B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnCompleted_EF630AE44486DF9984CFA1AC53D5774B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnCompleted_EF630AE44486DF9984CFA1AC53D5774B");

	Params::B_ImpostorHunter_C_OnCompleted_EF630AE44486DF9984CFA1AC53D5774B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnInterrupted_0F49F8E54A1C01D08D27A3B6F539057F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnInterrupted_0F49F8E54A1C01D08D27A3B6F539057F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnInterrupted_0F49F8E54A1C01D08D27A3B6F539057F");

	Params::B_ImpostorHunter_C_OnInterrupted_0F49F8E54A1C01D08D27A3B6F539057F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnInterrupted_EF630AE44486DF9984CFA1AC53D5774B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnInterrupted_EF630AE44486DF9984CFA1AC53D5774B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnInterrupted_EF630AE44486DF9984CFA1AC53D5774B");

	Params::B_ImpostorHunter_C_OnInterrupted_EF630AE44486DF9984CFA1AC53D5774B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnNotifyBegin_0F49F8E54A1C01D08D27A3B6F539057F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnNotifyBegin_0F49F8E54A1C01D08D27A3B6F539057F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnNotifyBegin_0F49F8E54A1C01D08D27A3B6F539057F");

	Params::B_ImpostorHunter_C_OnNotifyBegin_0F49F8E54A1C01D08D27A3B6F539057F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnNotifyBegin_EF630AE44486DF9984CFA1AC53D5774B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnNotifyBegin_EF630AE44486DF9984CFA1AC53D5774B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnNotifyBegin_EF630AE44486DF9984CFA1AC53D5774B");

	Params::B_ImpostorHunter_C_OnNotifyBegin_EF630AE44486DF9984CFA1AC53D5774B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnNotifyEnd_0F49F8E54A1C01D08D27A3B6F539057F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnNotifyEnd_0F49F8E54A1C01D08D27A3B6F539057F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnNotifyEnd_0F49F8E54A1C01D08D27A3B6F539057F");

	Params::B_ImpostorHunter_C_OnNotifyEnd_0F49F8E54A1C01D08D27A3B6F539057F Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.OnNotifyEnd_EF630AE44486DF9984CFA1AC53D5774B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::OnNotifyEnd_EF630AE44486DF9984CFA1AC53D5774B(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "OnNotifyEnd_EF630AE44486DF9984CFA1AC53D5774B");

	Params::B_ImpostorHunter_C_OnNotifyEnd_EF630AE44486DF9984CFA1AC53D5774B Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "ReceivePossessed");

	Params::B_ImpostorHunter_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "ReceiveTick");

	Params::B_ImpostorHunter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.ReceiveUnpossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "ReceiveUnpossessed");

	Params::B_ImpostorHunter_C_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.RemovePortalHighlightsClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::RemovePortalHighlightsClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "RemovePortalHighlightsClient");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.ReplicateSkinData
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::ReplicateSkinData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "ReplicateSkinData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.SetCameraView
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::SetCameraView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "SetCameraView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.SetControlRotation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ImpostorHunter_C::SetControlRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "SetControlRotation");

	Params::B_ImpostorHunter_C_SetControlRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.StartVoteMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::StartVoteMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "StartVoteMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.StopVoteMode
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::StopVoteMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "StopVoteMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.TickIdle
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::TickIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "TickIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.TickOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::TickOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "TickOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.TickVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::TickVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "TickVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.Toggle Lantern Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SetVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ImpostorHunter_C::Toggle_Lantern_Visibility(bool SetVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "Toggle Lantern Visibility");

	Params::B_ImpostorHunter_C_Toggle_Lantern_Visibility Parms{};

	Parms.SetVisible = SetVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.UnpossessedMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::UnpossessedMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "UnpossessedMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_ImpostorHunter.B_ImpostorHunter_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ImpostorHunter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ImpostorHunter_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
