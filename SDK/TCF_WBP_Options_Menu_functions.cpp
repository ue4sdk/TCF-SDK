// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Options_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Options_Menu.WBP_Options_Menu_C.UpdateRegisteredWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Options_Menu_C::UpdateRegisteredWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.UpdateRegisteredWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.RegisterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Options_Menu_C::RegisterWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.RegisterWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Options_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::BndEvt__WBP_Common_Btn_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Options_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.OnWidgetsRegistered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Options_Menu_C::OnWidgetsRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.OnWidgetsRegistered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.OnButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::OnButtonClicked(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.OnButtonClicked");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_ReportBug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::BndEvt__WBP_Common_Btn_ReportBug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_ReportBug_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_LinkAccounts_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::BndEvt__WBP_Common_Btn_LinkAccounts_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Common_Btn_LinkAccounts_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Options_Menu_C::BP_OnWidgetStartShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BP_OnWidgetStartShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Options_Menu_WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::BndEvt__WBP_Options_Menu_WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.BndEvt__WBP_Options_Menu_WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Options_Menu.WBP_Options_Menu_C.ExecuteUbergraph_WBP_Options_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Options_Menu_C::ExecuteUbergraph_WBP_Options_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Options_Menu.WBP_Options_Menu_C.ExecuteUbergraph_WBP_Options_Menu");

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
