// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Cost_Modal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Cost_Modal.WBP_Cost_Modal_C.UpdateCost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCostEntryRow>  costs                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FYCostEntryRow>  OptionalCosts                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Cost_Modal_C::UpdateCost(TArray<struct FYCostEntryRow>* costs, TArray<struct FYCostEntryRow>* OptionalCosts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.UpdateCost"));

	struct
	{
		TArray<struct FYCostEntryRow>  costs;
		TArray<struct FYCostEntryRow>  OptionalCosts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (costs != nullptr)
		*costs = params.costs;
	if (OptionalCosts != nullptr)
		*OptionalCosts = params.OptionalCosts;
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Get Context String
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 FunctionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UWBP_Cost_Modal_C::Get_Context_String(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Get Context String"));

	struct
	{
		struct FString                 FunctionName;
		struct FString                 ReturnValue;
	} params = {};

	params.FunctionName = FunctionName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Update Button Interactivity Based On Wallet
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_Modal_C::Update_Button_Interactivity_Based_On_Wallet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Update Button Interactivity Based On Wallet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Handle Toggle Changed
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::Handle_Toggle_Changed(bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Handle Toggle Changed"));

	struct
	{
		bool                           Toggled;
	} params = {};

	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Update Costs Toggle Buttons Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCostEntryRow>  OptionalCosts                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Cost_Modal_C::Update_Costs_Toggle_Buttons_Visibility(TArray<struct FYCostEntryRow>* OptionalCosts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Update Costs Toggle Buttons Visibility"));

	struct
	{
		TArray<struct FYCostEntryRow>  OptionalCosts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OptionalCosts != nullptr)
		*OptionalCosts = params.OptionalCosts;
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Setup Primary Button
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYCostEntryRow          CostEntryRow                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Cost_Modal_C::Setup_Primary_Button(const struct FYCostEntryRow& CostEntryRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Setup Primary Button"));

	struct
	{
		struct FYCostEntryRow          CostEntryRow;
	} params = {};

	params.CostEntryRow = CostEntryRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Cost_Modal_C::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.BP_HandleBackKey"));

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


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Cost_Modal_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.BP_AnimateVisibility"));

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


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Cost Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           useCost                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::Set_Cost_Visibility(bool useCost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Cost Visibility"));

	struct
	{
		bool                           useCost;
	} params = {};

	params.useCost = useCost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Cost
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCostEntryRow>  costs                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FYCostEntryRow>  OptionalCosts                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Cost_Modal_C::Set_Cost(TArray<struct FYCostEntryRow>* costs, TArray<struct FYCostEntryRow>* OptionalCosts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Cost"));

	struct
	{
		TArray<struct FYCostEntryRow>  costs;
		TArray<struct FYCostEntryRow>  OptionalCosts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (costs != nullptr)
		*costs = params.costs;
	if (OptionalCosts != nullptr)
		*OptionalCosts = params.OptionalCosts;
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Texts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   headline                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   okButtonText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   cancelButtonText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_Modal_C::Set_Texts(const struct FText& headline, const struct FText& Message, const struct FText& okButtonText, const struct FText& cancelButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Set Texts"));

	struct
	{
		struct FText                   headline;
		struct FText                   Message;
		struct FText                   okButtonText;
		struct FText                   cancelButtonText;
	} params = {};

	params.headline = headline;
	params.Message = Message;
	params.okButtonText = okButtonText;
	params.cancelButtonText = cancelButtonText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_Btn_Primary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_Modal_C::BndEvt__WBP_Cost_Modal_WBP_Btn_Primary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_Btn_Primary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

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


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_Btn_Secondary_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_Modal_C::BndEvt__WBP_Cost_Modal_WBP_Btn_Secondary_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_Btn_Secondary_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

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


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Cost_Modal_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetIsEnabledOnButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::SetIsEnabledOnButtons(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetIsEnabledOnButtons"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetPendingVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           atConstruct                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetPendingVisibility"));

	struct
	{
		ESlateVisibility               newPendingVisibility;
		bool                           atConstruct;
	} params = {};

	params.newPendingVisibility = newPendingVisibility;
	params.atConstruct = atConstruct;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.OnAnyButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_Modal_C::OnAnyButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.OnAnyButtonClicked"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::BndEvt__WBP_Cost_Modal_WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.BndEvt__WBP_Cost_Modal_WBP_ToggleText_Btn_K2Node_ComponentBoundEvent_0_OnToggleChanged__DelegateSignature"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.PreConstruct"));

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


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetPrimaryButtonEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::SetPrimaryButtonEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetPrimaryButtonEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetSecondaryButtonEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_Modal_C::SetSecondaryButtonEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.SetSecondaryButtonEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params = {};

	params.IsEnabled = IsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_Modal.WBP_Cost_Modal_C.ExecuteUbergraph_WBP_Cost_Modal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_Modal_C::ExecuteUbergraph_WBP_Cost_Modal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_Modal.WBP_Cost_Modal_C.ExecuteUbergraph_WBP_Cost_Modal"));

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
