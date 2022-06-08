// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Form_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Form_Menu.WBP_Form_Menu_C.ResetTexts
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::ResetTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.ResetTexts"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.OnSupportOptionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCustomerServiceRequestType   Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::OnSupportOptionChanged(EYCustomerServiceRequestType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.OnSupportOptionChanged"));

	struct
	{
		EYCustomerServiceRequestType   Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.SetPlayerData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerSupportReportRequestData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Form_Menu_C::SetPlayerData(struct FYPlayerSupportReportRequestData* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.SetPlayerData"));

	struct
	{
		struct FYPlayerSupportReportRequestData Data;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Data != nullptr)
		*Data = params.Data;
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.UpdateSupportOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::UpdateSupportOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.UpdateSupportOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.UpdateReportReasonOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::UpdateReportReasonOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.UpdateReportReasonOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Form_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

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


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::BP_OnWidgetHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetHidden"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

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


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::BP_OnWidgetShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetShown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnReportData
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   primary                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   secondary                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Form_Menu_C::BP_OnReportData(const struct FText& primary, const struct FText& secondary, bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnReportData"));

	struct
	{
		struct FText                   primary;
		struct FText                   secondary;
		bool                           success;
	} params = {};

	params.primary = primary;
	params.secondary = secondary;
	params.success = success;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Form_Menu_WBP_Dropdown_Btn_ReportReason_K2Node_ComponentBoundEvent_2_OnSelectedOptionDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::BndEvt__WBP_Form_Menu_WBP_Dropdown_Btn_ReportReason_K2Node_ComponentBoundEvent_2_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Form_Menu_WBP_Dropdown_Btn_ReportReason_K2Node_ComponentBoundEvent_2_OnSelectedOptionDelegate__DelegateSignature"));

	struct
	{
		class UWBP_DropdownBase_Btn_C* Dropdown;
		struct FString                 Option;
		int                            Index;
	} params = {};

	params.Dropdown = Dropdown;
	params.Option = Option;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.ExecuteUbergraph_WBP_Form_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::ExecuteUbergraph_WBP_Form_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Form_Menu.WBP_Form_Menu_C.ExecuteUbergraph_WBP_Form_Menu"));

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
