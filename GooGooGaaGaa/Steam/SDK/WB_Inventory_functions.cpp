#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Inventory

#include "Basic.hpp"

#include "WB_Inventory_classes.hpp"
#include "WB_Inventory_parameters.hpp"


namespace SDK
{

// Function WB_Inventory.WB_Inventory_C.RefreshItemsWithoutRedraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WithFocus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::RefreshItemsWithoutRedraw(bool WithFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "RefreshItemsWithoutRedraw");

	Params::WB_Inventory_C_RefreshItemsWithoutRedraw Parms{};

	Parms.WithFocus = WithFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Inventory.WB_Inventory_C.UpdateTheirInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::UpdateTheirInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "UpdateTheirInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.UpdateMyInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::UpdateMyInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "UpdateMyInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.Get_ShoulderIcon_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWB_Inventory_C::Get_ShoulderIcon_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "Get_ShoulderIcon_Visibility");

	Params::WB_Inventory_C_Get_ShoulderIcon_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Inventory.WB_Inventory_C.GetOwnsRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OwnsRecipe                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::GetOwnsRecipe(const int32& ItemToFind, bool* OwnsRecipe)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetOwnsRecipe");

	Params::WB_Inventory_C_GetOwnsRecipe Parms{};

	Parms.ItemToFind = ItemToFind;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnsRecipe != nullptr)
		*OwnsRecipe = Parms.OwnsRecipe;
}


// Function WB_Inventory.WB_Inventory_C.GetItemQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Quantity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::GetItemQuantity(int32 ItemId, int32* Quantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetItemQuantity");

	Params::WB_Inventory_C_GetItemQuantity Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (Quantity != nullptr)
		*Quantity = Parms.Quantity;
}


// Function WB_Inventory.WB_Inventory_C.GetRecipeItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_RecipeInfo>            RecipeItems                                            (Parm, OutParm)

void UWB_Inventory_C::GetRecipeItems(TArray<struct FS_RecipeInfo>* RecipeItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetRecipeItems");

	Params::WB_Inventory_C_GetRecipeItems Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RecipeItems != nullptr)
		*RecipeItems = std::move(Parms.RecipeItems);
}


// Function WB_Inventory.WB_Inventory_C.GetSkinItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FS_ItemInfo>              SkinsItems                                             (Parm, OutParm)

void UWB_Inventory_C::GetSkinItems(TArray<struct FS_ItemInfo>* SkinsItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetSkinItems");

	Params::WB_Inventory_C_GetSkinItems Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkinsItems != nullptr)
		*SkinsItems = std::move(Parms.SkinsItems);
}


// Function WB_Inventory.WB_Inventory_C.ResetFilter
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::ResetFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "ResetFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.FilterRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_RecipeInfo                    RecipeInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Remove                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::FilterRecipe(const struct FS_RecipeInfo& RecipeInfo, bool* Remove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "FilterRecipe");

	Params::WB_Inventory_C_FilterRecipe Parms{};

	Parms.RecipeInfo = std::move(RecipeInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;
}


// Function WB_Inventory.WB_Inventory_C.FilterItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_ItemInfo                      ItemInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    Remove                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::FilterItem(const struct FS_ItemInfo& ItemInfo, bool* Remove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "FilterItem");

	Params::WB_Inventory_C_FilterItem Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (Remove != nullptr)
		*Remove = Parms.Remove;
}


// Function WB_Inventory.WB_Inventory_C.GetIndividualItemDataAndFocus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      CategoryButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ESalvageCategory                        SalvageCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UB_TileViewData_C*>        Data                                                   (Parm, OutParm)
// TArray<bool>                            FocusNeeded                                            (Parm, OutParm)

void UWB_Inventory_C::GetIndividualItemDataAndFocus(class UUserWidget* CategoryButton, ESalvageCategory SalvageCategory, TArray<class UB_TileViewData_C*>* Data, TArray<bool>* FocusNeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetIndividualItemDataAndFocus");

	Params::WB_Inventory_C_GetIndividualItemDataAndFocus Parms{};

	Parms.CategoryButton = CategoryButton;
	Parms.SalvageCategory = SalvageCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);

	if (FocusNeeded != nullptr)
		*FocusNeeded = std::move(Parms.FocusNeeded);
}


// Function WB_Inventory.WB_Inventory_C.GetTileView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTileView*                        TileView_0                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::GetTileView(class UTileView** TileView_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "GetTileView");

	Params::WB_Inventory_C_GetTileView Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TileView_0 != nullptr)
		*TileView_0 = Parms.TileView_0;
}


// Function WB_Inventory.WB_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Inventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.OnBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::OnBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "OnBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__Back_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__WB_Inventory_Back_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__WB_Inventory_TabButton_Outgoing_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__WB_Inventory_TabButton_Outgoing_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__WB_Inventory_TabButton_Outgoing_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__WB_Inventory_TabButton_Incoming_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__WB_Inventory_TabButton_Incoming_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__WB_Inventory_TabButton_Incoming_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.OnSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::OnSpecialAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "OnSpecialAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.OnRequestInventoryCompleted_Event
// (BlueprintCallable, BlueprintEvent)

void UWB_Inventory_C::OnRequestInventoryCompleted_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "OnRequestInventoryCompleted_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.BndEvt__WB_Inventory_Reset_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)

void UWB_Inventory_C::BndEvt__WB_Inventory_Reset_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "BndEvt__WB_Inventory_Reset_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Inventory.WB_Inventory_C.ExecuteUbergraph_WB_Inventory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Inventory_C::ExecuteUbergraph_WB_Inventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Inventory_C", "ExecuteUbergraph_WB_Inventory");

	Params::WB_Inventory_C_ExecuteUbergraph_WB_Inventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
