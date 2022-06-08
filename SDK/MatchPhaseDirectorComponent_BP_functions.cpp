// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseDirectorComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindValidVariationIndicesForTag
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TArray<struct FYMatchPhaseVisualVariation> Variations                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            GroupTag                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundAtLeastOne                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// TArray<int>                    ValidIndices                   (CPF_Parm, CPF_OutParm)

void UMatchPhaseDirectorComponent_BP_C::FindValidVariationIndicesForTag(const struct FGameplayTag& GroupTag, TArray<struct FYMatchPhaseVisualVariation>* Variations, bool* FoundAtLeastOne, TArray<int>* ValidIndices)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindValidVariationIndicesForTag"));

	struct
	{
		TArray<struct FYMatchPhaseVisualVariation> Variations;
		struct FGameplayTag            GroupTag;
		bool                           FoundAtLeastOne;
		TArray<int>                    ValidIndices;
	} params = {};

	params.GroupTag = GroupTag;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Variations != nullptr)
		*Variations = params.Variations;
	if (FoundAtLeastOne != nullptr)
		*FoundAtLeastOne = params.FoundAtLeastOne;
	if (ValidIndices != nullptr)
		*ValidIndices = params.ValidIndices;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindVisualVariationForNextPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NextMatchPhaseRowHandle        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseDirectorComponent_BP_C::FindVisualVariationForNextPhase(const struct FDataTableRowHandle& NextMatchPhaseRowHandle, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindVisualVariationForNextPhase"));

	struct
	{
		struct FDataTableRowHandle     NextMatchPhaseRowHandle;
		int                            Index;
	} params = {};

	params.NextMatchPhaseRowHandle = NextMatchPhaseRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Index != nullptr)
		*Index = params.Index;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningDisabled
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::SetPlayerSpawningDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningDisabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningEnabled
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::SetPlayerSpawningEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           enableSpawning                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseDirectorComponent_BP_C::SetPlayerSpawningTimer(bool enableSpawning, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetPlayerSpawningTimer"));

	struct
	{
		bool                           enableSpawning;
		float                          Delay;
	} params = {};

	params.enableSpawning = enableSpawning;
	params.Delay = Delay;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.LogMatchFlowPhaseHandles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::LogMatchFlowPhaseHandles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.LogMatchFlowPhaseHandles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.TrySetupMatchFlowPhaseHandles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::TrySetupMatchFlowPhaseHandles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.TrySetupMatchFlowPhaseHandles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartNextMatchPhase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::StartNextMatchPhase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartNextMatchPhase"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetupMatchFlow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::SetupMatchFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetupMatchFlow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindPreviousMatchPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     NewMatchPhase                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::FindPreviousMatchPhase(struct FDataTableRowHandle* NewMatchPhase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindPreviousMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     NewMatchPhase;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewMatchPhase != nullptr)
		*NewMatchPhase = params.NewMatchPhase;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindNextMatchPhase
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     NewMatchPhase                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::FindNextMatchPhase(struct FDataTableRowHandle* NewMatchPhase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.FindNextMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     NewMatchPhase;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NewMatchPhase != nullptr)
		*NewMatchPhase = params.NewMatchPhase;
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetMatchPhase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            visualVariationIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::SetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int visualVariationIndex, bool ForceTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.SetMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
		int                            visualVariationIndex;
		bool                           ForceTransition;
	} params = {};

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;
	params.visualVariationIndex = visualVariationIndex;
	params.ForceTransition = ForceTransition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartMatchFlow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::StartMatchFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.StartMatchFlow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ForceSetMatchPhase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            VariationIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseDirectorComponent_BP_C::ForceSetMatchPhase(const struct FDataTableRowHandle& MatchPhaseDefinitionRowHandle, int VariationIndex, bool ForceTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ForceSetMatchPhase"));

	struct
	{
		struct FDataTableRowHandle     MatchPhaseDefinitionRowHandle;
		int                            VariationIndex;
		bool                           ForceTransition;
	} params = {};

	params.MatchPhaseDefinitionRowHandle = MatchPhaseDefinitionRowHandle;
	params.VariationIndex = VariationIndex;
	params.ForceTransition = ForceTransition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.BP_OnRep_CurrentMatchPhaseData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMatchPhaseDirectorComponent_BP_C::BP_OnRep_CurrentMatchPhaseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.BP_OnRep_CurrentMatchPhaseData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ExecuteUbergraph_MatchPhaseDirectorComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseDirectorComponent_BP_C::ExecuteUbergraph_MatchPhaseDirectorComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseDirectorComponent_BP.MatchPhaseDirectorComponent_BP_C.ExecuteUbergraph_MatchPhaseDirectorComponent_BP"));

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
