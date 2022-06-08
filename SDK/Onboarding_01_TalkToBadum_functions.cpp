// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_01_TalkToBadum_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ManageVOsToWaitFor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ManageVOsToWaitFor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ManageVOsToWaitFor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.UpdateContractNPCListAndMarkersOnContractUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_01_TalkToBadum_C::UpdateContractNPCListAndMarkersOnContractUpdate(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.UpdateContractNPCListAndMarkersOnContractUpdate"));

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params = {};

	params.activeContractsUIData = activeContractsUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BindOnSceneAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::BindOnSceneAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BindOnSceneAdded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Names                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_01_TalkToBadum_C::CreateHintMarkersWithNPCNames(const struct FName& ID, TArray<struct FName>* Names)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.CreateHintMarkersWithNPCNames"));

	struct
	{
		TArray<struct FName>           Names;
		struct FName                   ID;
		bool                           ReturnValue;
	} params = {};

	params.ID = ID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Names != nullptr)
		*Names = params.Names;

	return params.ReturnValue;
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Get NPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_01_TalkToBadum_C::Get_NPCTransform(const struct FName& NpcRowName, const struct FTransform& ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Get NPCTransform"));

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.NpcRowName = NpcRowName;
	params.ActorTransform = ActorTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::OnStep2Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep2Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerStepCompleted
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ServerStepCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerStepCompleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientBindSceneAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneAdded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnSceneUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_01_TalkToBadum_C::OnSceneUpdated(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnSceneUpdated"));

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params = {};

	params.sceneRowHandle = sceneRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::OnStep1Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.OnStep1Completed"));

	struct
	{
		EYMissionResultType            Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneRemoved
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientBindSceneRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindSceneRemoved"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindDelegatesToContractActivation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientBindDelegatesToContractActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientBindDelegatesToContractActivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerUpdateMarkers
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Names                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_01_TalkToBadum_C::ServerUpdateMarkers(TArray<struct FName>* Names)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ServerUpdateMarkers"));

	struct
	{
		TArray<struct FName>           Names;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Names != nullptr)
		*Names = params.Names;
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientCompleteStep2AfterAnnouncments
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::ClientCompleteStep2AfterAnnouncments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ClientCompleteStep2AfterAnnouncments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Step2HandleAnnouncementsFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_01_TalkToBadum_C::Step2HandleAnnouncementsFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.Step2HandleAnnouncementsFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ExecuteUbergraph_Onboarding_01_TalkToBadum
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_01_TalkToBadum_C::ExecuteUbergraph_Onboarding_01_TalkToBadum(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_01_TalkToBadum.Onboarding_01_TalkToBadum_C.ExecuteUbergraph_Onboarding_01_TalkToBadum"));

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
