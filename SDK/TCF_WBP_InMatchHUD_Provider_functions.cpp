// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_InMatchHUD_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractsProgressUpdated
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     contractsProgress              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::OnActiveContractsProgressUpdated(const struct FYContractsProgress& contractsProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractsProgressUpdated"));

	struct
	{
		struct FYContractsProgress     contractsProgress;
	} params;

	params.contractsProgress = contractsProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractStatusChanged
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::OnActiveContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractStatusChanged"));

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params;

	params.activeContractUIData = activeContractUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ThereIsAtLeastOneActiveContract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InMatchHUD_Provider_C::ThereIsAtLeastOneActiveContract()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ThereIsAtLeastOneActiveContract"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.InitProviderAfterPlayerInitialization
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::InitProviderAfterPlayerInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.InitProviderAfterPlayerInitialization"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.BP_Initialize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::BP_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.BP_Initialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ExecuteUbergraph_WBP_InMatchHUD_Provider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InMatchHUD_Provider_C::ExecuteUbergraph_WBP_InMatchHUD_Provider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ExecuteUbergraph_WBP_InMatchHUD_Provider"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnContractExists__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::OnContractExists__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnContractExists__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActivateContract__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::OnActivateContract__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActivateContract__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
