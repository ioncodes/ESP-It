#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_ItemInfo

#include "Basic.hpp"

#include "E_Slot_structs.hpp"
#include "B_Rarity_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_ItemInfo.S_ItemInfo
// 0x0078 (0x0078 - 0x0000)
struct FS_ItemInfo final
{
public:
	class FName                                   ItemName_38_2FBFA9AD4B0953DEBFCE8E8FBF9BDB7B;      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Description_5_08B9FFE04E57D85EE64C5C8FE8E811FD;    // 0x0008(0x0010)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>              Icon_33_3104B230457F9F5BA675C5B634C03B32;          // 0x0018(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         ItemID_11_79E3736546DAF10675089B96E392C477;        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultUnlocked_14_737553CD453DA714F27D0B89C49932A6; // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EB_Rarity                                     Rarity_17_0C85CCE14825E69385A71BB47B5F10CA;        // 0x0045(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Slot                                        Slot_20_4C39AAA743173DF5D0B389980A5D4FC1;          // 0x0046(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HiddenInLanVersion_23_4AC1209249C858561E0EE793DD48CA2E; // 0x0047(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CannotSmash_25_EFCAA9054DEA702315BB128D38365DA6;   // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   SkinItemClass_37_492566B94DC2F36905740D995C0061CF; // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_ItemInfo) == 0x000008, "Wrong alignment on FS_ItemInfo");
static_assert(sizeof(FS_ItemInfo) == 0x000078, "Wrong size on FS_ItemInfo");
static_assert(offsetof(FS_ItemInfo, ItemName_38_2FBFA9AD4B0953DEBFCE8E8FBF9BDB7B) == 0x000000, "Member 'FS_ItemInfo::ItemName_38_2FBFA9AD4B0953DEBFCE8E8FBF9BDB7B' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, Description_5_08B9FFE04E57D85EE64C5C8FE8E811FD) == 0x000008, "Member 'FS_ItemInfo::Description_5_08B9FFE04E57D85EE64C5C8FE8E811FD' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, Icon_33_3104B230457F9F5BA675C5B634C03B32) == 0x000018, "Member 'FS_ItemInfo::Icon_33_3104B230457F9F5BA675C5B634C03B32' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, ItemID_11_79E3736546DAF10675089B96E392C477) == 0x000040, "Member 'FS_ItemInfo::ItemID_11_79E3736546DAF10675089B96E392C477' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, DefaultUnlocked_14_737553CD453DA714F27D0B89C49932A6) == 0x000044, "Member 'FS_ItemInfo::DefaultUnlocked_14_737553CD453DA714F27D0B89C49932A6' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, Rarity_17_0C85CCE14825E69385A71BB47B5F10CA) == 0x000045, "Member 'FS_ItemInfo::Rarity_17_0C85CCE14825E69385A71BB47B5F10CA' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, Slot_20_4C39AAA743173DF5D0B389980A5D4FC1) == 0x000046, "Member 'FS_ItemInfo::Slot_20_4C39AAA743173DF5D0B389980A5D4FC1' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, HiddenInLanVersion_23_4AC1209249C858561E0EE793DD48CA2E) == 0x000047, "Member 'FS_ItemInfo::HiddenInLanVersion_23_4AC1209249C858561E0EE793DD48CA2E' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, CannotSmash_25_EFCAA9054DEA702315BB128D38365DA6) == 0x000048, "Member 'FS_ItemInfo::CannotSmash_25_EFCAA9054DEA702315BB128D38365DA6' has a wrong offset!");
static_assert(offsetof(FS_ItemInfo, SkinItemClass_37_492566B94DC2F36905740D995C0061CF) == 0x000050, "Member 'FS_ItemInfo::SkinItemClass_37_492566B94DC2F36905740D995C0061CF' has a wrong offset!");

}

