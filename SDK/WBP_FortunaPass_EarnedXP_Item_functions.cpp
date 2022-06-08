// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FortunaPass_EarnedXP_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.InitData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InputLabel                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            InputAmount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InputHasNoBonus                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_EarnedXP_Item_C::InitData(const struct FText& InputLabel, int InputAmount, bool InputHasNoBonus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.InitData"));

	struct
	{
		struct FText                   InputLabel;
		int                            InputAmount;
		bool                           InputHasNoBonus;
	} params = {};

	params.InputLabel = InputLabel;
	params.InputAmount = InputAmount;
	params.InputHasNoBonus = InputHasNoBonus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_EarnedXP_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.PreConstruct"));

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


// Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.ExecuteUbergraph_WBP_FortunaPass_EarnedXP_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FortunaPass_EarnedXP_Item_C::ExecuteUbergraph_WBP_FortunaPass_EarnedXP_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_EarnedXP_Item.WBP_FortunaPass_EarnedXP_Item_C.ExecuteUbergraph_WBP_FortunaPass_EarnedXP_Item"));

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
