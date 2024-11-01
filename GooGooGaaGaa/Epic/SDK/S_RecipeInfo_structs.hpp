#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_RecipeInfo

#include "Basic.hpp"

#include "B_Rarity_structs.hpp"
#include "B_Ingredient_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_RecipeInfo.S_RecipeInfo
// 0x0078 (0x0078 - 0x0000)
struct FS_RecipeInfo final
{
public:
	class FText                                   RecipeName_31_0C51FC0847D6428BA4F7FA97BE10B5BD;    // 0x0000(0x0010)(Edit, BlueprintVisible)
	class FText                                   Description_4_E8C129844005B67569A86EAABA331853;    // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          Visible_7_F9587E3A4C932CD2BF410A87CBD0D7A3;        // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Icon_30_CC1A70E24E4F09FA42B332977950200F;          // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	EB_Rarity                                     Rarity_13_9526E3D7409613E4FC3B798458FA9135;        // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FB_Ingredient>                  Ingredients_17_350B10E94245AAA6FF6A1289D8FF2A96;   // 0x0058(0x0010)(Edit, BlueprintVisible)
	int32                                         RecipeID_21_94D8407649AFCF054F92F8A98F3F5199;      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GeneratorID_23_2D122CAA44628A02A68268A3810BBB8D;   // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultUnlocked_25_D283BB394162C6DD44C732965AB31246; // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LongDelayForCraftEffect_28_F963E8CE42DD3D13D8B0BA93028B4F34; // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_RecipeInfo) == 0x000008, "Wrong alignment on FS_RecipeInfo");
static_assert(sizeof(FS_RecipeInfo) == 0x000078, "Wrong size on FS_RecipeInfo");
static_assert(offsetof(FS_RecipeInfo, RecipeName_31_0C51FC0847D6428BA4F7FA97BE10B5BD) == 0x000000, "Member 'FS_RecipeInfo::RecipeName_31_0C51FC0847D6428BA4F7FA97BE10B5BD' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, Description_4_E8C129844005B67569A86EAABA331853) == 0x000010, "Member 'FS_RecipeInfo::Description_4_E8C129844005B67569A86EAABA331853' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, Visible_7_F9587E3A4C932CD2BF410A87CBD0D7A3) == 0x000020, "Member 'FS_RecipeInfo::Visible_7_F9587E3A4C932CD2BF410A87CBD0D7A3' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, Icon_30_CC1A70E24E4F09FA42B332977950200F) == 0x000028, "Member 'FS_RecipeInfo::Icon_30_CC1A70E24E4F09FA42B332977950200F' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, Rarity_13_9526E3D7409613E4FC3B798458FA9135) == 0x000050, "Member 'FS_RecipeInfo::Rarity_13_9526E3D7409613E4FC3B798458FA9135' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, Ingredients_17_350B10E94245AAA6FF6A1289D8FF2A96) == 0x000058, "Member 'FS_RecipeInfo::Ingredients_17_350B10E94245AAA6FF6A1289D8FF2A96' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, RecipeID_21_94D8407649AFCF054F92F8A98F3F5199) == 0x000068, "Member 'FS_RecipeInfo::RecipeID_21_94D8407649AFCF054F92F8A98F3F5199' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, GeneratorID_23_2D122CAA44628A02A68268A3810BBB8D) == 0x00006C, "Member 'FS_RecipeInfo::GeneratorID_23_2D122CAA44628A02A68268A3810BBB8D' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, DefaultUnlocked_25_D283BB394162C6DD44C732965AB31246) == 0x000070, "Member 'FS_RecipeInfo::DefaultUnlocked_25_D283BB394162C6DD44C732965AB31246' has a wrong offset!");
static_assert(offsetof(FS_RecipeInfo, LongDelayForCraftEffect_28_F963E8CE42DD3D13D8B0BA93028B4F34) == 0x000071, "Member 'FS_RecipeInfo::LongDelayForCraftEffect_28_F963E8CE42DD3D13D8B0BA93028B4F34' has a wrong offset!");

}

