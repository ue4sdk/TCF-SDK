// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Form_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Form_Menu.WBP_Form_Menu_C.SetPlayerData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerSupportReportRequestData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Form_Menu_C::SetPlayerData(struct FYPlayerSupportReportRequestData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.SetPlayerData");

	struct
	{
		struct FYPlayerSupportReportRequestData Data;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.SetReportReasonOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::SetReportReasonOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.SetReportReasonOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Form_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BndEvt__WBP_Common_Btn_ReturnToStation_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Form_Menu_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnReportData
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   primary                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   secondary                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           SUCCESS                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Form_Menu_C::BP_OnReportData(const struct FText& primary, const struct FText& secondary, bool SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.BP_OnReportData");

	struct
	{
		struct FText                   primary;
		struct FText                   secondary;
		bool                           SUCCESS;
	} params;

	params.primary = primary;
	params.secondary = secondary;
	params.SUCCESS = SUCCESS;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Form_Menu.WBP_Form_Menu_C.ExecuteUbergraph_WBP_Form_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Form_Menu_C::ExecuteUbergraph_WBP_Form_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Form_Menu.WBP_Form_Menu_C.ExecuteUbergraph_WBP_Form_Menu");

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
