#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MultiStaticMeshProp

#include "Basic.hpp"

#include "B_MultiStaticMeshProp_classes.hpp"
#include "B_MultiStaticMeshProp_parameters.hpp"


namespace SDK
{

// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.GetRippleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*                   RippleEffectNiagara                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::GetRippleEffect(class UNiagaraSystem** RippleEffectNiagara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "GetRippleEffect");

	Params::B_MultiStaticMeshProp_C_GetRippleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RippleEffectNiagara != nullptr)
		*RippleEffectNiagara = Parms.RippleEffectNiagara;
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.GetVisualInterpolators
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AB_VisualIntepolator_C*>   VisualInterpolators                                    (Parm, OutParm)

void AB_MultiStaticMeshProp_C::GetVisualInterpolators(TArray<class AB_VisualIntepolator_C*>* VisualInterpolators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "GetVisualInterpolators");

	Params::B_MultiStaticMeshProp_C_GetVisualInterpolators Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VisualInterpolators != nullptr)
		*VisualInterpolators = std::move(Parms.VisualInterpolators);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.RefreshHighlight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlightable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::RefreshHighlight(bool* Highlightable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "RefreshHighlight");

	Params::B_MultiStaticMeshProp_C_RefreshHighlight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Highlightable != nullptr)
		*Highlightable = Parms.Highlightable;
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.SetupMultiMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::SetupMultiMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "SetupMultiMeshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.Jump
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    JumpSuccess                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::Jump(bool* JumpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "Jump");

	Params::B_MultiStaticMeshProp_C_Jump Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpSuccess != nullptr)
		*JumpSuccess = Parms.JumpSuccess;
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.Stop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         WantedRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ForcedOutput                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::Stop(bool Start, const struct FRotator& WantedRotation, bool* ForcedOutput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "Stop");

	Params::B_MultiStaticMeshProp_C_Stop Parms{};

	Parms.Start = Start;
	Parms.WantedRotation = std::move(WantedRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedOutput != nullptr)
		*ForcedOutput = Parms.ForcedOutput;
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.Move
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedOutput                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::Move(const struct FVector& Vector, bool* ForcedOutput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "Move");

	Params::B_MultiStaticMeshProp_C_Move Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedOutput != nullptr)
		*ForcedOutput = Parms.ForcedOutput;
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_MultiStaticMeshProp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.AttachSpringArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PropPawnPhysics_C*             Witch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::AttachSpringArm(class AB_PropPawnPhysics_C* Witch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "AttachSpringArm");

	Params::B_MultiStaticMeshProp_C_AttachSpringArm Parms{};

	Parms.Witch = Witch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.UpdatePhysicsType
// (Public, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::UpdatePhysicsType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "UpdatePhysicsType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.RestoreVelocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSRuntimePropData                RuntimePropData                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::RestoreVelocity(const struct FSRuntimePropData& RuntimePropData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "RestoreVelocity");

	Params::B_MultiStaticMeshProp_C_RestoreVelocity Parms{};

	Parms.RuntimePropData = std::move(RuntimePropData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.PutToSleep
// (Public, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::PutToSleep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "PutToSleep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.SetHighlightChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHighlightChannel                       Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::SetHighlightChannel(EHighlightChannel Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "SetHighlightChannel");

	Params::B_MultiStaticMeshProp_C_SetHighlightChannel Parms{};

	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.ResetPhysicsType
// (Public, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::ResetPhysicsType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "ResetPhysicsType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.ResetVisualInterpolation
// (Public, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::ResetVisualInterpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "ResetVisualInterpolation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.SelectForEditing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     EditingPlayerState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    KeepOtherPropsSleep                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::SelectForEditing(class APlayerState* EditingPlayerState, bool KeepOtherPropsSleep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "SelectForEditing");

	Params::B_MultiStaticMeshProp_C_SelectForEditing Parms{};

	Parms.EditingPlayerState = EditingPlayerState;
	Parms.KeepOtherPropsSleep = KeepOtherPropsSleep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.UnselectFromEditing
// (Public, BlueprintCallable, BlueprintEvent)

void AB_MultiStaticMeshProp_C::UnselectFromEditing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "UnselectFromEditing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_MultiStaticMeshProp.B_MultiStaticMeshProp_C.ExecuteUbergraph_B_MultiStaticMeshProp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MultiStaticMeshProp_C::ExecuteUbergraph_B_MultiStaticMeshProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MultiStaticMeshProp_C", "ExecuteUbergraph_B_MultiStaticMeshProp");

	Params::B_MultiStaticMeshProp_C_ExecuteUbergraph_B_MultiStaticMeshProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
