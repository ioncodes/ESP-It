#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_InviteInfo

#include "Basic.hpp"

#include "E_PopupType_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_InviteInfo.S_InviteInfo
// 0x0020 (0x0020 - 0x0000)
struct FS_InviteInfo final
{
public:
	class FString                                 PlayerName_2_B87FEFDB474EF2AAB199899FBE3ACCB4;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	E_PopupType                                   PopupType_13_500F77374B43A4D259D9F7A471F1FE1A;     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerIconId_9_1E28B54943FCA7988C14C79DC5126C86;   // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerLvl_11_5AB828A94E0BD0A3B30745BB4BF87F4B;     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_InviteInfo) == 0x000008, "Wrong alignment on FS_InviteInfo");
static_assert(sizeof(FS_InviteInfo) == 0x000020, "Wrong size on FS_InviteInfo");
static_assert(offsetof(FS_InviteInfo, PlayerName_2_B87FEFDB474EF2AAB199899FBE3ACCB4) == 0x000000, "Member 'FS_InviteInfo::PlayerName_2_B87FEFDB474EF2AAB199899FBE3ACCB4' has a wrong offset!");
static_assert(offsetof(FS_InviteInfo, PopupType_13_500F77374B43A4D259D9F7A471F1FE1A) == 0x000010, "Member 'FS_InviteInfo::PopupType_13_500F77374B43A4D259D9F7A471F1FE1A' has a wrong offset!");
static_assert(offsetof(FS_InviteInfo, PlayerIconId_9_1E28B54943FCA7988C14C79DC5126C86) == 0x000014, "Member 'FS_InviteInfo::PlayerIconId_9_1E28B54943FCA7988C14C79DC5126C86' has a wrong offset!");
static_assert(offsetof(FS_InviteInfo, PlayerLvl_11_5AB828A94E0BD0A3B30745BB4BF87F4B) == 0x000018, "Member 'FS_InviteInfo::PlayerLvl_11_5AB828A94E0BD0A3B30745BB4BF87F4B' has a wrong offset!");

}
