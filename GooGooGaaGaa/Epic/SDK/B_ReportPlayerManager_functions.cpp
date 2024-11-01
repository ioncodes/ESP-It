#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_ReportPlayerManager

#include "Basic.hpp"

#include "B_ReportPlayerManager_classes.hpp"
#include "B_ReportPlayerManager_parameters.hpp"


namespace SDK
{

// Function B_ReportPlayerManager.B_ReportPlayerManager_C.AddPlayerReport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerToReportId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReporterId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::AddPlayerReport(const class FString& PlayerToReportId, const class FString& ReporterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "AddPlayerReport");

	Params::B_ReportPlayerManager_C_AddPlayerReport Parms{};

	Parms.PlayerToReportId = std::move(PlayerToReportId);
	Parms.ReporterId = std::move(ReporterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ReportPlayerManager.B_ReportPlayerManager_C.CanReporterReport
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           PlayerToReportId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReporterId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    CanReport                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::CanReporterReport(const class FString& PlayerToReportId, const class FString& ReporterId, bool* CanReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "CanReporterReport");

	Params::B_ReportPlayerManager_C_CanReporterReport Parms{};

	Parms.PlayerToReportId = std::move(PlayerToReportId);
	Parms.ReporterId = std::move(ReporterId);

	UObject::ProcessEvent(Func, &Parms);

	if (CanReport != nullptr)
		*CanReport = Parms.CanReport;
}


// Function B_ReportPlayerManager.B_ReportPlayerManager_C.ExecuteUbergraph_B_ReportPlayerManager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::ExecuteUbergraph_B_ReportPlayerManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "ExecuteUbergraph_B_ReportPlayerManager");

	Params::B_ReportPlayerManager_C_ExecuteUbergraph_B_ReportPlayerManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ReportPlayerManager.B_ReportPlayerManager_C.OnFailure_CA756CEE40EA230D71CCEA881C25CCBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DownloadedString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   QueryID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::OnFailure_CA756CEE40EA230D71CCEA881C25CCBD(const class FString& DownloadedString, int32 QueryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "OnFailure_CA756CEE40EA230D71CCEA881C25CCBD");

	Params::B_ReportPlayerManager_C_OnFailure_CA756CEE40EA230D71CCEA881C25CCBD Parms{};

	Parms.DownloadedString = std::move(DownloadedString);
	Parms.QueryID = QueryID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ReportPlayerManager.B_ReportPlayerManager_C.OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DownloadedString                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   QueryID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD(const class FString& DownloadedString, int32 QueryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD");

	Params::B_ReportPlayerManager_C_OnSuccess_CA756CEE40EA230D71CCEA881C25CCBD Parms{};

	Parms.DownloadedString = std::move(DownloadedString);
	Parms.QueryID = QueryID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_ReportPlayerManager.B_ReportPlayerManager_C.ReportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerToReport                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     Reporter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_ReportPlayerManager_C::ReportPlayer(class APlayerState* PlayerToReport, int32 Reason, class APlayerState* Reporter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_ReportPlayerManager_C", "ReportPlayer");

	Params::B_ReportPlayerManager_C_ReportPlayer Parms{};

	Parms.PlayerToReport = PlayerToReport;
	Parms.Reason = Reason;
	Parms.Reporter = Reporter;

	UObject::ProcessEvent(Func, &Parms);
}

}

