// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_AccountLinking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AccountLinking.WBP_AccountLinking_C.SetTimoutThresholdText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::SetTimoutThresholdText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.SetTimoutThresholdText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BindDelegates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BindDelegates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.PlatformSetup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::PlatformSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.PlatformSetup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingProcessUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isInProcess                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AccountLinking_C::OnAccountLinkingProcessUpdate(bool isInProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingProcessUpdate");

	struct
	{
		bool                           isInProcess;
	} params;

	params.isInProcess = isInProcess;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingResult
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYAccountLinkingResultCode     resultCode                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AccountLinking_C::OnAccountLinkingResult(EYAccountLinkingResultCode resultCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.OnAccountLinkingResult");

	struct
	{
		EYAccountLinkingResultCode     resultCode;
	} params;

	params.resultCode = resultCode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AccountLinking_C::BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AccountLinking_C::BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_AccountLinking_C::BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AccountLinking.WBP_AccountLinking_C.ExecuteUbergraph_WBP_AccountLinking
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AccountLinking_C::ExecuteUbergraph_WBP_AccountLinking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AccountLinking.WBP_AccountLinking_C.ExecuteUbergraph_WBP_AccountLinking");

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
