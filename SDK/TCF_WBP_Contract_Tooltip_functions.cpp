// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Contract_Tooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Handle User Requested Contract Cancel
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Tooltip_C::Handle_User_Requested_Contract_Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Handle User Requested Contract Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Dummy Data
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contract_Tooltip_C::Setup_Dummy_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Dummy Data");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Tooltip Contract
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Contract_Tooltip_C::Setup_Tooltip_Contract(const struct FYContractUiData& contractUiData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Setup Tooltip Contract");

	struct
	{
		struct FYContractUiData        contractUiData;
	} params;

	params.contractUiData = contractUiData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_CreateSetAndAddContractReward
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractReward        contractReward                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           showDivider                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYWidget*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget* UWBP_Contract_Tooltip_C::BP_CreateSetAndAddContractReward(const struct FYContractReward& contractReward, bool showDivider)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_CreateSetAndAddContractReward");

	struct
	{
		struct FYContractReward        contractReward;
		bool                           showDivider;
		class UYWidget*                ReturnValue;
	} params;

	params.contractReward = contractReward;
	params.showDivider = showDivider;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_SetupContract
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Tooltip_C::BP_SetupContract(const struct FYContractUiData& contractUiData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.BP_SetupContract");

	struct
	{
		struct FYContractUiData        contractUiData;
	} params;

	params.contractUiData = contractUiData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Tooltip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Contract_Tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.ExecuteUbergraph_WBP_Contract_Tooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Tooltip_C::ExecuteUbergraph_WBP_Contract_Tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Tooltip.WBP_Contract_Tooltip_C.ExecuteUbergraph_WBP_Contract_Tooltip");

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
