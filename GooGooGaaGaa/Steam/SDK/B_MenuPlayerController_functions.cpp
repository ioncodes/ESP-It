#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_MenuPlayerController

#include "Basic.hpp"

#include "B_MenuPlayerController_classes.hpp"
#include "B_MenuPlayerController_parameters.hpp"


namespace SDK
{

// Function B_MenuPlayerController.B_MenuPlayerController_C.ExecuteUbergraph_B_MenuPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::ExecuteUbergraph_B_MenuPlayerController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "ExecuteUbergraph_B_MenuPlayerController");

	Params::B_MenuPlayerController_C_ExecuteUbergraph_B_MenuPlayerController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.GetMasterScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_MasterScreen_C*               MasterScreen_0                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::GetMasterScreen(class UWB_MasterScreen_C** MasterScreen_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "GetMasterScreen");

	Params::B_MenuPlayerController_C_GetMasterScreen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MasterScreen_0 != nullptr)
		*MasterScreen_0 = Parms.MasterScreen_0;
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_Fire_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_Fire_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_Fire_K2Node_InputActionEvent_0");

	Params::B_MenuPlayerController_C_InpActEvt_Fire_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_Fire_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_Fire_K2Node_InputActionEvent_1");

	Params::B_MenuPlayerController_C_InpActEvt_Fire_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::B_MenuPlayerController_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::B_MenuPlayerController_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::B_MenuPlayerController_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::B_MenuPlayerController_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpAxisEvt_Turn_K2Node_InputAxisEvent_4");

	Params::B_MenuPlayerController_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_4 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0");

	Params::B_MenuPlayerController_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_0 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.InputRightThumbstickX-Axis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::InputRightThumbstickXMinusAxis(double AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "InputRightThumbstickX-Axis");

	Params::B_MenuPlayerController_C_InputRightThumbstickXMinusAxis Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_MenuPlayerController.B_MenuPlayerController_C.RotateSkinPreviewMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaRotation_Yaw                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_MenuPlayerController_C::RotateSkinPreviewMesh(double DeltaRotation_Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MenuPlayerController_C", "RotateSkinPreviewMesh");

	Params::B_MenuPlayerController_C_RotateSkinPreviewMesh Parms{};

	Parms.DeltaRotation_Yaw = DeltaRotation_Yaw;

	UObject::ProcessEvent(Func, &Parms);
}

}

