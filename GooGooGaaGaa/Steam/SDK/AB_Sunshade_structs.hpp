#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Sunshade

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AB_Sunshade.AB_Sunshade_C.AnimBlueprintGeneratedConstantData
// 0x0347 (0x0348 - 0x0001)
struct AB_Sunshade::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_68;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_69;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_70;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_71;                                 // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_72;                                  // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_73;                                 // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_74;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_75;                               // 0x002C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_76;                                // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_77;                                 // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_78;                                 // 0x005D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_79;                                 // 0x005E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F[0x1];                                       // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_80;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_81;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_82;                                 // 0x0070(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_83;                                  // 0x0078(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_84;                               // 0x0080(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0138(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x0168(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x0198(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x01C8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;                    // 0x01F8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0228(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x0258(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x0288(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x02B8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x02E8(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0318(0x0030)()
};
static_assert(alignof(AB_Sunshade::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_Sunshade::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_Sunshade::FAnimBlueprintGeneratedConstantData) == 0x000348, "Wrong size on AB_Sunshade::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_68) == 0x000004, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_68' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_69) == 0x00000C, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_69' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __IntProperty_70) == 0x000014, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__IntProperty_70' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_71) == 0x000018, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_71' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __IntProperty_72) == 0x000020, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__IntProperty_72' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __BoolProperty_73) == 0x000024, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__BoolProperty_73' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __FloatProperty_74) == 0x000028, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__FloatProperty_74' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __StructProperty_75) == 0x00002C, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__StructProperty_75' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __FloatProperty_76) == 0x000058, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__FloatProperty_76' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __BoolProperty_77) == 0x00005C, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__BoolProperty_77' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __EnumProperty_78) == 0x00005D, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__EnumProperty_78' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __ByteProperty_79) == 0x00005E, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__ByteProperty_79' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_80) == 0x000060, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_80' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_81) == 0x000068, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_81' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __NameProperty_82) == 0x000070, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__NameProperty_82' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __IntProperty_83) == 0x000078, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__IntProperty_83' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, __StructProperty_84) == 0x000080, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::__StructProperty_84' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000138, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_2) == 0x000168, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_1) == 0x000198, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult) == 0x0001C8, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_2) == 0x0001F8, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_2) == 0x000228, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x000258, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_1) == 0x000288, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x0002B8, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult) == 0x0002E8, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(AB_Sunshade::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine) == 0x000318, "Member 'AB_Sunshade::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine' has a wrong offset!");

}
