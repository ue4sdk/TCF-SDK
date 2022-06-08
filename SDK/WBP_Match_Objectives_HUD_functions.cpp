// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Match_Objectives_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Match_Objectives_HUD_C::BP_HandleBackKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.BP_HandleBackKey"));

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


// Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Match_Objectives_HUD_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.BP_AnimateVisibility"));

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


// Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.UpdateInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           EnableInputUI                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Match_Objectives_HUD_C::UpdateInput(bool EnableInputUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.UpdateInput"));

	struct
	{
		bool                           EnableInputUI;
	} params = {};

	params.EnableInputUI = EnableInputUI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.ExecuteUbergraph_WBP_Match_Objectives_HUD
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Match_Objectives_HUD_C::ExecuteUbergraph_WBP_Match_Objectives_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.ExecuteUbergraph_WBP_Match_Objectives_HUD"));

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


// Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.OnBackInput__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Match_Objectives_HUD_C::OnBackInput__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Match_Objectives_HUD.WBP_Match_Objectives_HUD_C.OnBackInput__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
