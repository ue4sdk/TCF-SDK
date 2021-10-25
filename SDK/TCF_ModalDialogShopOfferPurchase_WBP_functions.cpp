// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ModalDialogShopOfferPurchase_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UModalDialogShopOfferPurchase_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlaySuccessfulAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::PlaySuccessfulAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlaySuccessfulAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlayLoopingPendingAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::PlayLoopingPendingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlayLoopingPendingAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrentOfferPurchaseDialogState
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UModalDialogShopOfferPurchase_WBP_C::BP_SetCurrentOfferPurchaseDialogState(EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrentOfferPurchaseDialogState");

	struct
	{
		EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.shopOfferPurchaseDialogState = shopOfferPurchaseDialogState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForSinglePurchase
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetForSinglePurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForSinglePurchase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForMultiPurchase
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetForMultiPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForMultiPurchase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_PurchaseUnavailableUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYOfferUnavailableReason       unavailableReason              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::BP_PurchaseUnavailableUpdated(EYOfferUnavailableReason unavailableReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_PurchaseUnavailableUpdated");

	struct
	{
		EYOfferUnavailableReason       unavailableReason;
	} params;

	params.unavailableReason = unavailableReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrencyType
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            buttonCurrencyType             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetCurrencyType(int buttonCurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrencyType");

	struct
	{
		int                            buttonCurrencyType;
	} params;

	params.buttonCurrencyType = buttonCurrencyType;

	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UModalDialogShopOfferPurchase_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP");

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
