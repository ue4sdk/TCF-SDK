// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseDirectorComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.LogMatchFlowPhaseHandles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::LogMatchFlowPhaseHandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.LogMatchFlowPhaseHandles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.TrySetupMatchFlowPhaseHandles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::TrySetupMatchFlowPhaseHandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.TrySetupMatchFlowPhaseHandles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartNextMatchPhase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::StartNextMatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartNextMatchPhase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetupMatchFlow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::SetupMatchFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetupMatchFlow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindPreviousMatchPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     NewMatchPhase                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::FindPreviousMatchPhase(struct FDataTableRowHandle* NewMatchPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindPreviousMatchPhase");

	struct
	{
		struct FDataTableRowHandle     NewMatchPhase;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewMatchPhase != nullptr)
		*NewMatchPhase = params.NewMatchPhase;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindNextMatchPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     NewMatchPhase                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::FindNextMatchPhase(struct FDataTableRowHandle* NewMatchPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindNextMatchPhase");

	struct
	{
		struct FDataTableRowHandle     NewMatchPhase;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewMatchPhase != nullptr)
		*NewMatchPhase = params.NewMatchPhase;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetMatchPhase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           DebugSetMatchPhase             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::SetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, bool DebugSetMatchPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetMatchPhase");

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
		bool                           DebugSetMatchPhase;
	} params;

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;
	params.DebugSetMatchPhase = DebugSetMatchPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartMatchFlow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::StartMatchFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartMatchFlow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ForceSetMatchPhase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::ForceSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ForceSetMatchPhase");

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
	} params;

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.BP_OnRep_CurrentMatchPhaseData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::BP_OnRep_CurrentMatchPhaseData()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.BP_OnRep_CurrentMatchPhaseData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ExecuteUbergraph_MatchPhaseDirectorComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseDirectorComponent_BP_C::ExecuteUbergraph_MatchPhaseDirectorComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ExecuteUbergraph_MatchPhaseDirectorComponent_BP");

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
