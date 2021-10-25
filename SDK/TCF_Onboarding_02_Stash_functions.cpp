// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Onboarding_02_Stash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Onboarding_02_Stash.Onboarding_02_Stash_C.BindOnStashOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::BindOnStashOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.BindOnStashOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.CompleteStep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::CompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.CompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step3Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step3Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step3Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::OnSetChanged(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSetChanged");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step5Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step5Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step5Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSceneRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     sceneRowHandle                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UOnboarding_02_Stash_C::OnSceneRequested(const struct FDataTableRowHandle& sceneRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnSceneRequested");

	struct
	{
		struct FDataTableRowHandle     sceneRowHandle;
	} params;

	params.sceneRowHandle = sceneRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step2Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step2Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step2Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindOnSetChanged
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::ClientBindOnSetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindOnSetChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.ServerCompleteStep
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::ServerCompleteStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.ServerCompleteStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindSceneAdded
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::ClientBindSceneAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.ClientBindSceneAdded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step1Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step1Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step1Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStashOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::OnStashOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStashOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.BP_StartMetaQuest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOnboarding_02_Stash_C::BP_StartMetaQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.BP_StartMetaQuest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStepBind
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UOnboarding_02_Stash_C::OnStepBind(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.OnStepBind");

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step4Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step4Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step4Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step6Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMissionResultType            Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::Step6Completed(EYMissionResultType Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.Step6Completed");

	struct
	{
		EYMissionResultType            Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function Onboarding_02_Stash.Onboarding_02_Stash_C.ExecuteUbergraph_Onboarding_02_Stash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOnboarding_02_Stash_C::ExecuteUbergraph_Onboarding_02_Stash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Onboarding_02_Stash.Onboarding_02_Stash_C.ExecuteUbergraph_Onboarding_02_Stash");

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
