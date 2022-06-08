// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Objectives_Progress_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Objectives_Progress_Entry_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.SetStandAloneBackerVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsStandAloneBackerVisible      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_Progress_Entry_C::SetStandAloneBackerVisibility(bool IsStandAloneBackerVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.SetStandAloneBackerVisibility"));

	struct
	{
		bool                           IsStandAloneBackerVisible;
	} params = {};

	params.IsStandAloneBackerVisible = IsStandAloneBackerVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Get Contract Data for Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValidData                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYContractUiData        YContractUiData                (CPF_Parm, CPF_OutParm)

void UWBP_Objectives_Progress_Entry_C::Get_Contract_Data_for_Tooltip(bool* IsValidData, struct FYContractUiData* YContractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Get Contract Data for Tooltip"));

	struct
	{
		bool                           IsValidData;
		struct FYContractUiData        YContractUiData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValidData != nullptr)
		*IsValidData = params.IsValidData;
	if (YContractUiData != nullptr)
		*YContractUiData = params.YContractUiData;
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Get Contract Entry Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Objectives_Progress_Entry_C::Get_Contract_Entry_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Get Contract Entry Tooltip"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Set Info Icon Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Visible                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_Progress_Entry_C::Set_Info_Icon_Visibility(bool Is_Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Set Info Icon Visibility"));

	struct
	{
		bool                           Is_Visible;
	} params = {};

	params.Is_Visible = Is_Visible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Set Alternate Backer Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Alternate_Backer_Enabled    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_Progress_Entry_C::Set_Alternate_Backer_Visibility(bool Is_Alternate_Backer_Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Set Alternate Backer Visibility"));

	struct
	{
		bool                           Is_Alternate_Backer_Enabled;
	} params = {};

	params.Is_Alternate_Backer_Enabled = Is_Alternate_Backer_Enabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Contract
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        YContractUiData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_Progress_Entry_C::Setup_Contract(const struct FYContractUiData& YContractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Contract"));

	struct
	{
		struct FYContractUiData        YContractUiData;
	} params = {};

	params.YContractUiData = YContractUiData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Objectives
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractObjective> objectives                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<int>                    ObjectivePerProgress           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_Progress_Entry_C::Setup_Objectives(TArray<struct FYContractObjective>* objectives, TArray<int>* ObjectivePerProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Objectives"));

	struct
	{
		TArray<struct FYContractObjective> objectives;
		TArray<int>                    ObjectivePerProgress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (objectives != nullptr)
		*objectives = params.objectives;
	if (ObjectivePerProgress != nullptr)
		*ObjectivePerProgress = params.ObjectivePerProgress;
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Base Info
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractRow           Contract_Config_Data           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Objectives_Progress_Entry_C::Setup_Base_Info(const struct FYContractRow& Contract_Config_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Setup Base Info"));

	struct
	{
		struct FYContractRow           Contract_Config_Data;
	} params = {};

	params.Contract_Config_Data = Contract_Config_Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_CreateSetAndAddContractReward
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractReward        contractReward                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           showDivider                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYWidget*                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget* UWBP_Objectives_Progress_Entry_C::BP_CreateSetAndAddContractReward(const struct FYContractReward& contractReward, bool showDivider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_CreateSetAndAddContractReward"));

	struct
	{
		struct FYContractReward        contractReward;
		bool                           showDivider;
		class UYWidget*                ReturnValue;
	} params = {};

	params.contractReward = contractReward;
	params.showDivider = showDivider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_Progress_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_SetupContract
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractUiData        contractUiData                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_Progress_Entry_C::BP_SetupContract(const struct FYContractUiData& contractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.BP_SetupContract"));

	struct
	{
		struct FYContractUiData        contractUiData;
	} params = {};

	params.contractUiData = contractUiData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Objectives_Progress_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.SetupShowTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Progress_Entry_C::SetupShowTimer(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.SetupShowTimer"));

	struct
	{
		float                          Duration;
	} params = {};

	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.ExecuteUbergraph_WBP_Objectives_Progress_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Progress_Entry_C::ExecuteUbergraph_WBP_Objectives_Progress_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.ExecuteUbergraph_WBP_Objectives_Progress_Entry"));

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


// Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.OnShowTimeElapsed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             WidgetToRemove                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_Progress_Entry_C::OnShowTimeElapsed__DelegateSignature(class UUserWidget* WidgetToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_Progress_Entry.WBP_Objectives_Progress_Entry_C.OnShowTimeElapsed__DelegateSignature"));

	struct
	{
		class UUserWidget*             WidgetToRemove;
	} params = {};

	params.WidgetToRemove = WidgetToRemove;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
