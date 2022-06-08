// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Onboarding_06_TalkToBadumCraftingStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCObjectTransformByRowHandle
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::GetNPCObjectTransformByRowHandle(const struct FName& NpcRowName, struct FTransform* ActorTransform, bool* FoundActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCObjectTransformByRowHandle"));

	struct
	{
		struct FName                   NpcRowName;
		struct FTransform              ActorTransform;
		bool                           FoundActor;
	} params = {};

	params.NpcRowName = NpcRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCTransform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NpcRowName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundActor                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FTransform              ActorTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::GetNPCTransform(const struct FName& NpcRowName, bool* FoundActor, struct FTransform* ActorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.GetNPCTransform"));

	struct
	{
		struct FName                   NpcRowName;
		bool                           FoundActor;
		struct FTransform              ActorTransform;
	} params = {};

	params.NpcRowName = NpcRowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundActor != nullptr)
		*FoundActor = params.FoundActor;
	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CreateHintMarkersWithNPCNames
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ActiveMarkerId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UOnboarding_06_TalkToBadumCraftingStation_C::CreateHintMarkersWithNPCNames(const struct FName& ActiveMarkerId, TArray<struct FName>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.CreateHintMarkersWithNPCNames"));

	struct
	{
		TArray<struct FName>           Array;
		struct FName                   ActiveMarkerId;
		bool                           ReturnValue;
	} params = {};

	params.ActiveMarkerId = ActiveMarkerId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::BP_StartMetaQuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.BP_StartMetaQuest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_06_TalkToBadumCraftingStation_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.OnSceneRequested"));

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


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_06_TalkToBadumCraftingStation_C::ClientBindSceneAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ClientBindSceneAdded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_06_TalkToBadumCraftingStation_C::Step1Completed(EYMissionResultType Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.Step1Completed"));

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


// Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_06_TalkToBadumCraftingStation_C::ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Onboarding_06_TalkToBadumCraftingStation.Onboarding_06_TalkToBadumCraftingStation_C.ExecuteUbergraph_Onboarding_06_TalkToBadumCraftingStation"));

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
