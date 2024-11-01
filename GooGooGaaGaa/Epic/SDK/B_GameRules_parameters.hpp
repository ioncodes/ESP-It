#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GameRules

#include "Basic.hpp"

#include "E_PowerupRuleType_structs.hpp"
#include "S_PowerupRules_structs.hpp"
#include "E_GameModifierType_structs.hpp"
#include "S_GameModifier_structs.hpp"
#include "E_SkillRuleType_structs.hpp"
#include "S_SkillRules_structs.hpp"


namespace SDK::Params
{

// Function B_GameRules.B_GameRules_C.AddGameModifier
// 0x0028 (0x0028 - 0x0000)
struct B_GameRules_C_AddGameModifier final
{
public:
	struct FS_GameModifier                        NewModifier;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_DoesGameModifierExist_ModExists;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_DoesGameModifierExist_ModIndex;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_AddGameModifier) == 0x000008, "Wrong alignment on B_GameRules_C_AddGameModifier");
static_assert(sizeof(B_GameRules_C_AddGameModifier) == 0x000028, "Wrong size on B_GameRules_C_AddGameModifier");
static_assert(offsetof(B_GameRules_C_AddGameModifier, NewModifier) == 0x000000, "Member 'B_GameRules_C_AddGameModifier::NewModifier' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddGameModifier, CallFunc_DoesGameModifierExist_ModExists) == 0x000018, "Member 'B_GameRules_C_AddGameModifier::CallFunc_DoesGameModifierExist_ModExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddGameModifier, CallFunc_DoesGameModifierExist_ModIndex) == 0x00001C, "Member 'B_GameRules_C_AddGameModifier::CallFunc_DoesGameModifierExist_ModIndex' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddGameModifier, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'B_GameRules_C_AddGameModifier::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.AddPowerupRule
// 0x0028 (0x0028 - 0x0000)
struct B_GameRules_C_AddPowerupRule final
{
public:
	struct FS_PowerupRules                        NewPowerupRules;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_DoesPowerupRuleExist_PowerupExists;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_DoesPowerupRuleExist_PowerupIndex;        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_AddPowerupRule) == 0x000008, "Wrong alignment on B_GameRules_C_AddPowerupRule");
static_assert(sizeof(B_GameRules_C_AddPowerupRule) == 0x000028, "Wrong size on B_GameRules_C_AddPowerupRule");
static_assert(offsetof(B_GameRules_C_AddPowerupRule, NewPowerupRules) == 0x000000, "Member 'B_GameRules_C_AddPowerupRule::NewPowerupRules' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddPowerupRule, CallFunc_DoesPowerupRuleExist_PowerupExists) == 0x000018, "Member 'B_GameRules_C_AddPowerupRule::CallFunc_DoesPowerupRuleExist_PowerupExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddPowerupRule, CallFunc_DoesPowerupRuleExist_PowerupIndex) == 0x00001C, "Member 'B_GameRules_C_AddPowerupRule::CallFunc_DoesPowerupRuleExist_PowerupIndex' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddPowerupRule, CallFunc_Array_Add_ReturnValue) == 0x000020, "Member 'B_GameRules_C_AddPowerupRule::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.AddSkillRule
// 0x0028 (0x0028 - 0x0000)
struct B_GameRules_C_AddSkillRule final
{
public:
	struct FS_SkillRules                          NewSkillRule;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSkillRuleExist_RuleExists;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_DoesSkillRuleExist_RuleIndex;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_AddSkillRule) == 0x000008, "Wrong alignment on B_GameRules_C_AddSkillRule");
static_assert(sizeof(B_GameRules_C_AddSkillRule) == 0x000028, "Wrong size on B_GameRules_C_AddSkillRule");
static_assert(offsetof(B_GameRules_C_AddSkillRule, NewSkillRule) == 0x000000, "Member 'B_GameRules_C_AddSkillRule::NewSkillRule' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddSkillRule, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'B_GameRules_C_AddSkillRule::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddSkillRule, CallFunc_DoesSkillRuleExist_RuleExists) == 0x00001C, "Member 'B_GameRules_C_AddSkillRule::CallFunc_DoesSkillRuleExist_RuleExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AddSkillRule, CallFunc_DoesSkillRuleExist_RuleIndex) == 0x000020, "Member 'B_GameRules_C_AddSkillRule::CallFunc_DoesSkillRuleExist_RuleIndex' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.AreAnyRulesActive
// 0x0020 (0x0020 - 0x0000)
struct B_GameRules_C_AreAnyRulesActive final
{
public:
	bool                                          RulesActive;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_AreAnyRulesActive) == 0x000004, "Wrong alignment on B_GameRules_C_AreAnyRulesActive");
