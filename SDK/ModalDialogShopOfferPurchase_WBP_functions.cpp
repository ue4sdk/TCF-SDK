// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ModalDialogShopOfferPurchase_WBP_classes.hpp"

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
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_AnimateVisibility"));

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


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlaySuccessfulAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::PlaySuccessfulAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlaySuccessfulAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlayLoopingPendingAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::PlayLoopingPendingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PlayLoopingPendingAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrentOfferPurchaseDialogState
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UModalDialogShopOfferPurchase_WBP_C::BP_SetCurrentOfferPurchaseDialogState(EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrentOfferPurchaseDialogState"));

	struct
	{
		EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.shopOfferPurchaseDialogState = shopOfferPurchaseDialogState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForSinglePurchase
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetForSinglePurchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForSinglePurchase"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForMultiPurchase
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetForMultiPurchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetForMultiPurchase"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_PurchaseUnavailableUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYOfferUnavailableReason       unavailableReason              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::BP_PurchaseUnavailableUpdated(EYOfferUnavailableReason unavailableReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_PurchaseUnavailableUpdated"));

	struct
	{
		EYOfferUnavailableReason       unavailableReason;
	} params = {};

	params.unavailableReason = unavailableReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UModalDialogShopOfferPurchase_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrencyType
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            buttonCurrencyType             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::BP_SetCurrencyType(int buttonCurrencyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.BP_SetCurrencyType"));

	struct
	{
		int                            buttonCurrencyType;
	} params = {};

	params.buttonCurrencyType = buttonCurrencyType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UModalDialogShopOfferPurchase_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.PreConstruct"));

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


// Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UModalDialogShopOfferPurchase_WBP_C::ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ModalDialogShopOfferPurchase_WBP.ModalDialogShopOfferPurchase_WBP_C.ExecuteUbergraph_ModalDialogShopOfferPurchase_WBP"));

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
