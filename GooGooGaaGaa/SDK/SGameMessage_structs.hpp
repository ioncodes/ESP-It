#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SGameMessage

#include "Basic.hpp"

#include "EGameMessageType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SGameMessage.SGameMessage
// 0x0038 (0x0038 - 0x0000)
struct FSGameMessage final
{
public:
	class FText                                   SourcePlayerName_3_6B4820A041993C650B52BC980D781475; // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   TargetPlayerName_5_7A92342C4FE434034A2D73B1DCB7031E; // 0x0018(0x0018)(Edit, BlueprintVisible)
	EGameMessageType                              MessageType_8_D071E5464AE9DF9C8767F483721BFC3C;    // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSGameMessage) == 0x000008, "Wrong alignment on FSGameMessage");
static_assert(sizeof(FSGameMessage) == 0x000038, "Wrong size on FSGameMessage");
static_assert(offsetof(FSGameMessage, SourcePlayerName_3_6B4820A041993C650B52BC980D781475) == 0x000000, "Member 'FSGameMessage::SourcePlayerName_3_6B4820A041993C650B52BC980D781475' has a wrong offset!");
static_assert(offsetof(FSGameMessage, TargetPlayerName_5_7A92342C4FE434034A2D73B1DCB7031E) == 0x000018, "Member 'FSGameMessage::TargetPlayerName_5_7A92342C4FE434034A2D73B1DCB7031E' has a wrong offset!");
static_assert(offsetof(FSGameMessage, MessageType_8_D071E5464AE9DF9C8767F483721BFC3C) == 0x000030, "Member 'FSGameMessage::MessageType_8_D071E5464AE9DF9C8767F483721BFC3C' has a wrong offset!");

}
