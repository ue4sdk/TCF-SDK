// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Objectives_List_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Objectives_List.WBP_Objectives_List_C.IsCorrectContractType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Objectives_List_C::IsCorrectContractType(const struct FString& contractId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.IsCorrectContractType"));

	struct
	{
		struct FString                 contractId;
		bool                           ReturnValue;
	} params = {};

	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Post Contract Status Change Menu Update
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::Post_Contract_Status_Change_Menu_Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Post Contract Status Change Menu Update"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Get Existing Active Contract
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_Objectives_Progress_Entry_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_Objectives_Progress_Entry_C* UWBP_Objectives_List_C::Get_Existing_Active_Contract(const struct FString& contractId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Get Existing Active Contract"));

	struct
	{
		struct FString                 contractId;
		class UWBP_Objectives_Progress_Entry_C* ReturnValue;
	} params = {};

	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Create New Active Contract Entry
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Objectives_Progress_Entry_C* AsWBP_Objectives_Progress_Entry (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_Objectives_List_C::Create_New_Active_Contract_Entry(class UWBP_Objectives_Progress_Entry_C** AsWBP_Objectives_Progress_Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Create New Active Contract Entry"));

	struct
	{
		class UWBP_Objectives_Progress_Entry_C* AsWBP_Objectives_Progress_Entry;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsWBP_Objectives_Progress_Entry != nullptr)
		*AsWBP_Objectives_Progress_Entry = params.AsWBP_Objectives_Progress_Entry;
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.On Player Initialized
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_List_C::On_Player_Initialized(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.On Player Initialized"));

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


// Function WBP_Objectives_List.WBP_Objectives_List_C.Hide Active Contract Tooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HideIcon                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_List_C::Hide_Active_Contract_Tooltip(bool HideIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Hide Active Contract Tooltip"));

	struct
	{
		bool                           HideIcon;
	} params = {};

	params.HideIcon = HideIcon;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Update Alternate Backer Visibility
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::Update_Alternate_Backer_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Update Alternate Backer Visibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Update Number Of Contracts
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::Update_Number_Of_Contracts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Update Number Of Contracts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Setup Dummy Data
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::Setup_Dummy_Data()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Setup Dummy Data"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Update Objective Progress
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractRow           contractConfigData             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_Objectives_Progress_Entry_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ObjectiveProgress              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            objectiveIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_List_C::Update_Objective_Progress(const struct FYContractRow& contractConfigData, class UWBP_Objectives_Progress_Entry_C* Widget, int ObjectiveProgress, int objectiveIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Update Objective Progress"));

	struct
	{
		struct FYContractRow           contractConfigData;
		class UWBP_Objectives_Progress_Entry_C* Widget;
		int                            ObjectiveProgress;
		int                            objectiveIndex;
	} params = {};

	params.contractConfigData = contractConfigData;
	params.Widget = Widget;
	params.ObjectiveProgress = ObjectiveProgress;
	params.objectiveIndex = objectiveIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Show Active Contract Widget
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  ActiveContr                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYContractRow           ContractConfigDat              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UWBP_Objectives_Progress_Entry_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_List_C::Show_Active_Contract_Widget(const struct FYActiveContractUIData& ActiveContr, const struct FYContractRow& ContractConfigDat, class UWBP_Objectives_Progress_Entry_C* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Show Active Contract Widget"));

	struct
	{
		struct FYActiveContractUIData  ActiveContr;
		struct FYContractRow           ContractConfigDat;
		class UWBP_Objectives_Progress_Entry_C* Widget;
	} params = {};

	params.ActiveContr = ActiveContr;
	params.ContractConfigDat = ContractConfigDat;
	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contract Progress Updated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<int>                    objectivesProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_List_C::Handle_Active_Contract_Progress_Updated(const struct FString& contractId, TArray<int>* objectivesProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contract Progress Updated"));

	struct
	{
		struct FString                 contractId;
		TArray<int>                    objectivesProgress;
	} params = {};

	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (objectivesProgress != nullptr)
		*objectivesProgress = params.objectivesProgress;
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contracts Progress Updated
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractsProgress     clampedProgress                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_List_C::Handle_Active_Contracts_Progress_Updated(const struct FYContractsProgress& clampedProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contracts Progress Updated"));

	struct
	{
		struct FYContractsProgress     clampedProgress;
	} params = {};

	params.clampedProgress = clampedProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contract Status Changed
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  ActiveContractData             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_List_C::Handle_Active_Contract_Status_Changed(const struct FYActiveContractUIData& ActiveContractData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contract Status Changed"));

	struct
	{
		struct FYActiveContractUIData  ActiveContractData;
	} params = {};

	params.ActiveContractData = ActiveContractData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contracts Status Changed
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractsUIData activeContractsUIData          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Objectives_List_C::Handle_Active_Contracts_Status_Changed(const struct FYActiveContractsUIData& activeContractsUIData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Handle Active Contracts Status Changed"));

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


// Function WBP_Objectives_List.WBP_Objectives_List_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Objectives_List_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.PreConstruct"));

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


// Function WBP_Objectives_List.WBP_Objectives_List_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Objectives_List_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Objectives_List.WBP_Objectives_List_C.ExecuteUbergraph_WBP_Objectives_List
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Objectives_List_C::ExecuteUbergraph_WBP_Objectives_List(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Objectives_List.WBP_Objectives_List_C.ExecuteUbergraph_WBP_Objectives_List"));

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
