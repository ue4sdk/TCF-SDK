// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_03_MatchPickUpAndEscape_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Is Any Contract Completed
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           contractCompleted              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UOnboarding_03_MatchPickUpAndEscape_C::Is_Any_Contract_Completed(bool* contractCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Is Any Contract Completed");

	struct
	{
		bool                           contractCompleted;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (contractCompleted != nullptr)
		*contractCompleted = params.contractCompleted;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsProgressUpdated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     contractsProgress              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::OnContractsProgressUpdated(const struct FYContractsProgress& contractsProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractsProgressUpdated");

	struct
	{
		struct FYContractsProgress     contractsProgress;
	} params;

	params.contractsProgress = contractsProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetHintDataOnAuthorithy
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTransform>      Transforms                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::SetHintDataOnAuthorithy(const struct FName& ActiveMarkerId, TArray<struct FTransform>* Transforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetHintDataOnAuthorithy");

	struct
	{
		struct FName                   ActiveMarkerId;
		TArray<struct FTransform>      Transforms;
	} params;

	params.ActiveMarkerId = ActiveMarkerId;

	UObject::ProcessEvent(fn, &params);

	if (Transforms != nullptr)
		*Transforms = params.Transforms;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetCurrentContractData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractRow>   CurrentContractData            (CPF_Parm, CPF_OutParm)

void UOnboarding_03_MatchPickUpAndEscape_C::GetCurrentContractData(TArray<struct FYContractRow>* CurrentContractData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetCurrentContractData");

	struct
	{
		TArray<struct FYContractRow>   CurrentContractData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrentContractData != nullptr)
		*CurrentContractData = params.CurrentContractData;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsContractItemInSafePocket
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::IsContractItemInSafePocket(bool* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.IsContractItemInSafePocket");

	struct
	{
		bool                           Output_Get;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetNewMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 missionId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::SetNewMission(const struct FString& missionId, int progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.SetNewMission");

	struct
	{
		struct FString                 missionId;
		int                            progress;
	} params;

	params.missionId = missionId;
	params.progress = progress;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction Of Completed Contract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           ContractFactionName            (CPF_Parm, CPF_OutParm)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Faction_Of_Completed_Contract(TArray<struct FName>* ContractFactionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction Of Completed Contract");

	struct
	{
		TArray<struct FName>           ContractFactionName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ContractFactionName != nullptr)
		*ContractFactionName = params.ContractFactionName;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BindOnContractStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::BindOnContractStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BindOnContractStatusChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CompleteStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::CompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Bind and Check if Contract Is Completed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::Bind_and_Check_if_Contract_Is_Completed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Bind and Check if Contract Is Completed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Check if Contract Has Been Completed
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<int>                    currentProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           isCompleted                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Check_if_Contract_Has_Been_Completed(const struct FString& contractId, TArray<int>* currentProgress, bool* isCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Check if Contract Has Been Completed");

	struct
	{
		struct FString                 contractId;
		TArray<int>                    currentProgress;
		bool                           isCompleted;
	} params;

	params.contractId = contractId;

	UObject::ProcessEvent(fn, &params);

	if (currentProgress != nullptr)
		*currentProgress = params.currentProgress;
	if (isCompleted != nullptr)
		*isCompleted = params.isCompleted;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction NPC TransformOfActiveContracts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Faction_NPC_TransformOfActiveContracts(TArray<struct FTransform> ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Faction NPC TransformOfActiveContracts");

	struct
	{
		TArray<struct FTransform>      ActorTransform;
		bool                           foundActor;
	} params;

	params.ActorTransform = ActorTransform;

	UObject::ProcessEvent(fn, &params);

	if (foundActor != nullptr)
		*foundActor = params.foundActor;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Launch Terminal Transform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::Get_Launch_Terminal_Transform(const struct FTransform& ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Get Launch Terminal Transform");

	struct
	{
		struct FTransform              ActorTransform;
		bool                           foundActor;
	} params;

	params.ActorTransform = ActorTransform;

	UObject::ProcessEvent(fn, &params);

	if (foundActor != nullptr)
		*foundActor = params.foundActor;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnRep_EscapeTerminalTransforms
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::OnRep_EscapeTerminalTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnRep_EscapeTerminalTransforms");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetEscapeTerminalTransforms
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTransform>      EscapeTerminalTransforms       (CPF_Parm, CPF_OutParm)
// bool                           Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::GetEscapeTerminalTransforms(TArray<struct FTransform>* EscapeTerminalTransforms, bool* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.GetEscapeTerminalTransforms");

	struct
	{
		TArray<struct FTransform>      EscapeTerminalTransforms;
		bool                           Output_Get;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (EscapeTerminalTransforms != nullptr)
		*EscapeTerminalTransforms = params.EscapeTerminalTransforms;
	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::BP_StartMetaQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.BP_StartMetaQuest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step1Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step1Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step2Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step2Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnMatchFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYPlayerMatchFinishedResult    Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::OnMatchFinished(EYPlayerMatchFinishedResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnMatchFinished");

	struct
	{
		EYPlayerMatchFinishedResult    Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step3Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::Step3Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.Step3Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_03_MatchPickUpAndEscape_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnSceneRequested");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerCompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerCompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientBindSceneAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindSceneAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CreateHintFaction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::CreateHintFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.CreateHintFaction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindAndCheckIfContractIsCompleted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientBindAndCheckIfContractIsCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindAndCheckIfContractIsCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindOnContractStatusChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientBindOnContractStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientBindOnContractStatusChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractStatusChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::OnContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractStatusChanged");

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params;

	params.activeContractUIData = activeContractUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientSetMission
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 missionId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientSetMission(const struct FString& missionId, int progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientSetMission");

	struct
	{
		struct FString                 missionId;
		int                            progress;
	} params;

	params.missionId = missionId;
	params.progress = progress;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientCheckContractStatusToSkipNextStep
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ClientCheckContractStatusToSkipNextStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ClientCheckContractStatusToSkipNextStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractChangedMoveFtueProgress
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_03_MatchPickUpAndEscape_C::OnContractChangedMoveFtueProgress(const struct FYActiveContractUIData& activeContractUIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.OnContractChangedMoveFtueProgress");

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params;

	params.activeContractUIData = activeContractUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep4
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_03_MatchPickUpAndEscape_C::ServerStartStep4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ServerStartStep4");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_03_MatchPickUpAndEscape_C::ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_03_MatchPickUpAndEscape.Onboarding_03_MatchPickUpAndEscape_C.ExecuteUbergraph_Onboarding_03_MatchPickUpAndEscape");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
