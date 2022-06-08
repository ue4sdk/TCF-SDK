// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PriceGeneric_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetCurrencyType
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCurrencyType                 currencyType                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPriceGeneric_WBP_C::BP_SetCurrencyType(EYCurrencyType currencyType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetCurrencyType"));

	struct
	{
		EYCurrencyType                 currencyType;
	} params = {};

	params.currencyType = currencyType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetPriceText
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PriceText                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPriceGeneric_WBP_C::BP_SetPriceText(const struct FText& PriceText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PriceGeneric_WBP.PriceGeneric_WBP_C.BP_SetPriceText"));

	struct
	{
		struct FText                   PriceText;
	} params = {};

	params.PriceText = PriceText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PriceGeneric_WBP.PriceGeneric_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPriceGeneric_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PriceGeneric_WBP.PriceGeneric_WBP_C.PreConstruct"));

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


// Function PriceGeneric_WBP.PriceGeneric_WBP_C.ExecuteUbergraph_PriceGeneric_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPriceGeneric_WBP_C::ExecuteUbergraph_PriceGeneric_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PriceGeneric_WBP.PriceGeneric_WBP_C.ExecuteUbergraph_PriceGeneric_WBP"));

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
