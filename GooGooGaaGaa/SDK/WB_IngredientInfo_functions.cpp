#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_IngredientInfo

#include "Basic.hpp"

#include "WB_IngredientInfo_classes.hpp"
#include "WB_IngredientInfo_parameters.hpp"


namespace SDK
{

// Function WB_IngredientInfo.WB_IngredientInfo_C.ForceIngredientCountFromInventoryManagerDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_IngredientInfo_C::ForceIngredientCountFromInventoryManagerDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "ForceIngredientCountFromInventoryManagerDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.SpawnIngredients
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FB_Ingredient>            Ingredients                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AB_CraftingScene_C*               InCraftingScene                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_IngredientInfo_C::SpawnIngredients(TArray<struct FB_Ingredient>& Ingredients, class AB_CraftingScene_C* InCraftingScene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "SpawnIngredients");

	Params::WB_IngredientInfo_C_SpawnIngredients Parms{};

	Parms.Ingredients = std::move(Ingredients);
	Parms.InCraftingScene = InCraftingScene;

	UObject::ProcessEvent(Func, &Parms);

	Ingredients = std::move(Parms.Ingredients);
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.Get_QuantityLabel_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UWB_IngredientInfo_C::Get_QuantityLabel_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "Get_QuantityLabel_ColorAndOpacity_0");

	Params::WB_IngredientInfo_C_Get_QuantityLabel_ColorAndOpacity_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.Get_IngredientIcon_Brush_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWB_IngredientInfo_C::Get_IngredientIcon_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "Get_IngredientIcon_Brush_0");

	Params::WB_IngredientInfo_C_Get_IngredientIcon_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.Get_Quantity_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWB_IngredientInfo_C::Get_Quantity_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "Get_Quantity_Text_0");

	Params::WB_IngredientInfo_C_Get_Quantity_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.CountIngredient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Ingredients                           Ingredient_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_IngredientInfo_C::CountIngredient(E_Ingredients Ingredient_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "CountIngredient");

	Params::WB_IngredientInfo_C_CountIngredient Parms{};

	Parms.Ingredient_0 = Ingredient_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.IncredientsSpawned
// (BlueprintCallable, BlueprintEvent)

void UWB_IngredientInfo_C::IncredientsSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "IncredientsSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_IngredientInfo.WB_IngredientInfo_C.ExecuteUbergraph_WB_IngredientInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_IngredientInfo_C::ExecuteUbergraph_WB_IngredientInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_IngredientInfo_C", "ExecuteUbergraph_WB_IngredientInfo");

	Params::WB_IngredientInfo_C_ExecuteUbergraph_WB_IngredientInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

