#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CookingRecipeSign

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "B_Dummy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CookingRecipeSign.B_CookingRecipeSign_C
// 0x0028 (0x0328 - 0x0300)
class AB_CookingRecipeSign_C final : public AB_Dummy_C
{
public:
	class UStaticMesh*                            Ingredient;                                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               OriginalRotation;                                  // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UStaticMesh*                            LoveIngredientMesh;                                // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void PickMesh(class UStaticMesh** Static_Mesh);
	void UpdateIngredientMesh(class UStaticMesh* Param_Ingredient);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CookingRecipeSign_C">();
	}
	static class AB_CookingRecipeSign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CookingRecipeSign_C>();
	}
};
static_assert(alignof(AB_CookingRecipeSign_C) == 0x000008, "Wrong alignment on AB_CookingRecipeSign_C");
static_assert(sizeof(AB_CookingRecipeSign_C) == 0x000328, "Wrong size on AB_CookingRecipeSign_C");
static_assert(offsetof(AB_CookingRecipeSign_C, Ingredient) == 0x000300, "Member 'AB_CookingRecipeSign_C::Ingredient' has a wrong offset!");
static_assert(offsetof(AB_CookingRecipeSign_C, OriginalRotation) == 0x000308, "Member 'AB_CookingRecipeSign_C::OriginalRotation' has a wrong offset!");
static_assert(offsetof(AB_CookingRecipeSign_C, LoveIngredientMesh) == 0x000320, "Member 'AB_CookingRecipeSign_C::LoveIngredientMesh' has a wrong offset!");

}
