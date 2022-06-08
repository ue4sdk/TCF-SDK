// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningTypeManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightningTypeManager_BP.LightningTypeManager_BP_C.DetermineInitialActivationDelay
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::DetermineInitialActivationDelay(float* Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.DetermineInitialActivationDelay"));

	struct
	{
		float                          Delay;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.GetShouldBeActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULightningTypeManager_BP_C::GetShouldBeActive(TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.GetShouldBeActive"));

	struct
	{
		TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive;
		bool                           Result;
	} params = {};

	params.LightningStrikeTypesToBeActive = LightningStrikeTypesToBeActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetupTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::SetupTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetupTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::OnTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     LightningRowHandle             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningTypeManager_BP_C::Initialize(const struct FDataTableRowHandle& LightningRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.Initialize"));

	struct
	{
		struct FDataTableRowHandle     LightningRowHandle;
	} params = {};

	params.LightningRowHandle = LightningRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnInitialTimerElapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::OnInitialTimerElapsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnInitialTimerElapsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.StartLightningStrikes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::StartLightningStrikes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.StartLightningStrikes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.StopLightningStrikes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::StopLightningStrikes()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.StopLightningStrikes"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetIsLightningStrikesActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULightningTypeManager_BP_C::SetIsLightningStrikesActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetIsLightningStrikesActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.RefreshIsActiveStatus
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          CurrentPhaseBlendDuration      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::RefreshIsActiveStatus(TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, float CurrentPhaseBlendDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.RefreshIsActiveStatus"));

	struct
	{
		TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive;
		float                          CurrentPhaseBlendDuration;
	} params = {};

	params.LightningStrikeTypesToBeActive = LightningStrikeTypesToBeActive;
	params.CurrentPhaseBlendDuration = CurrentPhaseBlendDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.ExecuteUbergraph_LightningTypeManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::ExecuteUbergraph_LightningTypeManager_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.ExecuteUbergraph_LightningTypeManager_BP"));

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


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnRequestTimerClear__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ULightningTypeManager_BP_C* manager                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::OnRequestTimerClear__DelegateSignature(class ULightningTypeManager_BP_C* manager)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnRequestTimerClear__DelegateSignature"));

	struct
	{
		class ULightningTypeManager_BP_C* manager;
	} params = {};

	params.manager = manager;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
