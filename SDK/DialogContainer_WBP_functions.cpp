// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DialogContainer_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_GetDialogOKAndCancelModal
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ConfirmationModal* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ConfirmationModal* UDialogContainer_WBP_C::BP_GetDialogOKAndCancelModal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_GetDialogOKAndCancelModal"));

	struct
	{
		class UYWidget_ConfirmationModal* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogOKAndCancel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   headline                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   okButtonText                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   cancelButtonText               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYWidget_ConfirmationModal* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ConfirmationModal* UDialogContainer_WBP_C::BP_RequestDialogOKAndCancel(const struct FText& headline, const struct FText& Message, const struct FText& okButtonText, const struct FText& cancelButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogOKAndCancel"));

	struct
	{
		struct FText                   headline;
		struct FText                   Message;
		struct FText                   okButtonText;
		struct FText                   cancelButtonText;
		class UYWidget_ConfirmationModal* ReturnValue;
	} params = {};

	params.headline = headline;
	params.Message = Message;
	params.okButtonText = okButtonText;
	params.cancelButtonText = cancelButtonText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.OnOkCancelModalIntermittentCollapseFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::OnOkCancelModalIntermittentCollapseFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.OnOkCancelModalIntermittentCollapseFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_CloseDialogContainers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDialogContainer_WBP_C::BP_CloseDialogContainers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_CloseDialogContainers"));

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


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogExitGameAlternative
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ConfirmationModal* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ConfirmationModal* UDialogContainer_WBP_C::BP_RequestDialogExitGameAlternative()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogExitGameAlternative"));

	struct
	{
		class UYWidget_ConfirmationModal* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowLoadingOverlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDialogContainer_WBP_C::BP_ShowLoadingOverlay(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowLoadingOverlay"));

	struct
	{
		struct FText                   Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_HideLoadingOverlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::BP_HideLoadingOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_HideLoadingOverlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowToastMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   primaryText                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   secondaryText                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           successful                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDialogContainer_WBP_C::BP_ShowToastMessage(const struct FText& primaryText, const struct FText& secondaryText, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowToastMessage"));

	struct
	{
		struct FText                   primaryText;
		struct FText                   secondaryText;
		bool                           successful;
	} params = {};

	params.primaryText = primaryText;
	params.secondaryText = secondaryText;
	params.successful = successful;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowWelcomeModal
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::BP_ShowWelcomeModal()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowWelcomeModal"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.SetPendingVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newPendingVisibility           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           atConstruct                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDialogContainer_WBP_C::SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.SetPendingVisibility"));

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


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowCustomerSupportWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerSupportReportRequestData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDialogContainer_WBP_C::BP_ShowCustomerSupportWidget(const struct FYPlayerSupportReportRequestData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowCustomerSupportWidget"));

	struct
	{
		struct FYPlayerSupportReportRequestData Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BndEvt__DialogContainer_WBP_WBP_Common_Btn_Survey_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDialogContainer_WBP_C::BndEvt__DialogContainer_WBP_WBP_Common_Btn_Survey_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.BndEvt__DialogContainer_WBP_WBP_Common_Btn_Survey_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

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


// Function DialogContainer_WBP.DialogContainer_WBP_C.ExecuteUbergraph_DialogContainer_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDialogContainer_WBP_C::ExecuteUbergraph_DialogContainer_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DialogContainer_WBP.DialogContainer_WBP_C.ExecuteUbergraph_DialogContainer_WBP"));

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
