// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Contract_Active_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Data for Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValidData                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYContractUiData        YContractUiData                (CPF_Parm, CPF_OutParm)

void UWBP_Contract_Active_Entry_C::Get_Contract_Data_for_Tooltip(bool* IsValidData, struct FYContractUiData* YContractUiData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Data for Tooltip");

	struct
	{
		bool                           IsValidData;
		struct FYContractUiData        YContractUiData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsValidData != nullptr)
		*IsValidData = params.IsValidData;
	if (YContractUiData != nullptr)
		*YContractUiData = params.YContractUiData;
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Entry Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Contract_Active_Entry_C::Get_Contract_Entry_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Get Contract Entry Tooltip");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Info Icon Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Visible                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UWBP_Contract_Active_Entry_C::Set_Info_Icon_Visibility(bool Is_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Info Icon Visibility");

	struct
	{
		bool                           Is_Visible;
	} params;

	params.Is_Visible = Is_Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Alternate Backer Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Alternate_Backer_Enabled    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UWBP_Contract_Active_Entry_C::Set_Alternate_Backer_Visibility(bool Is_Alternate_Backer_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Set Alternate Backer Visibility");

	struct
	{
		bool                           Is_Alternate_Backer_Enabled;
	} params;

	params.Is_Alternate_Backer_Enabled = Is_Alternate_Backer_Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Contract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        YContractUiData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper)

void UWBP_Contract_Active_Entry_C::Setup_Contract(const struct FYContractUiData& YContractUiData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Contract");

	struct
	{
		struct FYContractUiData        YContractUiData;
	} params;

	params.YContractUiData = YContractUiData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Objectives
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractObjective> objectives                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<int>                    ObjectivePerProgress           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Active_Entry_C::Setup_Objectives(TArray<struct FYContractObjective>* objectives, TArray<int>* ObjectivePerProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Objectives");

	struct
	{
		TArray<struct FYContractObjective> objectives;
		TArray<int>                    ObjectivePerProgress;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (objectives != nullptr)
		*objectives = params.objectives;
	if (ObjectivePerProgress != nullptr)
		*ObjectivePerProgress = params.ObjectivePerProgress;
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Base Info
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractRow           Contract_Config_Data           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Contract_Active_Entry_C::Setup_Base_Info(const struct FYContractRow& Contract_Config_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.Setup Base Info");

	struct
	{
		struct FYContractRow           Contract_Config_Data;
	} params;

	params.Contract_Config_Data = Contract_Config_Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_CreateSetAndAddContractReward
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractReward        contractReward                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           showDivider                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYWidget*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget* UWBP_Contract_Active_Entry_C::BP_CreateSetAndAddContractReward(const struct FYContractReward& contractReward, bool showDivider)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_CreateSetAndAddContractReward");

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


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Contract_Active_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_SetupContract
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Contract_Active_Entry_C::BP_SetupContract(const struct FYContractUiData& contractUiData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.BP_SetupContract");

	struct
	{
		struct FYContractUiData        contractUiData;
	} params;

	params.contractUiData = contractUiData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.ExecuteUbergraph_WBP_Contract_Active_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Contract_Active_Entry_C::ExecuteUbergraph_WBP_Contract_Active_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Contract_Active_Entry.WBP_Contract_Active_Entry_C.ExecuteUbergraph_WBP_Contract_Active_Entry");

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
