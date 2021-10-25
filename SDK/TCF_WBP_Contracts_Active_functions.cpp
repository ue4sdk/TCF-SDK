// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Contracts_Active_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Contracts_Active.WBP_Contracts_Active_C.On Player Initialized
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contracts_Active_C::On_Player_Initialized(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.On Player Initialized");

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Tooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HideIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contracts_Active_C::Hide_Active_Contract_Tooltip(bool HideIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Tooltip");

	struct
	{
		bool                           HideIcon;
	} params;

	params.HideIcon = HideIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Get Current Num Of Active Contracts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_Contracts_Active_C::Get_Current_Num_Of_Active_Contracts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Get Current Num Of Active Contracts");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Alternate Backer Visibility
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contracts_Active_C::Update_Alternate_Backer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Alternate Backer Visibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Number Of Contracts
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumOfActiveContracts           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contracts_Active_C::Update_Number_Of_Contracts(int NumOfActiveContracts)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Number Of Contracts");

	struct
	{
		int                            NumOfActiveContracts;
	} params;

	params.NumOfActiveContracts = NumOfActiveContracts;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Setup Dummy Data
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Contracts_Active_C::Setup_Dummy_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Setup Dummy Data");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Contracts_Active_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Objective Progress
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractRow           contractConfigData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ObjectiveProgress              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            objectiveIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contracts_Active_C::Update_Objective_Progress(const struct FYContractRow& contractConfigData, class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry, int ObjectiveProgress, int objectiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Update Objective Progress");

	struct
	{
		struct FYContractRow           contractConfigData;
		class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry;
		int                            ObjectiveProgress;
		int                            objectiveIndex;
	} params;

	params.contractConfigData = contractConfigData;
	params.WBP_Contract_Entry = WBP_Contract_Entry;
	params.ObjectiveProgress = ObjectiveProgress;
	params.objectiveIndex = objectiveIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Show Active Contract Widget
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  ActiveContr                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYContractRow           ContractConfigDat              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_Contract_Active_Entry_C* WBP_Contract_Entr              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contracts_Active_C::Show_Active_Contract_Widget(const struct FYActiveContractUIData& ActiveContr, const struct FYContractRow& ContractConfigDat, class UWBP_Contract_Active_Entry_C* WBP_Contract_Entr)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Show Active Contract Widget");

	struct
	{
		struct FYActiveContractUIData  ActiveContr;
		struct FYContractRow           ContractConfigDat;
		class UWBP_Contract_Active_Entry_C* WBP_Contract_Entr;
	} params;

	params.ActiveContr = ActiveContr;
	params.ContractConfigDat = ContractConfigDat;
	params.WBP_Contract_Entr = WBP_Contract_Entr;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Widget
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contracts_Active_C::Hide_Active_Contract_Widget(class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Hide Active Contract Widget");

	struct
	{
		class UWBP_Contract_Active_Entry_C* WBP_Contract_Entry;
	} params;

	params.WBP_Contract_Entry = WBP_Contract_Entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Progress Updated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<int>                    objectivesProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contracts_Active_C::Handle_Active_Contract_Progress_Updated(const struct FString& contractId, TArray<int>* objectivesProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Progress Updated");

	struct
	{
		struct FString                 contractId;
		TArray<int>                    objectivesProgress;
	} params;

	params.contractId = contractId;

	UObject::ProcessEvent(fn, &params);

	if (objectivesProgress != nullptr)
		*objectivesProgress = params.objectivesProgress;
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Progress Updated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     clampedProgress                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contracts_Active_C::Handle_Active_Contracts_Progress_Updated(const struct FYContractsProgress& clampedProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Progress Updated");

	struct
	{
		struct FYContractsProgress     clampedProgress;
	} params;

	params.clampedProgress = clampedProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Status Changed
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  ActiveContractData             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contracts_Active_C::Handle_Active_Contract_Status_Changed(const struct FYActiveContractUIData& ActiveContractData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contract Status Changed");

	struct
	{
		struct FYActiveContractUIData  ActiveContractData;
	} params;

	params.ActiveContractData = ActiveContractData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Status Changed
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contracts_Active_C::Handle_Active_Contracts_Status_Changed(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.Handle Active Contracts Status Changed");

	struct
	{
		struct FYActiveContractsUIData activeContractsUIData;
	} params;

	params.activeContractsUIData = activeContractsUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contracts_Active_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Contracts_Active_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contracts_Active.WBP_Contracts_Active_C.ExecuteUbergraph_WBP_Contracts_Active
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contracts_Active_C::ExecuteUbergraph_WBP_Contracts_Active(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contracts_Active.WBP_Contracts_Active_C.ExecuteUbergraph_WBP_Contracts_Active");

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
