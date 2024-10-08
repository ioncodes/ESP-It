#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_NewWitch

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AB_NewWitch.AB_NewWitch_C.AnimBlueprintGeneratedConstantData
// 0x075F (0x0760 - 0x0001)
struct AB_NewWitch::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_191;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_192;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_193;                                // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_194;                                 // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_195;                                // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_196;                                 // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_197;                              // 0x0028(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_198;                                // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_199;                                // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_200;                                 // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_201;                                // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_202;                               // 0x006C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_203;                               // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_204;                                // 0x0074(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_205;                                // 0x0075(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_206;                                // 0x0076(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_207;                                // 0x0078(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_208;                                // 0x0080(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_209;                                // 0x0088(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_210;                                 // 0x0090(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_211;                              // 0x0098(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_212;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_213;                                // 0x00C0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0148(0x0018)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_RigidBody;                           // 0x0160(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                                // 0x0190(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_4;                    // 0x01C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LayeredBoneBlend;                    // 0x01F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;               // 0x0220(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;               // 0x0250(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_9;                  // 0x0280(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_8;                  // 0x02B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_7;                  // 0x02E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_6;                  // 0x0310(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;                  // 0x0340(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;                  // 0x0370(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;                  // 0x03A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;                  // 0x03D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_3;                    // 0x0400(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_6;                       // 0x0430(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_2;                    // 0x0460(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_5;                       // 0x0490(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer_1;                    // 0x04C0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_4;                       // 0x04F0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;                      // 0x0520(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_3;                       // 0x0550(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;                  // 0x0580(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;                    // 0x05B0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;                  // 0x05E0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;                       // 0x0610(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;                    // 0x0640(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;                       // 0x0670(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine_1;                      // 0x06A0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;                         // 0x06D0(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;                        // 0x0700(0x0030)()
	struct FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                                // 0x0730(0x0030)()
};
static_assert(alignof(AB_NewWitch::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_NewWitch::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_NewWitch::FAnimBlueprintGeneratedConstantData) == 0x000760, "Wrong size on AB_NewWitch::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_191) == 0x000004, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_191' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __IntProperty_192) == 0x00000C, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__IntProperty_192' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_193) == 0x000010, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_193' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __IntProperty_194) == 0x000018, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__IntProperty_194' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_195) == 0x00001C, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_195' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __IntProperty_196) == 0x000024, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__IntProperty_196' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __StructProperty_197) == 0x000028, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__StructProperty_197' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_198) == 0x000054, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_198' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_199) == 0x00005C, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_199' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __IntProperty_200) == 0x000064, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__IntProperty_200' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __BoolProperty_201) == 0x000068, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__BoolProperty_201' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __FloatProperty_202) == 0x00006C, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__FloatProperty_202' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __FloatProperty_203) == 0x000070, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__FloatProperty_203' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __BoolProperty_204) == 0x000074, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__BoolProperty_204' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __EnumProperty_205) == 0x000075, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__EnumProperty_205' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __ByteProperty_206) == 0x000076, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__ByteProperty_206' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_207) == 0x000078, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_207' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_208) == 0x000080, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_208' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_209) == 0x000088, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_209' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __IntProperty_210) == 0x000090, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__IntProperty_210' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __StructProperty_211) == 0x000098, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__StructProperty_211' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_212) == 0x0000B8, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_212' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, __NameProperty_213) == 0x0000C0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::__NameProperty_213' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C8, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000148, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_RigidBody) == 0x000160, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Slot) == 0x000190, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_4) == 0x0001C0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LayeredBoneBlend) == 0x0001F0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_ComponentToLocalSpace) == 0x000220, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_LocalToComponentSpace) == 0x000250, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_9) == 0x000280, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_8) == 0x0002B0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_7) == 0x0002E0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_6) == 0x000310, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_5) == 0x000340, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_4) == 0x000370, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_3) == 0x0003A0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_2) == 0x0003D0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_3) == 0x000400, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_6) == 0x000430, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_2) == 0x000460, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_5) == 0x000490, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer_1) == 0x0004C0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_4) == 0x0004F0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_SequencePlayer) == 0x000520, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_3) == 0x000550, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult_1) == 0x000580, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_TransitionResult) == 0x0005B0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendSpacePlayer_1) == 0x0005E0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_2) == 0x000610, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_BlendSpacePlayer) == 0x000640, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult_1) == 0x000670, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine_1) == 0x0006A0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateResult) == 0x0006D0, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_StateMachine) == 0x000700, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedConstantData, AnimGraphNode_Root) == 0x000730, "Member 'AB_NewWitch::FAnimBlueprintGeneratedConstantData::AnimGraphNode_Root' has a wrong offset!");

// ScriptStruct AB_NewWitch.AB_NewWitch_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct AB_NewWitch::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_NewWitch::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AB_NewWitch::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AB_NewWitch::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on AB_NewWitch::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'AB_NewWitch::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(AB_NewWitch::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'AB_NewWitch::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");

}

