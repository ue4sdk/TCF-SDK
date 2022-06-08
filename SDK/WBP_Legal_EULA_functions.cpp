// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Legal_EULA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Legal_EULA.WBP_Legal_EULA_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Legal_EULA_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Legal_EULA.WBP_Legal_EULA_C.BP_AnimateVisibility"));

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


// Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_WBP_Generic_Modal_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Legal_EULA_C::BndEvt__WBP_Legal_EULA_WBP_Generic_Modal_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_WBP_Generic_Modal_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_WBP_Common_Btn_174_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Legal_EULA_C::BndEvt__WBP_Legal_EULA_WBP_Common_Btn_174_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_WBP_Common_Btn_174_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature"));

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


// Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_BtnPrivacyPolicy_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Legal_EULA_C::BndEvt__WBP_Legal_EULA_BtnPrivacyPolicy_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Legal_EULA.WBP_Legal_EULA_C.BndEvt__WBP_Legal_EULA_BtnPrivacyPolicy_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

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


// Function WBP_Legal_EULA.WBP_Legal_EULA_C.ExecuteUbergraph_WBP_Legal_EULA
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Legal_EULA_C::ExecuteUbergraph_WBP_Legal_EULA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Legal_EULA.WBP_Legal_EULA_C.ExecuteUbergraph_WBP_Legal_EULA"));

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