static_assert(sizeof(B_GameRules_C_AreAnyRulesActive) == 0x000020, "Wrong size on B_GameRules_C_AreAnyRulesActive");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, RulesActive) == 0x000000, "Member 'B_GameRules_C_AreAnyRulesActive::RulesActive' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Array_Length_ReturnValue_1) == 0x000008, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00000D, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Array_Length_ReturnValue_2) == 0x000010, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Array_Length_ReturnValue_3) == 0x000014, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000018, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000019, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_BooleanOR_ReturnValue_1) == 0x00001B, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_AreAnyRulesActive, CallFunc_BooleanOR_ReturnValue_2) == 0x00001C, "Member 'B_GameRules_C_AreAnyRulesActive::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.DoesGameModifierExist
// 0x0038 (0x0038 - 0x0000)
struct B_GameRules_C_DoesGameModifierExist final
{
public:
	E_GameModifierType                            ModType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ModExists;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ModIndex;                                          // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameModifier                        CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_DoesGameModifierExist) == 0x000008, "Wrong alignment on B_GameRules_C_DoesGameModifierExist");
static_assert(sizeof(B_GameRules_C_DoesGameModifierExist) == 0x000038, "Wrong size on B_GameRules_C_DoesGameModifierExist");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, ModType) == 0x000000, "Member 'B_GameRules_C_DoesGameModifierExist::ModType' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, ModExists) == 0x000001, "Member 'B_GameRules_C_DoesGameModifierExist::ModExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, ModIndex) == 0x000004, "Member 'B_GameRules_C_DoesGameModifierExist::ModIndex' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, Temp_int_Array_Index_Variable) == 0x000008, "Member 'B_GameRules_C_DoesGameModifierExist::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'B_GameRules_C_DoesGameModifierExist::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'B_GameRules_C_DoesGameModifierExist::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'B_GameRules_C_DoesGameModifierExist::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_GameRules_C_DoesGameModifierExist::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_GameRules_C_DoesGameModifierExist::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesGameModifierExist, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'B_GameRules_C_DoesGameModifierExist::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.DoesPowerupRuleExist
// 0x0038 (0x0038 - 0x0000)
struct B_GameRules_C_DoesPowerupRuleExist final
{
public:
	E_PowerupRuleType                             Powerup;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PowerupExists;                                     // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PowerupIndex;                                      // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PowerupRules                        CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_DoesPowerupRuleExist) == 0x000008, "Wrong alignment on B_GameRules_C_DoesPowerupRuleExist");
static_assert(sizeof(B_GameRules_C_DoesPowerupRuleExist) == 0x000038, "Wrong size on B_GameRules_C_DoesPowerupRuleExist");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, Powerup) == 0x000000, "Member 'B_GameRules_C_DoesPowerupRuleExist::Powerup' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, PowerupExists) == 0x000001, "Member 'B_GameRules_C_DoesPowerupRuleExist::PowerupExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, PowerupIndex) == 0x000004, "Member 'B_GameRules_C_DoesPowerupRuleExist::PowerupIndex' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, Temp_int_Array_Index_Variable) == 0x000008, "Member 'B_GameRules_C_DoesPowerupRuleExist::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'B_GameRules_C_DoesPowerupRuleExist::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'B_GameRules_C_DoesPowerupRuleExist::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_GameRules_C_DoesPowerupRuleExist::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'B_GameRules_C_DoesPowerupRuleExist::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'B_GameRules_C_DoesPowerupRuleExist::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesPowerupRuleExist, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000035, "Member 'B_GameRules_C_DoesPowerupRuleExist::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.DoesSkillRuleExist
// 0x0038 (0x0038 - 0x0000)
struct B_GameRules_C_DoesSkillRuleExist final
{
public:
	E_SkillRuleType                               SkillType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RuleExists;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RuleIndex;                                         // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_SkillRules                          CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_DoesSkillRuleExist) == 0x000008, "Wrong alignment on B_GameRules_C_DoesSkillRuleExist");
static_assert(sizeof(B_GameRules_C_DoesSkillRuleExist) == 0x000038, "Wrong size on B_GameRules_C_DoesSkillRuleExist");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, SkillType) == 0x000000, "Member 'B_GameRules_C_DoesSkillRuleExist::SkillType' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, RuleExists) == 0x000001, "Member 'B_GameRules_C_DoesSkillRuleExist::RuleExists' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, RuleIndex) == 0x000004, "Member 'B_GameRules_C_DoesSkillRuleExist::RuleIndex' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, Temp_int_Array_Index_Variable) == 0x000008, "Member 'B_GameRules_C_DoesSkillRuleExist::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'B_GameRules_C_DoesSkillRuleExist::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'B_GameRules_C_DoesSkillRuleExist::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'B_GameRules_C_DoesSkillRuleExist::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_GameRules_C_DoesSkillRuleExist::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_GameRules_C_DoesSkillRuleExist::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_DoesSkillRuleExist, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'B_GameRules_C_DoesSkillRuleExist::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.RemoveGameModifier
// 0x0030 (0x0030 - 0x0000)
struct B_GameRules_C_RemoveGameModifier final
{
public:
	E_GameModifierType                            ModType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_GameModifier                        CallFunc_Array_Get_Item;                           // 0x0010(0x0018)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_RemoveGameModifier) == 0x000008, "Wrong alignment on B_GameRules_C_RemoveGameModifier");
static_assert(sizeof(B_GameRules_C_RemoveGameModifier) == 0x000030, "Wrong size on B_GameRules_C_RemoveGameModifier");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, ModType) == 0x000000, "Member 'B_GameRules_C_RemoveGameModifier::ModType' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_GameRules_C_RemoveGameModifier::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'B_GameRules_C_RemoveGameModifier::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_Array_Get_Item) == 0x000010, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_Array_RemoveItem_ReturnValue) == 0x00002C, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveGameModifier, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002E, "Member 'B_GameRules_C_RemoveGameModifier::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.RemovePowerupRule
// 0x0038 (0x0038 - 0x0000)
struct B_GameRules_C_RemovePowerupRule final
{
public:
	E_PowerupRuleType                             Powerup;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_PowerupRules                        CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_RemovePowerupRule) == 0x000008, "Wrong alignment on B_GameRules_C_RemovePowerupRule");
