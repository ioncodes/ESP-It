#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_EventInfo

#include "Basic.hpp"

#include "S_KeyChestInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_EventInfo.S_EventInfo
// 0x00D8 (0x00D8 - 0x0000)
struct FS_EventInfo final
{
public:
	int32                                         GeneratorId_12_9F8A17F24F993474B86BFEA667354A18;   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   EventName_17_D595C54346CE66ABA67BE7AD37F23C1E;     // 0x0008(0x0010)(Edit, BlueprintVisible)
	class UTexture2D*                             EventLogo_79_B5C0A6D94A8DC07BA3A54A831FC6CE68;     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_KeyChestInfo                        Chest_76_3461B2DE421F7FA69E2C6F8552AB5394;         // 0x0020(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_KeyChestInfo                        Key_75_83608985468E458C5038759E1D5DCC52;           // 0x0050(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          ShowStoreButton_34_E6EA3FD9423FF9C48E1FE185AE68F66A; // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanCraftChestWithKeys_36_CDF5B25B465BEAA20D2206A891A313D8; // 0x0081(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NeededKeysToCraftChest_39_33E5559D43A42F5D9F5150B862D6AFB8; // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ConsumeKeysAfterEvent_41_61ABBC544C839AB50CEA71B84FEC3674; // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   EventItemRarity_44_4AD22469431FA026A82955AF0D88C541; // 0x0090(0x0010)(Edit, BlueprintVisible)
	int32                                         GrantedChestCount_47_53CC7559442CDCDF58A0B89B36FBBC68; // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CustomObtainSentence_65_65947F564A3B347BF2FC80BE4D63F032; // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CustomObtainSentenceText_66_97D13E814F8E577AE09E9FB2F3589C2D; // 0x00A8(0x0010)(Edit, BlueprintVisible)
	int32                                         KeyDropChance_54_E271802746D2AA300DFA9BBECB21FB82; // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           SupportedMaps_60_31AB38FA48884884DF27E1B27ECAAD24; // 0x00C0(0x0010)(Edit, BlueprintVisible)
	bool                                          OnlyNewItems_64_D3840DAF4E0B24347B050C846AC3D51C;  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_EventInfo) == 0x000008, "Wrong alignment on FS_EventInfo");
static_assert(sizeof(FS_EventInfo) == 0x0000D8, "Wrong size on FS_EventInfo");
static_assert(offsetof(FS_EventInfo, GeneratorId_12_9F8A17F24F993474B86BFEA667354A18) == 0x000000, "Member 'FS_EventInfo::GeneratorId_12_9F8A17F24F993474B86BFEA667354A18' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, EventName_17_D595C54346CE66ABA67BE7AD37F23C1E) == 0x000008, "Member 'FS_EventInfo::EventName_17_D595C54346CE66ABA67BE7AD37F23C1E' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, EventLogo_79_B5C0A6D94A8DC07BA3A54A831FC6CE68) == 0x000018, "Member 'FS_EventInfo::EventLogo_79_B5C0A6D94A8DC07BA3A54A831FC6CE68' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, Chest_76_3461B2DE421F7FA69E2C6F8552AB5394) == 0x000020, "Member 'FS_EventInfo::Chest_76_3461B2DE421F7FA69E2C6F8552AB5394' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, Key_75_83608985468E458C5038759E1D5DCC52) == 0x000050, "Member 'FS_EventInfo::Key_75_83608985468E458C5038759E1D5DCC52' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, ShowStoreButton_34_E6EA3FD9423FF9C48E1FE185AE68F66A) == 0x000080, "Member 'FS_EventInfo::ShowStoreButton_34_E6EA3FD9423FF9C48E1FE185AE68F66A' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, CanCraftChestWithKeys_36_CDF5B25B465BEAA20D2206A891A313D8) == 0x000081, "Member 'FS_EventInfo::CanCraftChestWithKeys_36_CDF5B25B465BEAA20D2206A891A313D8' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, NeededKeysToCraftChest_39_33E5559D43A42F5D9F5150B862D6AFB8) == 0x000084, "Member 'FS_EventInfo::NeededKeysToCraftChest_39_33E5559D43A42F5D9F5150B862D6AFB8' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, ConsumeKeysAfterEvent_41_61ABBC544C839AB50CEA71B84FEC3674) == 0x000088, "Member 'FS_EventInfo::ConsumeKeysAfterEvent_41_61ABBC544C839AB50CEA71B84FEC3674' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, EventItemRarity_44_4AD22469431FA026A82955AF0D88C541) == 0x000090, "Member 'FS_EventInfo::EventItemRarity_44_4AD22469431FA026A82955AF0D88C541' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, GrantedChestCount_47_53CC7559442CDCDF58A0B89B36FBBC68) == 0x0000A0, "Member 'FS_EventInfo::GrantedChestCount_47_53CC7559442CDCDF58A0B89B36FBBC68' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, CustomObtainSentence_65_65947F564A3B347BF2FC80BE4D63F032) == 0x0000A4, "Member 'FS_EventInfo::CustomObtainSentence_65_65947F564A3B347BF2FC80BE4D63F032' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, CustomObtainSentenceText_66_97D13E814F8E577AE09E9FB2F3589C2D) == 0x0000A8, "Member 'FS_EventInfo::CustomObtainSentenceText_66_97D13E814F8E577AE09E9FB2F3589C2D' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, KeyDropChance_54_E271802746D2AA300DFA9BBECB21FB82) == 0x0000B8, "Member 'FS_EventInfo::KeyDropChance_54_E271802746D2AA300DFA9BBECB21FB82' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, SupportedMaps_60_31AB38FA48884884DF27E1B27ECAAD24) == 0x0000C0, "Member 'FS_EventInfo::SupportedMaps_60_31AB38FA48884884DF27E1B27ECAAD24' has a wrong offset!");
static_assert(offsetof(FS_EventInfo, OnlyNewItems_64_D3840DAF4E0B24347B050C846AC3D51C) == 0x0000D0, "Member 'FS_EventInfo::OnlyNewItems_64_D3840DAF4E0B24347B050C846AC3D51C' has a wrong offset!");

}
