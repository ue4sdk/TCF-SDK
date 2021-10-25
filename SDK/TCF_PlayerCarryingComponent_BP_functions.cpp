// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCarryingComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.UpdateDrag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::UpdateDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.UpdateDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryingDebugData
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYGenericDebuggerShapeEntry> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TArray<struct FYGenericDebuggerShapeEntry> UPlayerCarryingComponent_BP_C::BP_GetCarryingDebugData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryingDebugData");

	struct
	{
		TArray<struct FYGenericDebuggerShapeEntry> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.GetDebugInfoFromHitResult
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPlayerCarryingComponent_BP_C::GetDebugInfoFromHitResult(const struct FHitResult& Hit, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.GetDebugInfoFromHitResult");

	struct
	{
		struct FHitResult              Hit;
		struct FString                 Result;
	} params;

	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UPlayerCarryingComponent_BP_C::BP_GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetDebugDescription");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DetermineLookAtRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCarryingComponent_BP_C::DetermineLookAtRotation(struct FRotator* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DetermineLookAtRotation");

	struct
	{
		struct FRotator                NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryableComponent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCarryableComponent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYCarryableComponent* UPlayerCarryingComponent_BP_C::BP_GetCarryableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.BP_GetCarryableComponent");

	struct
	{
		class UYCarryableComponent*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryStartCarrying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCarryableComponent_BP_C* InCarryableComponent           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCarryingComponent_BP_C::TryStartCarrying(class UCarryableComponent_BP_C* InCarryableComponent, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryStartCarrying");

	struct
	{
		class UCarryableComponent_BP_C* InCarryableComponent;
		bool                           Result;
	} params;

	params.InCarryableComponent = InCarryableComponent;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnRep_CarryableComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::OnRep_CarryableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnRep_CarryableComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TraceForCarryLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ResultTraceEnd                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ResultLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryingComponent_BP_C::TraceForCarryLocation(struct FVector* ResultTraceEnd, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TraceForCarryLocation");

	struct
	{
		struct FVector                 ResultTraceEnd;
		struct FVector                 ResultLocation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ResultTraceEnd != nullptr)
		*ResultTraceEnd = params.ResultTraceEnd;
	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnHealthEmpty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryingComponent_BP_C::OnHealthEmpty(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnHealthEmpty");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnCarryStateDeactivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCarryingComponent_BP_C::OnCarryStateDeactivated(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.OnCarryStateDeactivated");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryRequestStopCarry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::TryRequestStopCarry()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TryRequestStopCarry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TrySetFirstPersonMeshVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCarryingComponent_BP_C::TrySetFirstPersonMeshVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.TrySetFirstPersonMeshVisibility");

	struct
	{
		bool                           bNewVisibility;
	} params;

	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DoDropCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::DoDropCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.DoDropCheck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStoppedCarrying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::NotifyStoppedCarrying()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStoppedCarrying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStartedCarrying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCarryingComponent_BP_C::NotifyStartedCarrying()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.NotifyStartedCarrying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryingComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ExecuteUbergraph_PlayerCarryingComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCarryingComponent_BP_C::ExecuteUbergraph_PlayerCarryingComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCarryingComponent_BP.PlayerCarryingComponent_BP_C.ExecuteUbergraph_PlayerCarryingComponent_BP");

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
