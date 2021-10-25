// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_01_TalkToBadum_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Names                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_01_TalkToBadum_C::CreateHintMarkersWithNPCNames(const struct FName& ID, TArray<struct FName>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.CreateHintMarkersWithNPCNames");

	struct
	{
		TArray<struct FName>           Names;
		struct FName                   ID;
		bool                           ReturnValue;
	} params;

	params.ID = ID;

	UObject::ProcessEvent(fn, &params);

	if (Names != nullptr)
		*Names = params.Names;

	return params.ReturnValue;
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Backend Response To A Request To Change A Contract Status
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isFail                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           anActiveContractHasBeenCancelled (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_01_TalkToBadum_C::Handle_Backend_Response_To_A_Request_To_Change_A_Contract_Status(bool isFail, bool anActiveContractHasBeenCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Backend Response To A Request To Change A Contract Status");

	struct
	{
		bool                           isFail;
		bool                           anActiveContractHasBeenCancelled;
	} params;

	params.isFail = isFail;
	params.anActiveContractHasBeenCancelled = anActiveContractHasBeenCancelled;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Successfull Contract Status Change
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_01_TalkToBadum_C::Handle_Successfull_Contract_Status_Change(const struct FYActiveContractUIData& activeContractUIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Handle Successfull Contract Status Change");

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params;

	params.activeContractUIData = activeContractUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Bind on Contract Backend Responses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::Bind_on_Contract_Backend_Responses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Bind on Contract Backend Responses");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Complete Step
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::Complete_Step()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Complete Step");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Get NPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_01_TalkToBadum_C::Get_NPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Get NPCTransform");

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           foundActor;
	} params;

	params.NpcRowName = NpcRowName;
	params.ActorTransform = ActorTransform;

	UObject::ProcessEvent(fn, &params);

	if (foundActor != nullptr)
		*foundActor = params.foundActor;
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::BP_StartMetaQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BP_StartMetaQuest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::OnStep2Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep2Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerStepCompleted
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ServerStepCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerStepCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientBindSceneAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_01_TalkToBadum_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnSceneRequested");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ServerCompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerCompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::OnStep1Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep1Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindOnContactStatusChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientBindOnContactStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindOnContactStatusChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ExecuteUbergraph_Onboarding_01_TalkToBadum
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::ExecuteUbergraph_Onboarding_01_TalkToBadum(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ExecuteUbergraph_Onboarding_01_TalkToBadum");

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
