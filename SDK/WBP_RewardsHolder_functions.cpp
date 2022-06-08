// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_RewardsHolder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetShopItemsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractUnlockReward> Items                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RewardsHolder_C::SetShopItemsUnlocked(TArray<struct FYContractUnlockReward> Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetShopItemsUnlocked"));

	struct
	{
		TArray<struct FYContractUnlockReward> Items;
	} params = {};

	params.Items = Items;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetContractsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> unlockedContracts              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RewardsHolder_C::SetContractsUnlocked(TArray<struct FDataTableRowHandle>* unlockedContracts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetContractsUnlocked"));

	struct
	{
		TArray<struct FDataTableRowHandle> unlockedContracts;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (unlockedContracts != nullptr)
		*unlockedContracts = params.unlockedContracts;
}


// Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetContractRewards
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYContractReward> YContractReward                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsHolder_C::SetContractRewards(TArray<struct FYContractReward> YContractReward, const struct FString& contractId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetContractRewards"));

	struct
	{
		TArray<struct FYContractReward> YContractReward;
		struct FString                 contractId;
	} params = {};

	params.YContractReward = YContractReward;
	params.contractId = contractId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetLabelText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   txt                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_RewardsHolder_C::SetLabelText(const struct FText& txt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.SetLabelText"));

	struct
	{
		struct FText                   txt;
	} params = {};

	params.txt = txt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_RewardsHolder.WBP_RewardsHolder_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RewardsHolder_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.PreConstruct"));

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


// Function WBP_RewardsHolder.WBP_RewardsHolder_C.ExecuteUbergraph_WBP_RewardsHolder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsHolder_C::ExecuteUbergraph_WBP_RewardsHolder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RewardsHolder.WBP_RewardsHolder_C.ExecuteUbergraph_WBP_RewardsHolder"));

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
