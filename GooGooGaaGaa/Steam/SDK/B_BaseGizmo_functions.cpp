#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BaseGizmo

#include "Basic.hpp"

#include "B_BaseGizmo_classes.hpp"
#include "B_BaseGizmo_parameters.hpp"


namespace SDK
{

// Function B_BaseGizmo.B_BaseGizmo_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// E_Axis                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseGizmo_C::SetColor(class UMeshComponent* MeshComponent, E_Axis Axis, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGizmo_C", "SetColor");

	Params::B_BaseGizmo_C_SetColor Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.Axis = Axis;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BaseGizmo.B_BaseGizmo_C.SetHighlightAxis
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Axis                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForcedBool                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseGizmo_C::SetHighlightAxis(E_Axis Axis, bool* ForcedBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGizmo_C", "SetHighlightAxis");

	Params::B_BaseGizmo_C_SetHighlightAxis Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcedBool != nullptr)
		*ForcedBool = Parms.ForcedBool;
}


// Function B_BaseGizmo.B_BaseGizmo_C.SetMultipleColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>           MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// E_Axis                                  Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BaseGizmo_C::SetMultipleColors(TArray<class UMeshComponent*>& MeshComponent, E_Axis Axis, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BaseGizmo_C", "SetMultipleColors");

	Params::B_BaseGizmo_C_SetMultipleColors Parms{};

	Parms.MeshComponent = std::move(MeshComponent);
	Parms.Axis = Axis;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

	MeshComponent = std::move(Parms.MeshComponent);
}

}