static_assert(sizeof(B_GameRules_C_RemovePowerupRule) == 0x000038, "Wrong size on B_GameRules_C_RemovePowerupRule");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, Powerup) == 0x000000, "Member 'B_GameRules_C_RemovePowerupRule::Powerup' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_GameRules_C_RemovePowerupRule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'B_GameRules_C_RemovePowerupRule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_Array_RemoveItem_ReturnValue) == 0x000031, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemovePowerupRule, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'B_GameRules_C_RemovePowerupRule::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.RemoveSkillRule
// 0x0038 (0x0038 - 0x0000)
struct B_GameRules_C_RemoveSkillRule final
{
public:
	E_SkillRuleType                               SkillType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SkillRules                          CallFunc_Array_Get_Item;                           // 0x0018(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_RemoveSkillRule) == 0x000008, "Wrong alignment on B_GameRules_C_RemoveSkillRule");
static_assert(sizeof(B_GameRules_C_RemoveSkillRule) == 0x000038, "Wrong size on B_GameRules_C_RemoveSkillRule");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, SkillType) == 0x000000, "Member 'B_GameRules_C_RemoveSkillRule::SkillType' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_GameRules_C_RemoveSkillRule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'B_GameRules_C_RemoveSkillRule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_Array_Get_Item) == 0x000018, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_Array_RemoveItem_ReturnValue) == 0x000031, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_RemoveSkillRule, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'B_GameRules_C_RemoveSkillRule::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function B_GameRules.B_GameRules_C.Save
// 0x0028 (0x0028 - 0x0000)
struct B_GameRules_C_Save final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_GameRules_C_Save) == 0x000008, "Wrong alignment on B_GameRules_C_Save");
static_assert(sizeof(B_GameRules_C_Save) == 0x000028, "Wrong size on B_GameRules_C_Save");
static_assert(offsetof(B_GameRules_C_Save, Name_0) == 0x000000, "Member 'B_GameRules_C_Save::Name_0' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_Save, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'B_GameRules_C_Save::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GameRules_C_Save, CallFunc_SaveGameToSlot_ReturnValue) == 0x000020, "Member 'B_GameRules_C_Save::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");

}

