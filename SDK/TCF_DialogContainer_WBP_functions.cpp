// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DialogContainer_WBP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_GetDialogOKAndCancelModal");

	struct
	{
		class UYWidget_ConfirmationModal* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogOKAndCancel");

	struct
	{
		struct FText                   headline;
		struct FText                   Message;
		struct FText                   okButtonText;
		struct FText                   cancelButtonText;
		class UYWidget_ConfirmationModal* ReturnValue;
	} params;

	params.headline = headline;
	params.Message = Message;
	params.okButtonText = okButtonText;
	params.cancelButtonText = cancelButtonText;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.OnOkCancelModalIntermittentCollapseFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::OnOkCancelModalIntermittentCollapseFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.OnOkCancelModalIntermittentCollapseFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_CloseDialogContainers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDialogContainer_WBP_C::BP_CloseDialogContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_CloseDialogContainers");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogExitGameAlternative
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ConfirmationModal* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ConfirmationModal* UDialogContainer_WBP_C::BP_RequestDialogExitGameAlternative()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_RequestDialogExitGameAlternative");

	struct
	{
		class UYWidget_ConfirmationModal* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowCustomerSupportWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayerSupportReportRequestData Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDialogContainer_WBP_C::BP_ShowCustomerSupportWidget(const struct FYPlayerSupportReportRequestData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowCustomerSupportWidget");

	struct
	{
		struct FYPlayerSupportReportRequestData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowWelcomeModal
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::BP_ShowWelcomeModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowWelcomeModal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowLoadingOverlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDialogContainer_WBP_C::BP_ShowLoadingOverlay(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_ShowLoadingOverlay");

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.BP_HideLoadingOverlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDialogContainer_WBP_C::BP_HideLoadingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.BP_HideLoadingOverlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DialogContainer_WBP.DialogContainer_WBP_C.ExecuteUbergraph_DialogContainer_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDialogContainer_WBP_C::ExecuteUbergraph_DialogContainer_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialogContainer_WBP.DialogContainer_WBP_C.ExecuteUbergraph_DialogContainer_WBP");

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
