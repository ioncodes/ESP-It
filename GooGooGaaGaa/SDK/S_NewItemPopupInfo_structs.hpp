#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_NewItemPopupInfo

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_NewItemPopupInfo.S_NewItemPopupInfo
// 0x0070 (0x0070 - 0x0000)
struct FS_NewItemPopupInfo final
{
public:
	class FText                                   Title_2_8F51359A42B9CE8E349FA1892D0DBC63;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   Description_4_512EFA164E8DE4BBE9631D82ADDA3686;    // 0x0018(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             Icon_7_8F796E6145F5B86A3F3BE0A3D577BB6B;           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconFrame_9_585D2C834216E60026130BA4D55DDD7C;      // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             PopupFrame_11_96ECD8DD41770E0CAFE3BB9338D2F0D9;    // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            FrameColor_25_404B57164A7FFFC9575D91B28D94576E;    // 0x0048(0x0014)(Edit, BlueprintVisible)
	int32                                         PreviousCount_14_7A5C2D014C1E0FE393D8FDBFCCDFD305; // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewCount_16_CA11F4F84DD1FFAA73E0B1A4AFDB422B;      // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCount_18_3525575B40A82C4EC4EC338FF2903E06;      // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IconAmount_22_59D3F3274AC7F745295566AF62304777;    // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_NewItemPopupInfo) == 0x000008, "Wrong alignment on FS_NewItemPopupInfo");
static_assert(sizeof(FS_NewItemPopupInfo) == 0x000070, "Wrong size on FS_NewItemPopupInfo");
static_assert(offsetof(FS_NewItemPopupInfo, Title_2_8F51359A42B9CE8E349FA1892D0DBC63) == 0x000000, "Member 'FS_NewItemPopupInfo::Title_2_8F51359A42B9CE8E349FA1892D0DBC63' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, Description_4_512EFA164E8DE4BBE9631D82ADDA3686) == 0x000018, "Member 'FS_NewItemPopupInfo::Description_4_512EFA164E8DE4BBE9631D82ADDA3686' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, Icon_7_8F796E6145F5B86A3F3BE0A3D577BB6B) == 0x000030, "Member 'FS_NewItemPopupInfo::Icon_7_8F796E6145F5B86A3F3BE0A3D577BB6B' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, IconFrame_9_585D2C834216E60026130BA4D55DDD7C) == 0x000038, "Member 'FS_NewItemPopupInfo::IconFrame_9_585D2C834216E60026130BA4D55DDD7C' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, PopupFrame_11_96ECD8DD41770E0CAFE3BB9338D2F0D9) == 0x000040, "Member 'FS_NewItemPopupInfo::PopupFrame_11_96ECD8DD41770E0CAFE3BB9338D2F0D9' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, FrameColor_25_404B57164A7FFFC9575D91B28D94576E) == 0x000048, "Member 'FS_NewItemPopupInfo::FrameColor_25_404B57164A7FFFC9575D91B28D94576E' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, PreviousCount_14_7A5C2D014C1E0FE393D8FDBFCCDFD305) == 0x00005C, "Member 'FS_NewItemPopupInfo::PreviousCount_14_7A5C2D014C1E0FE393D8FDBFCCDFD305' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, NewCount_16_CA11F4F84DD1FFAA73E0B1A4AFDB422B) == 0x000060, "Member 'FS_NewItemPopupInfo::NewCount_16_CA11F4F84DD1FFAA73E0B1A4AFDB422B' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, MaxCount_18_3525575B40A82C4EC4EC338FF2903E06) == 0x000064, "Member 'FS_NewItemPopupInfo::MaxCount_18_3525575B40A82C4EC4EC338FF2903E06' has a wrong offset!");
static_assert(offsetof(FS_NewItemPopupInfo, IconAmount_22_59D3F3274AC7F745295566AF62304777) == 0x000068, "Member 'FS_NewItemPopupInfo::IconAmount_22_59D3F3274AC7F745295566AF62304777' has a wrong offset!");

}
