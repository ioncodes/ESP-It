#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SChatMessage

#include "Basic.hpp"

#include "ETeamID_structs.hpp"
#include "EChatType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SChatMessage.SChatMessage
// 0x0030 (0x0030 - 0x0000)
struct FSChatMessage final
{
public:
	class FText                                   PlayerName_3_523EB4F142173DDF63657C99F3A4DB0C;     // 0x0000(0x0010)(Edit, BlueprintVisible)
	class FText                                   ChatText_5_1E08801648EB9A87BC2ABE88B7AA0951;       // 0x0010(0x0010)(Edit, BlueprintVisible)
	ETeamID                                       Team_8_81614BA6469246F9840C229757A11013;           // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EChatType                                     ChatType_11_5D8CDD1D4B5573C225088FA9B35E78B3;      // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              Time_14_D0FE0B16476DDE7E5CD0DC826A9327D5;          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSChatMessage) == 0x000008, "Wrong alignment on FSChatMessage");
static_assert(sizeof(FSChatMessage) == 0x000030, "Wrong size on FSChatMessage");
static_assert(offsetof(FSChatMessage, PlayerName_3_523EB4F142173DDF63657C99F3A4DB0C) == 0x000000, "Member 'FSChatMessage::PlayerName_3_523EB4F142173DDF63657C99F3A4DB0C' has a wrong offset!");
static_assert(offsetof(FSChatMessage, ChatText_5_1E08801648EB9A87BC2ABE88B7AA0951) == 0x000010, "Member 'FSChatMessage::ChatText_5_1E08801648EB9A87BC2ABE88B7AA0951' has a wrong offset!");
static_assert(offsetof(FSChatMessage, Team_8_81614BA6469246F9840C229757A11013) == 0x000020, "Member 'FSChatMessage::Team_8_81614BA6469246F9840C229757A11013' has a wrong offset!");
static_assert(offsetof(FSChatMessage, ChatType_11_5D8CDD1D4B5573C225088FA9B35E78B3) == 0x000021, "Member 'FSChatMessage::ChatType_11_5D8CDD1D4B5573C225088FA9B35E78B3' has a wrong offset!");
static_assert(offsetof(FSChatMessage, Time_14_D0FE0B16476DDE7E5CD0DC826A9327D5) == 0x000028, "Member 'FSChatMessage::Time_14_D0FE0B16476DDE7E5CD0DC826A9327D5' has a wrong offset!");

}

