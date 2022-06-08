// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FortunaPass_Reward_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.Set Reward Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_FortunaPass_Reward_Item_C::Set_Reward_Icon(bool isItem, const struct FDataTableRowHandle& rowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.Set Reward Icon"));

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


// Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FortunaPass_Reward_Item_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.PreConstruct"));

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


// Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.ExecuteUbergraph_WBP_FortunaPass_Reward_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FortunaPass_Reward_Item_C::ExecuteUbergraph_WBP_FortunaPass_Reward_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FortunaPass_Reward_Item.WBP_FortunaPass_Reward_Item_C.ExecuteUbergraph_WBP_FortunaPass_Reward_Item"));

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
