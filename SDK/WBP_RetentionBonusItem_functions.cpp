// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_RetentionBonusItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.SetRewardDay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Day                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           claimed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RetentionBonusItem_C::SetRewardDay(int Day, bool claimed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.SetRewardDay"));

	struct
	{
		int                            Day;
		bool                           claimed;
	} params = {};

	params.Day = Day;
	params.claimed = claimed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.Set Reward Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_RetentionBonusItem_C::Set_Reward_Icon(bool isItem, const struct FDataTableRowHandle& rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.Set Reward Icon"));

	struct
	{
		bool                           isItem;
		struct FDataTableRowHandle     rowHandle;
	} params = {};

	params.isItem = isItem;
	params.rowHandle = rowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RetentionBonusItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.PreConstruct"));

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


// Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.ExecuteUbergraph_WBP_RetentionBonusItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RetentionBonusItem_C::ExecuteUbergraph_WBP_RetentionBonusItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RetentionBonusItem.WBP_RetentionBonusItem_C.ExecuteUbergraph_WBP_RetentionBonusItem"));

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
