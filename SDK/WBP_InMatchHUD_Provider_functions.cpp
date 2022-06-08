// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InMatchHUD_Provider_classes.hpp"

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
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractsProgressUpdated"));

	struct
	{
		struct FYContractsProgress     contractsProgress;
	} params = {};

	params.contractsProgress = contractsProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractStatusChanged
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::OnActiveContractStatusChanged(const struct FYActiveContractUIData& activeContractUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractStatusChanged"));

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params = {};

	params.activeContractUIData = activeContractUIData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractsStatusChanged
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::OnActiveContractsStatusChanged(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActiveContractsStatusChanged"));

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


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ThereIsAtLeastOneActiveContract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_InMatchHUD_Provider_C::ThereIsAtLeastOneActiveContract()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ThereIsAtLeastOneActiveContract"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.InitProviderAfterPlayerInitialization
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_InMatchHUD_Provider_C::InitProviderAfterPlayerInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.InitProviderAfterPlayerInitialization"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.BP_InitializeProvider
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::BP_InitializeProvider()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.BP_InitializeProvider"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ExecuteUbergraph_WBP_InMatchHUD_Provider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InMatchHUD_Provider_C::ExecuteUbergraph_WBP_InMatchHUD_Provider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.ExecuteUbergraph_WBP_InMatchHUD_Provider"));

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


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnContractExists__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::OnContractExists__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnContractExists__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActivateContract__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InMatchHUD_Provider_C::OnActivateContract__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_InMatchHUD_Provider.WBP_InMatchHUD_Provider_C.OnActivateContract__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
