// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_BugReporter_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.AttachFile
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BugReporter_Provider_C::AttachFile()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.AttachFile"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ReportJiraBug
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   bugSummary                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   playerBehaviour                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   ReproSteps                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FString>         BugLabels                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_BugReporter_Provider_C::ReportJiraBug(class AYPlayerController* PlayerController, const struct FText& bugSummary, const struct FText& playerBehaviour, const struct FText& ReproSteps, TArray<struct FString>* BugLabels)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ReportJiraBug"));

	struct
	{
		class AYPlayerController*      PlayerController;
		struct FText                   bugSummary;
		struct FText                   playerBehaviour;
		struct FText                   ReproSteps;
		TArray<struct FString>         BugLabels;
	} params = {};

	params.PlayerController = PlayerController;
	params.bugSummary = bugSummary;
	params.playerBehaviour = playerBehaviour;
	params.ReproSteps = ReproSteps;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (BugLabels != nullptr)
		*BugLabels = params.BugLabels;
}


// Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.OnJiraTicketCreatedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 JiraKey                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_BugReporter_Provider_C::OnJiraTicketCreatedEvent(bool bSuccess, const struct FString& JiraKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.OnJiraTicketCreatedEvent"));

	struct
	{
		bool                           bSuccess;
		struct FString                 JiraKey;
	} params = {};

	params.bSuccess = bSuccess;
	params.JiraKey = JiraKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ExecuteUbergraph_WBP_BugReporter_Provider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BugReporter_Provider_C::ExecuteUbergraph_WBP_BugReporter_Provider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BugReporter_Provider.WBP_BugReporter_Provider_C.ExecuteUbergraph_WBP_BugReporter_Provider"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
