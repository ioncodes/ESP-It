#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BaseInstrumentProp

#include "Basic.hpp"

#include "B_BaseInstrumentProp_classes.hpp"
#include "B_BaseInstrumentProp_parameters.hpp"


namespace SDK
{

// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.InitializeActionProp
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BaseInstrumentProp_C::InitializeActionProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "InitializeActionProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.ApplyTemplateData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Template                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBoolean                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseInstrumentProp_C::ApplyTemplateData(class AActor* Template, bool* ForcedBoolean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "ApplyTemplateData");

	Params::B_BaseInstrumentProp_C_ApplyTemplateData Parms{};

	Parms.Template = Template;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBoolean != nullptr)
		*ForcedBoolean = Parms.ForcedBoolean;
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.StartPlayingOrJoinMusic
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Join                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseInstrumentProp_C::StartPlayingOrJoinMusic(bool Join)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "StartPlayingOrJoinMusic");

	Params::B_BaseInstrumentProp_C_StartPlayingOrJoinMusic Parms{};

	Parms.Join = Join;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.DeactivateActionProp
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BaseInstrumentProp_C::DeactivateActionProp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "DeactivateActionProp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.ActivateActionProp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseInstrumentProp_C::ActivateActionProp(bool Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "ActivateActionProp");

	Params::B_BaseInstrumentProp_C_ActivateActionProp Parms{};

	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BaseInstrumentProp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.TurnMusicOn
// (BlueprintCallable, BlueprintEvent)

void AB_BaseInstrumentProp_C::TurnMusicOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "TurnMusicOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_BaseInstrumentProp_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BaseInstrumentProp.B_BaseInstrumentProp_C.ExecuteUbergraph_B_BaseInstrumentProp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseInstrumentProp_C::ExecuteUbergraph_B_BaseInstrumentProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseInstrumentProp_C", "ExecuteUbergraph_B_BaseInstrumentProp");

	Params::B_BaseInstrumentProp_C_ExecuteUbergraph_B_BaseInstrumentProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
