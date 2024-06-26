#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CraftingDetails

#include "Basic.hpp"

#include "WB_CraftingDetails_classes.hpp"
#include "WB_CraftingDetails_parameters.hpp"


namespace SDK
{

// Function WB_CraftingDetails.WB_CraftingDetails_C.BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_CraftingDetails_C::BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.CheckIngredientSufficiency
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_CraftingDetails_C::CheckIngredientSufficiency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "CheckIngredientSufficiency");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_CraftingDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.CraftItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_CraftingDetails_C::CraftItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "CraftItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.ExecuteUbergraph_WB_CraftingDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CraftingDetails_C::ExecuteUbergraph_WB_CraftingDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "ExecuteUbergraph_WB_CraftingDetails");

	Params::WB_CraftingDetails_C_ExecuteUbergraph_WB_CraftingDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.Get_Description_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_CraftingDetails_C::Get_Description_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "Get_Description_Text_0");

	Params::WB_CraftingDetails_C_Get_Description_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_CraftingDetails_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "GetVisibility_0");

	Params::WB_CraftingDetails_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_CraftingDetails_C::GetVisibility_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "GetVisibility_1");

	Params::WB_CraftingDetails_C_GetVisibility_1 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.IngredientsAreSpawned
// (BlueprintCallable, BlueprintEvent)

void UWB_CraftingDetails_C::IngredientsAreSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "IngredientsAreSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.ItemsCrafted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCraftResult                        ItemCraftResult                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_CraftingDetails_C::ItemsCrafted(EItemCraftResult ItemCraftResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "ItemsCrafted");

	Params::WB_CraftingDetails_C_ItemsCrafted Parms{};

	Parms.ItemCraftResult = ItemCraftResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_CraftingDetails.WB_CraftingDetails_C.UpdateRecipeAndDetailsIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_CraftingDetails_C::UpdateRecipeAndDetailsIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_CraftingDetails_C", "UpdateRecipeAndDetailsIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}

