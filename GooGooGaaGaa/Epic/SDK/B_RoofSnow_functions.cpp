#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RoofSnow

#include "Basic.hpp"

#include "B_RoofSnow_classes.hpp"
#include "B_RoofSnow_parameters.hpp"


namespace SDK
{

// Function B_RoofSnow.B_RoofSnow_C.DrawCollision
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_RoofSnow_C::DrawCollision(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RoofSnow_C", "DrawCollision");

	Params::B_RoofSnow_C_DrawCollision Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_RoofSnow.B_RoofSnow_C.ExecuteUbergraph_B_RoofSnow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_RoofSnow_C::ExecuteUbergraph_B_RoofSnow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RoofSnow_C", "ExecuteUbergraph_B_RoofSnow");

	Params::B_RoofSnow_C_ExecuteUbergraph_B_RoofSnow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_RoofSnow.B_RoofSnow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_RoofSnow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_RoofSnow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
