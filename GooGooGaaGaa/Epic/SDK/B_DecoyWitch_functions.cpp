#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DecoyWitch

#include "Basic.hpp"

#include "B_DecoyWitch_classes.hpp"
#include "B_DecoyWitch_parameters.hpp"


namespace SDK
{

// Function B_DecoyWitch.B_DecoyWitch_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::BindOnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "BindOnDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_DecoyWitch_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_DecoyWitch_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.EnableHighlightForOwner
// (BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::EnableHighlightForOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "EnableHighlightForOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.ExecuteUbergraph_B_DecoyWitch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::ExecuteUbergraph_B_DecoyWitch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "ExecuteUbergraph_B_DecoyWitch");

	Params::B_DecoyWitch_C_ExecuteUbergraph_B_DecoyWitch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Fast                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::FadeOut(bool Fast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "FadeOut");

	Params::B_DecoyWitch_C_FadeOut Parms{};

	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.FadeOutMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Fast                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TrappedInVacuum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::FadeOutMulti(bool Fast, bool TrappedInVacuum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "FadeOutMulti");

	Params::B_DecoyWitch_C_FadeOutMulti Parms{};

	Parms.Fast = Fast;
	Parms.TrappedInVacuum = TrappedInVacuum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.HandleMoveToTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::HandleMoveToTargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "HandleMoveToTargetLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.HandleOverlap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          OtherActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::HandleOverlap(const class UObject* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "HandleOverlap");

	Params::B_DecoyWitch_C_HandleOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.InitializeSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::InitializeSkin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "InitializeSkin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.OwnerDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::OwnerDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "OwnerDestroy");

	Params::B_DecoyWitch_C_OwnerDestroy Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_DecoyWitch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_DecoyWitch_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "ReceiveTick");

	Params::B_DecoyWitch_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.RefreshHighlight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlightable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::RefreshHighlight(bool* Highlightable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "RefreshHighlight");

	Params::B_DecoyWitch_C_RefreshHighlight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Highlightable != nullptr)
		*Highlightable = Parms.Highlightable;
}


// Function B_DecoyWitch.B_DecoyWitch_C.RemoveAimAssistOnDedicatedServer
// (Public, BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::RemoveAimAssistOnDedicatedServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "RemoveAimAssistOnDedicatedServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.SetHighlight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Highlighted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBoolean                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::SetHighlight(bool Highlighted, bool* ForcedBoolean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "SetHighlight");

	Params::B_DecoyWitch_C_SetHighlight Parms{};

	Parms.Highlighted = Highlighted;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBoolean != nullptr)
		*ForcedBoolean = Parms.ForcedBoolean;
}


// Function B_DecoyWitch.B_DecoyWitch_C.SetHighlightChannel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHighlightChannel                       Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_DecoyWitch_C::SetHighlightChannel(EHighlightChannel Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "SetHighlightChannel");

	Params::B_DecoyWitch_C_SetHighlightChannel Parms{};

	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_DecoyWitch.B_DecoyWitch_C.TickFadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::TickFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "TickFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_DecoyWitch.B_DecoyWitch_C.TickFadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void AB_DecoyWitch_C::TickFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_DecoyWitch_C", "TickFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

