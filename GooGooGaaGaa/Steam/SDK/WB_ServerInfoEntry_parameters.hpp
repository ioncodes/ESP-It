#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ServerInfoEntry

#include "Basic.hpp"


namespace SDK::Params
{

// Function WB_ServerInfoEntry.WB_ServerInfoEntry_C.Get_ServerStatText_Text_0
// 0x0020 (0x0020 - 0x0000)
struct WB_ServerInfoEntry_C_Get_ServerStatText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0010(0x0010)()
};
static_assert(alignof(WB_ServerInfoEntry_C_Get_ServerStatText_Text_0) == 0x000008, "Wrong alignment on WB_ServerInfoEntry_C_Get_ServerStatText_Text_0");
static_assert(sizeof(WB_ServerInfoEntry_C_Get_ServerStatText_Text_0) == 0x000020, "Wrong size on WB_ServerInfoEntry_C_Get_ServerStatText_Text_0");
static_assert(offsetof(WB_ServerInfoEntry_C_Get_ServerStatText_Text_0, ReturnValue) == 0x000000, "Member 'WB_ServerInfoEntry_C_Get_ServerStatText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerInfoEntry_C_Get_ServerStatText_Text_0, CallFunc_Conv_NameToText_ReturnValue) == 0x000010, "Member 'WB_ServerInfoEntry_C_Get_ServerStatText_Text_0::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function WB_ServerInfoEntry.WB_ServerInfoEntry_C.Get_ServerValueText_Text_0
// 0x0020 (0x0020 - 0x0000)
struct WB_ServerInfoEntry_C_Get_ServerValueText_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0010)()
};
static_assert(alignof(WB_ServerInfoEntry_C_Get_ServerValueText_Text_0) == 0x000008, "Wrong alignment on WB_ServerInfoEntry_C_Get_ServerValueText_Text_0");
static_assert(sizeof(WB_ServerInfoEntry_C_Get_ServerValueText_Text_0) == 0x000020, "Wrong size on WB_ServerInfoEntry_C_Get_ServerValueText_Text_0");
static_assert(offsetof(WB_ServerInfoEntry_C_Get_ServerValueText_Text_0, ReturnValue) == 0x000000, "Member 'WB_ServerInfoEntry_C_Get_ServerValueText_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(WB_ServerInfoEntry_C_Get_ServerValueText_Text_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WB_ServerInfoEntry_C_Get_ServerValueText_Text_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
