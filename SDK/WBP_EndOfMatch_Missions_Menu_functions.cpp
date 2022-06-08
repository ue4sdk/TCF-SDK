// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_Missions_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.LogSortedContractInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 VariableName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Missions_Menu_C::LogSortedContractInfo(const struct FString& contractId, const struct FString& VariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.LogSortedContractInfo"));

	struct
	{
		struct FString                 contractId;
		struct FString                 VariableName;
	} params = {};

	params.contractId = contractId;
	params.VariableName = VariableName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionsFromContractsUIData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractUiData> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ShowAdditionallyChainEnd       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Missions_Menu_C::SetupMissionsFromContractsUIData(bool ShowAdditionallyChainEnd, TArray<struct FYContractUiData>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionsFromContractsUIData"));

	struct
	{
		TArray<struct FYContractUiData> Array;
		bool                           ShowAdditionallyChainEnd;
	} params = {};

	params.ShowAdditionallyChainEnd = ShowAdditionallyChainEnd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Missions_Menu_C::SetStage(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetStage"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionChainWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Mission_ChainEnd_Entry_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_EndOfMatch_Mission_ChainEnd_Entry_C* UWBP_EndOfMatch_Missions_Menu_C::SetupMissionChainWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionChainWidget"));

	struct
	{
		class UWBP_EndOfMatch_Mission_ChainEnd_Entry_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_EndOfMatch_Mission_Entry_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWBP_EndOfMatch_Mission_Entry_C* UWBP_EndOfMatch_Missions_Menu_C::SetupMissionWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionWidget"));

	struct
	{
		class UWBP_EndOfMatch_Mission_Entry_C* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionsInternal
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYActiveContractUIData> InActiveContracts              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FYContractProgress> InAllContractsProgress         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_EndOfMatch_Missions_Menu_C::SetupMissionsInternal(TArray<struct FYActiveContractUIData>* InActiveContracts, TArray<struct FYContractProgress>* InAllContractsProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissionsInternal"));

	struct
	{
		TArray<struct FYActiveContractUIData> InActiveContracts;
		TArray<struct FYContractProgress> InAllContractsProgress;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InActiveContracts != nullptr)
		*InActiveContracts = params.InActiveContracts;
	if (InAllContractsProgress != nullptr)
		*InAllContractsProgress = params.InAllContractsProgress;
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::SetupMissions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.SetupMissions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PlayScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::PlayScreenInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PlayScreenInAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PlayScreenOutAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::PlayScreenOutAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PlayScreenOutAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.OnScreenIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::OnScreenIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.OnScreenIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Missions_Menu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.PreConstruct"));

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


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_Missions_Menu
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Missions_Menu_C::ExecuteUbergraph_WBP_EndOfMatch_Missions_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ExecuteUbergraph_WBP_EndOfMatch_Missions_Menu"));

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


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ScreenOut__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::ScreenOut__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ScreenOut__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ScreenIn__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Missions_Menu_C::ScreenIn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Missions_Menu.WBP_EndOfMatch_Missions_Menu_C.ScreenIn__DelegateSignature"));

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
