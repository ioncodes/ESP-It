#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MenuTileViewManager

#include "Basic.hpp"

#include "B_MenuTileViewManager_classes.hpp"
#include "B_MenuTileViewManager_parameters.hpp"


namespace SDK
{

// Function B_MenuTileViewManager.B_MenuTileViewManager_C.AddItemToTileView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTileView*                        TileView                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_TileViewData_C*                ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    FocusNeeded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::AddItemToTileView(class UTileView* TileView, class UB_TileViewData_C* ItemData, bool FocusNeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "AddItemToTileView");

	Params::B_MenuTileViewManager_C_AddItemToTileView Parms{};

	Parms.TileView = TileView;
	Parms.ItemData = ItemData;
	Parms.FocusNeeded = FocusNeeded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.ClearTileView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTileView*                        TileView                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::ClearTileView(class UTileView* TileView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "ClearTileView");

	Params::B_MenuTileViewManager_C_ClearTileView Parms{};

	Parms.TileView = TileView;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetMapButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    HasInitialFocusOrSelection                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSMapData                        MapData                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_PropLayoutData                LayoutData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    MapCycleIsEditable                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_MapButtonData_C*               Data                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetMapButtonData(bool HasInitialFocusOrSelection, class UUserWidget* Parent, const struct FSMapData& MapData, const struct FS_PropLayoutData& LayoutData, bool MapCycleIsEditable, class UB_MapButtonData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetMapButtonData");

	Params::B_MenuTileViewManager_C_GetMapButtonData Parms{};

	Parms.HasInitialFocusOrSelection = HasInitialFocusOrSelection;
	Parms.Parent = Parent;
	Parms.MapData = std::move(MapData);
	Parms.LayoutData = std::move(LayoutData);
	Parms.MapCycleIsEditable = MapCycleIsEditable;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetMaterialButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_BasePlaceableMaterialOverwrite_C*MaterialOverwrite                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       MaterialIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UB_MaterialButtonData_C*          MaterialButtonData                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetMaterialButtonData(class UUserWidget* Parent, bool IsInitial, class UMaterialInterface* Material, class UB_BasePlaceableMaterialOverwrite_C* MaterialOverwrite, int32 SlotIndex, class UTexture2D* MaterialIcon, class UB_MaterialButtonData_C** MaterialButtonData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetMaterialButtonData");

	Params::B_MenuTileViewManager_C_GetMaterialButtonData Parms{};

	Parms.Parent = Parent;
	Parms.IsInitial = IsInitial;
	Parms.Material = Material;
	Parms.MaterialOverwrite = MaterialOverwrite;
	Parms.SlotIndex = SlotIndex;
	Parms.MaterialIcon = MaterialIcon;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialButtonData != nullptr)
		*MaterialButtonData = Parms.MaterialButtonData;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetModButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_GameModifierType                      Modifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasInitialFocus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_ModButtonData_C*               ButtonData                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetModButtonData(E_GameModifierType Modifier, bool HasInitialFocus, class UUserWidget* Parent, class UB_ModButtonData_C** ButtonData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetModButtonData");

	Params::B_MenuTileViewManager_C_GetModButtonData Parms{};

	Parms.Modifier = Modifier;
	Parms.HasInitialFocus = HasInitialFocus;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonData != nullptr)
		*ButtonData = Parms.ButtonData;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetPowerupButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_PowerupRuleType                       Powerup                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasInitialFocus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_PowerupButtonData_C*           ButtonData                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetPowerupButtonData(E_PowerupRuleType Powerup, bool HasInitialFocus, class UUserWidget* Parent, class UB_PowerupButtonData_C** ButtonData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetPowerupButtonData");

	Params::B_MenuTileViewManager_C_GetPowerupButtonData Parms{};

	Parms.Powerup = Powerup;
	Parms.HasInitialFocus = HasInitialFocus;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonData != nullptr)
		*ButtonData = Parms.ButtonData;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetPropButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   PropID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UnlockedByDefault                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Structure                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FPrefabToSave                    Prefab                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UB_PropButtonData_C*              Data                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetPropButtonData(int32 PropID, bool UnlockedByDefault, bool IsInitial, class UClass* Structure, class UUserWidget* Parent, const struct FPrefabToSave& Prefab, class UB_PropButtonData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetPropButtonData");

	Params::B_MenuTileViewManager_C_GetPropButtonData Parms{};

	Parms.PropID = PropID;
	Parms.UnlockedByDefault = UnlockedByDefault;
	Parms.IsInitial = IsInitial;
	Parms.Structure = Structure;
	Parms.Parent = Parent;
	Parms.Prefab = std::move(Prefab);

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetSkillButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    HasInitialFocus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           SkillClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_SkillButtonData_C*             ButtonData                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetSkillButtonData(bool HasInitialFocus, class UClass* SkillClass, class UUserWidget* Parent, class UB_SkillButtonData_C** ButtonData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetSkillButtonData");

	Params::B_MenuTileViewManager_C_GetSkillButtonData Parms{};

	Parms.HasInitialFocus = HasInitialFocus;
	Parms.SkillClass = SkillClass;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonData != nullptr)
		*ButtonData = Parms.ButtonData;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetSkinConfigButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    HasInitialFocusOrSelection                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   SkinConfigNr                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_SkinConfigButtonData_C*        Data                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetSkinConfigButtonData(bool HasInitialFocusOrSelection, class UUserWidget* Parent, int32 SkinConfigNr, class UB_SkinConfigButtonData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetSkinConfigButtonData");

	Params::B_MenuTileViewManager_C_GetSkinConfigButtonData Parms{};

	Parms.HasInitialFocusOrSelection = HasInitialFocusOrSelection;
	Parms.Parent = Parent;
	Parms.SkinConfigNr = SkinConfigNr;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetSkinOrRecipeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_ItemInfo                      SkinInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_RecipeInfo                    RecipeInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    HasInitialFocusOrSelection                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_SkinOrRecipeItemData_C*        Data                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetSkinOrRecipeData(const struct FS_ItemInfo& SkinInfo, const struct FS_RecipeInfo& RecipeInfo, bool HasInitialFocusOrSelection, class UUserWidget* Parent, class UB_SkinOrRecipeItemData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetSkinOrRecipeData");

	Params::B_MenuTileViewManager_C_GetSkinOrRecipeData Parms{};

	Parms.SkinInfo = std::move(SkinInfo);
	Parms.RecipeInfo = std::move(RecipeInfo);
	Parms.HasInitialFocusOrSelection = HasInitialFocusOrSelection;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.GetTradingButtonData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTradingItem                     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FS_ItemInfo                      SkinItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_RecipeInfo                    RecipeItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    HasInitialFocus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_TradingItemData_C*             Data                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::GetTradingButtonData(const struct FTradingItem& Item, const struct FS_ItemInfo& SkinItem, const struct FS_RecipeInfo& RecipeItem, bool HasInitialFocus, class UUserWidget* Parent, class UB_TradingItemData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "GetTradingButtonData");

	Params::B_MenuTileViewManager_C_GetTradingButtonData Parms{};

	Parms.Item = std::move(Item);
	Parms.SkinItem = std::move(SkinItem);
	Parms.RecipeItem = std::move(RecipeItem);
	Parms.HasInitialFocus = HasInitialFocus;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.SetGeneralData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UB_TileViewData_C*                TileViewData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    HasInitialFocusOrSelection                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::SetGeneralData(class UB_TileViewData_C* TileViewData, bool HasInitialFocusOrSelection, class UUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "SetGeneralData");

	Params::B_MenuTileViewManager_C_SetGeneralData Parms{};

	Parms.TileViewData = TileViewData;
	Parms.HasInitialFocusOrSelection = HasInitialFocusOrSelection;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.TileViewIsEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UListViewBase*                    TileView                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::TileViewIsEmpty(class UListViewBase* TileView, bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "TileViewIsEmpty");

	Params::B_MenuTileViewManager_C_TileViewIsEmpty Parms{};

	Parms.TileView = TileView;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}


// Function B_MenuTileViewManager.B_MenuTileViewManager_C.UpdateSkinConfigTileView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTileView*                        TileView                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UB_SkinSelection_C*               SkinSaves                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ETeamID                                 Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_MenuTileViewManager_C::UpdateSkinConfigTileView(class UTileView* TileView, class UB_SkinSelection_C* SkinSaves, ETeamID Team, class UUserWidget* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuTileViewManager_C", "UpdateSkinConfigTileView");

	Params::B_MenuTileViewManager_C_UpdateSkinConfigTileView Parms{};

	Parms.TileView = TileView;
	Parms.SkinSaves = SkinSaves;
	Parms.Team = Team;
	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}

}

