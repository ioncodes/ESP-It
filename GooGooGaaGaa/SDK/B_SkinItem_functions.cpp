#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SkinItem

#include "Basic.hpp"

#include "B_SkinItem_classes.hpp"
#include "B_SkinItem_parameters.hpp"


namespace SDK
{

// Function B_SkinItem.B_SkinItem_C.UpdateSkeletalMeshOptimizations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_SkinItem_C::UpdateSkeletalMeshOptimizations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinItem_C", "UpdateSkeletalMeshOptimizations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SkinItem.B_SkinItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SkinItem_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinItem_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SkinItem.B_SkinItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SkinItem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinItem_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SkinItem.B_SkinItem_C.ExecuteUbergraph_B_SkinItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SkinItem_C::ExecuteUbergraph_B_SkinItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SkinItem_C", "ExecuteUbergraph_B_SkinItem");

	Params::B_SkinItem_C_ExecuteUbergraph_B_SkinItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

