// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGameState_Match_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGameState_Match_BP.YGameState_Match_BP_C.SetWarningTimers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeUntilDeactivation          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYGameState_Match_BP_C::SetWarningTimers(float TimeUntilDeactivation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.SetWarningTimers"));

	struct
	{
		float                          TimeUntilDeactivation;
	} params = {};

	params.TimeUntilDeactivation = TimeUntilDeactivation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.FindTimeUntilEvacDeactivation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        CurrentMatchPhaseData          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// float                          Delay                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYGameState_Match_BP_C::FindTimeUntilEvacDeactivation(const struct FYMatchPhaseData& CurrentMatchPhaseData, float* Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.FindTimeUntilEvacDeactivation"));

	struct
	{
		struct FYMatchPhaseData        CurrentMatchPhaseData;
		float                          Delay;
	} params = {};

	params.CurrentMatchPhaseData = CurrentMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AYGameState_Match_BP_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.DebugTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::DebugTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.DebugTime"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_5min
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowStormWarning_5min()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_5min"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_1min
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowStormWarning_1min()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowStormWarning_1min"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowEvacDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowEvacDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowEvacDisabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ShowEvacEnabledAgain
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AYGameState_Match_BP_C::ShowEvacEnabledAgain()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ShowEvacEnabledAgain"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.ExecuteUbergraph_YGameState_Match_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYGameState_Match_BP_C::ExecuteUbergraph_YGameState_Match_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.ExecuteUbergraph_YGameState_Match_BP"));

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


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseVisualRow   VisualMatchPhaseData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AYGameState_Match_BP_C::OnMatchPhaseVisualsUpdated__DelegateSignature(const struct FYMatchPhaseVisualRow& VisualMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.OnMatchPhaseVisualsUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseVisualRow   VisualMatchPhaseData;
	} params = {};

	params.VisualMatchPhaseData = VisualMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AYGameState_Match_BP_C::OnReplicatedMatchPhaseDataUpdated__DelegateSignature(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameState_Match_BP.YGameState_Match_BP_C.OnReplicatedMatchPhaseDataUpdated__DelegateSignature"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
