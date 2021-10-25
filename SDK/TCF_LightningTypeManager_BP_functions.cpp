// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LightningTypeManager_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.DetermineInitialActivationDelay");

	struct
	{
		float                          Delay;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.GetShouldBeActive");

	struct
	{
		TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive;
		bool                           Result;
	} params;

	params.LightningStrikeTypesToBeActive = LightningStrikeTypesToBeActive;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetupTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::SetupTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetupTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.Initialize
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     LightningRowHandle             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ULightningTypeManager_BP_C::Initialize(const struct FDataTableRowHandle& LightningRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.Initialize");

	struct
	{
		struct FDataTableRowHandle     LightningRowHandle;
	} params;

	params.LightningRowHandle = LightningRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnInitialTimerElapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::OnInitialTimerElapsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.OnInitialTimerElapsed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.StartLightningStrikes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::StartLightningStrikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.StartLightningStrikes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.StopLightningStrikes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULightningTypeManager_BP_C::StopLightningStrikes()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.StopLightningStrikes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetIsLightningStrikesActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULightningTypeManager_BP_C::SetIsLightningStrikesActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.SetIsLightningStrikesActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.RefreshIsActiveStatus
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          CurrentPhaseBlendDuration      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::RefreshIsActiveStatus(TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive, float CurrentPhaseBlendDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.RefreshIsActiveStatus");

	struct
	{
		TArray<struct FDataTableRowHandle> LightningStrikeTypesToBeActive;
		float                          CurrentPhaseBlendDuration;
	} params;

	params.LightningStrikeTypesToBeActive = LightningStrikeTypesToBeActive;
	params.CurrentPhaseBlendDuration = CurrentPhaseBlendDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function LightningTypeManager_BP.LightningTypeManager_BP_C.ExecuteUbergraph_LightningTypeManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULightningTypeManager_BP_C::ExecuteUbergraph_LightningTypeManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningTypeManager_BP.LightningTypeManager_BP_C.ExecuteUbergraph_LightningTypeManager_BP");

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
