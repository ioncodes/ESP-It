#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_TaskTargetActor

#include "Basic.hpp"

#include "B_TaskTargetActor_classes.hpp"
#include "B_TaskTargetActor_parameters.hpp"


namespace SDK
{

// Function B_TaskTargetActor.B_TaskTargetActor_C.Act
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::Act()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "Act");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.PickMesh
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMesh*                      Static_Mesh                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_TaskTargetActor_C::PickMesh(class UStaticMesh** Static_Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "PickMesh");

	Params::B_TaskTargetActor_C_PickMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Static_Mesh != nullptr)
		*Static_Mesh = Parms.Static_Mesh;
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.React
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::React()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "React");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TaskTargetActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.RemoveHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::RemoveHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "RemoveHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "Highlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.UpdateRotation
// (Protected, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::UpdateRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "UpdateRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.UpdateMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::UpdateMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "UpdateMesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TaskTargetActor_C::Interact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "Interact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_TaskTargetActor.B_TaskTargetActor_C.ExecuteUbergraph_B_TaskTargetActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TaskTargetActor_C::ExecuteUbergraph_B_TaskTargetActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_TaskTargetActor_C", "ExecuteUbergraph_B_TaskTargetActor");

	Params::B_TaskTargetActor_C_ExecuteUbergraph_B_TaskTargetActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

