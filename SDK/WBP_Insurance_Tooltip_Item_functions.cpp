// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Insurance_Tooltip_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.SetInsuranceNotPurchasable
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Insurance_Tooltip_Item_C::SetInsuranceNotPurchasable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.SetInsuranceNotPurchasable"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateVisibility
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInsuranceStatus              InsuranceStatus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Insurance_Tooltip_Item_C::UpdateVisibility(EYInsuranceStatus InsuranceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateVisibility"));

	struct
	{
		EYInsuranceStatus              InsuranceStatus;
	} params = {};

	params.InsuranceStatus = InsuranceStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateDescription
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInsuranceStatus              InsuranceStatus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Insurance_Tooltip_Item_C::UpdateDescription(EYInsuranceStatus InsuranceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateDescription"));

	struct
	{
		EYInsuranceStatus              InsuranceStatus;
	} params = {};

	params.InsuranceStatus = InsuranceStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateIcon
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInsuranceType                insurance                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYInsuranceStatus              Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Insurance_Tooltip_Item_C::UpdateIcon(EYInsuranceType insurance, EYInsuranceStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.UpdateIcon"));

	struct
	{
		EYInsuranceType                insurance;
		EYInsuranceStatus              Status;
	} params = {};

	params.insurance = insurance;
	params.Status = Status;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.SetInsurance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInsuranceType                insurance                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYInsuranceStatus              Status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Insurance_Tooltip_Item_C::SetInsurance(EYInsuranceType insurance, EYInsuranceStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.SetInsurance"));

	struct
	{
		EYInsuranceType                insurance;
		EYInsuranceStatus              Status;
	} params = {};

	params.insurance = insurance;
	params.Status = Status;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Insurance_Tooltip_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Insurance_Tooltip_Item.WBP_Insurance_Tooltip_Item_C.BP_AnimateVisibility"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
