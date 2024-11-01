#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_CraftingDetails

#include "Basic.hpp"

#include "B_Rarity_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "S_RecipeInfo_structs.hpp"
#include "B_Ingredient_structs.hpp"
#include "EItemCraftResult_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_CraftingDetails.WB_CraftingDetails_C
// 0x00E8 (0x03C8 - 0x02E0)
class UWB_CraftingDetails_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_203;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Button_C*                           Craft;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Description;                                       // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_RecipeButton_C*                     DetilsRecipeButton;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_IngredientInfo_C*                   Ingredient;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         IngredientBox;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_0;                                            // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_RecipeInfo                          RecipeInfo;                                        // 0x0328(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWB_CraftingScreen_C*                   CraftingScreen;                                    // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FB_Ingredient>                  SpawnIngredients;                                  // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   RecipeName;                                        // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WB_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void CheckIngredientSufficiency();
	void Construct();
	void CraftItem();
	void ExecuteUbergraph_WB_CraftingDetails(int32 EntryPoint);
	class FText Get_Description_Text_0();
	ESlateVisibility GetVisibility_0();
	ESlateVisibility GetVisibility_1();
	void IngredientsAreSpawned();
	void ItemsCrafted(EItemCraftResult ItemCraftResult);
	void UpdateRecipeAndDetailsIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_CraftingDetails_C">();
	}
	static class UWB_CraftingDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_CraftingDetails_C>();
	}
};
static_assert(alignof(UWB_CraftingDetails_C) == 0x000008, "Wrong alignment on UWB_CraftingDetails_C");
static_assert(sizeof(UWB_CraftingDetails_C) == 0x0003C8, "Wrong size on UWB_CraftingDetails_C");
static_assert(offsetof(UWB_CraftingDetails_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_CraftingDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, CircularThrobber_203) == 0x0002E8, "Member 'UWB_CraftingDetails_C::CircularThrobber_203' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, Craft) == 0x0002F0, "Member 'UWB_CraftingDetails_C::Craft' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, Description) == 0x0002F8, "Member 'UWB_CraftingDetails_C::Description' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, DetilsRecipeButton) == 0x000300, "Member 'UWB_CraftingDetails_C::DetilsRecipeButton' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, Ingredient) == 0x000308, "Member 'UWB_CraftingDetails_C::Ingredient' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, IngredientBox) == 0x000310, "Member 'UWB_CraftingDetails_C::IngredientBox' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, Name_0) == 0x000318, "Member 'UWB_CraftingDetails_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, Overlay_0) == 0x000320, "Member 'UWB_CraftingDetails_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, RecipeInfo) == 0x000328, "Member 'UWB_CraftingDetails_C::RecipeInfo' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, CraftingScreen) == 0x0003A0, "Member 'UWB_CraftingDetails_C::CraftingScreen' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, SpawnIngredients) == 0x0003A8, "Member 'UWB_CraftingDetails_C::SpawnIngredients' has a wrong offset!");
static_assert(offsetof(UWB_CraftingDetails_C, RecipeName) == 0x0003B8, "Member 'UWB_CraftingDetails_C::RecipeName' has a wrong offset!");

}

