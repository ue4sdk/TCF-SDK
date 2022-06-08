// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_MissionChain_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PlayHighlightAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::PlayHighlightAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PlayHighlightAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.AddRewardWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractReward        InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_MissionChain_Entry_C::AddRewardWidget(const struct FYContractReward& InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.AddRewardWidget"));

	struct
	{
		struct FYContractReward        InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.GetText_Debug
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_MissionChain_Entry_C::GetText_Debug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.GetText_Debug"));

	struct
	{
		struct FText                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::SetupButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.OnClickedButton
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::OnClickedButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.OnClickedButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_MissionChain_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PreConstruct"));

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


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MissionChain_Entry_C::BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.BndEvt__WBP_ContractAction_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupMissionChain
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     ContractChainFirstRowHandle    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_MissionChain_Entry_C::SetupMissionChain(const struct FDataTableRowHandle& ContractChainFirstRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupMissionChain"));

	struct
	{
		struct FDataTableRowHandle     ContractChainFirstRowHandle;
	} params = {};

	params.ContractChainFirstRowHandle = ContractChainFirstRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupBaseWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::SetupBaseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupBaseWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupRewards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::SetupRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupRewards"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::SetupDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.SetupDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.ExecuteUbergraph_WBP_MissionChain_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MissionChain_Entry_C::ExecuteUbergraph_WBP_MissionChain_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.ExecuteUbergraph_WBP_MissionChain_Entry"));

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


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.OnBackendResponseReceived__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::OnBackendResponseReceived__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.OnBackendResponseReceived__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PressedClaimButton__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MissionChain_Entry_C::PressedClaimButton__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_MissionChain_Entry.WBP_MissionChain_Entry_C.PressedClaimButton__DelegateSignature"));

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
