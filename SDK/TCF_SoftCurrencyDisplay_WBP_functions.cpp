// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SoftCurrencyDisplay_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.Get_YButton_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* USoftCurrencyDisplay_WBP_C::Get_YButton_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.Get_YButton_ToolTipWidget");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USoftCurrencyDisplay_WBP_C::BndEvt__YButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USoftCurrencyDisplay_WBP_C::BndEvt__YButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BndEvt__YButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BP_OnSetUpperCap
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USoftCurrencyDisplay_WBP_C::BP_OnSetUpperCap(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.BP_OnSetUpperCap");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.ExecuteUbergraph_SoftCurrencyDisplay_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USoftCurrencyDisplay_WBP_C::ExecuteUbergraph_SoftCurrencyDisplay_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SoftCurrencyDisplay_WBP.SoftCurrencyDisplay_WBP_C.ExecuteUbergraph_SoftCurrencyDisplay_WBP");

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
