// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_04_PlayerQuarter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCObjectTransformByRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCObjectTransformByRowHandle");

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetPlayerQuarterDoorTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetPlayerQuarterDoorTransform(const struct FTransform& ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetPlayerQuarterDoorTransform");

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           foundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::GetNPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* foundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.GetNPCTransform");

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


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_04_PlayerQuarter_C::CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CreateHintMarkersWithNPCNames");

	struct
	{
		TArray<struct FName>           Array;
		struct FName                   ActiveMarkerId;
		bool                           ReturnValue;
	} params;

	params.ActiveMarkerId = ActiveMarkerId;

	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CompleteStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::CompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.CompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInteraction
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInteractionUpdateData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UOnboarding_04_PlayerQuarter_C::OnInteraction(const struct FYInteractionUpdateData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnInteraction");

	struct
	{
		struct FYInteractionUpdateData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ServerCompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ServerCompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step1Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step1Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step2Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step2Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step3Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step3Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step3Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step4Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step4Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step4Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step5Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step5Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step5Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step6Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step6Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindSceneAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindSceneAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_04_PlayerQuarter_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnSceneRequested");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step7Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::Step7Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.Step7Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.TechTreeNodesUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYControllerPlayerQuarterComponent* playerQuarterComponent         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::TechTreeNodesUpdated(class UYControllerPlayerQuarterComponent* playerQuarterComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.TechTreeNodesUpdated");

	struct
	{
		class UYControllerPlayerQuarterComponent* playerQuarterComponent;
	} params;

	params.playerQuarterComponent = playerQuarterComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::BP_StartMetaQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.BP_StartMetaQuest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindOnTechtreeNodeUpdates
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindOnTechtreeNodeUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindOnTechtreeNodeUpdates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnGeneratorCollected
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 generatorId                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<struct FYInventoryItem> crateItems                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_04_PlayerQuarter_C::OnGeneratorCollected(const struct FString& generatorId, TArray<struct FYInventoryItem> crateItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.OnGeneratorCollected");

	struct
	{
		struct FString                 generatorId;
		TArray<struct FYInventoryItem> crateItems;
	} params;

	params.generatorId = generatorId;
	params.crateItems = crateItems;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindingOnGeneratorCollected
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientBindingOnGeneratorCollected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientBindingOnGeneratorCollected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientOnInteraction
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_04_PlayerQuarter_C::ClientOnInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ClientOnInteraction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ExecuteUbergraph_Onboarding_04_PlayerQuarter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_04_PlayerQuarter_C::ExecuteUbergraph_Onboarding_04_PlayerQuarter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_04_PlayerQuarter.Onboarding_04_PlayerQuarter_C.ExecuteUbergraph_Onboarding_04_PlayerQuarter");

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
