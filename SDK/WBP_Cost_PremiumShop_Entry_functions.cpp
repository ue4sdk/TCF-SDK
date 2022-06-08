// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Cost_PremiumShop_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.GetCostEntryFromPFStoreItemEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry PlayfabStoreItemEntry          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FYCostEntryRow          CurrentCostEntry               (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// struct FYCostEntryRow          OriginalCostEntry              (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// bool                           HasDiscount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::GetCostEntryFromPFStoreItemEntry(const struct FYPlayfabStoreItemEntry& PlayfabStoreItemEntry, struct FYCostEntryRow* CurrentCostEntry, struct FYCostEntryRow* OriginalCostEntry, bool* HasDiscount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.GetCostEntryFromPFStoreItemEntry"));

	struct
	{
		struct FYPlayfabStoreItemEntry PlayfabStoreItemEntry;
		struct FYCostEntryRow          CurrentCostEntry;
		struct FYCostEntryRow          OriginalCostEntry;
		bool                           HasDiscount;
	} params = {};

	params.PlayfabStoreItemEntry = PlayfabStoreItemEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentCostEntry != nullptr)
		*CurrentCostEntry = params.CurrentCostEntry;
	if (OriginalCostEntry != nullptr)
		*OriginalCostEntry = params.OriginalCostEntry;
	if (HasDiscount != nullptr)
		*HasDiscount = params.HasDiscount;
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowDiscountAmount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   DiscountPrice                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_PremiumShop_Entry_C::SetShowDiscountAmount(bool Condition, const struct FText& DiscountPrice)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowDiscountAmount"));

	struct
	{
		bool                           Condition;
		struct FText                   DiscountPrice;
	} params = {};

	params.Condition = Condition;
	params.DiscountPrice = DiscountPrice;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowStrikethrough
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::SetShowStrikethrough(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowStrikethrough"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::SetShowIcon(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowIcon"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ShouldUseAlternateVersion
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::ShouldUseAlternateVersion(const struct FDataTableRowHandle& DataTableRowHandle, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ShouldUseAlternateVersion"));

	struct
	{
		struct FDataTableRowHandle     DataTableRowHandle;
		bool                           Result;
	} params = {};

	params.DataTableRowHandle = DataTableRowHandle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetTooltipAdditionalText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_PremiumShop_Entry_C::SetTooltipAdditionalText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetTooltipAdditionalText"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowDisabled
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::SetShowDisabled(bool Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetShowDisabled"));

	struct
	{
		bool                           Disabled;
	} params = {};

	params.Disabled = Disabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetupTooltipData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   AdditionalHeaderText           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_PremiumShop_Entry_C::SetupTooltipData(const struct FText& Header, const struct FText& Description, const struct FText& AdditionalHeaderText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetupTooltipData"));

	struct
	{
		struct FText                   Header;
		struct FText                   Description;
		struct FText                   AdditionalHeaderText;
	} params = {};

	params.Header = Header;
	params.Description = Description;
	params.AdditionalHeaderText = AdditionalHeaderText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Get_CostItem_ToolTipWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Cost_PremiumShop_Entry_C::Get_CostItem_ToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Get_CostItem_ToolTipWidget_1"));

	struct
	{
		class UWidget*                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ShouldShowDivider
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldShowDivide               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::ShouldShowDivider(bool shouldShowDivide)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ShouldShowDivider"));

	struct
	{
		bool                           shouldShowDivide;
	} params = {};

	params.shouldShowDivide = shouldShowDivide;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Setup Contract Reward Faction Progression
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYFaction                      Faction                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RewardAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_PremiumShop_Entry_C::Setup_Contract_Reward_Faction_Progression(EYFaction Faction, int RewardAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Setup Contract Reward Faction Progression"));

	struct
	{
		EYFaction                      Faction;
		int                            RewardAmount;
	} params = {};

	params.Faction = Faction;
	params.RewardAmount = RewardAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Setup Contract Reward
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 contractId                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FYContractReward        contractReward                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           showDivider                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::Setup_Contract_Reward(const struct FString& contractId, const struct FYContractReward& contractReward, bool showDivider)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.Setup Contract Reward"));

	struct
	{
		struct FString                 contractId;
		struct FYContractReward        contractReward;
		bool                           showDivider;
	} params = {};

	params.contractId = contractId;
	params.contractReward = contractReward;
	params.showDivider = showDivider;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.OnLoaded_DD9C4D944361DCC0C1D28BB881310E5E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_PremiumShop_Entry_C::OnLoaded_DD9C4D944361DCC0C1D28BB881310E5E(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.OnLoaded_DD9C4D944361DCC0C1D28BB881310E5E"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_PremiumShop_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.PreConstruct"));

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


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_PremiumShop_Entry_C::SetValue(const struct FText& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetValue"));

	struct
	{
		struct FText                   Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> SoftTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_Cost_PremiumShop_Entry_C::SetImage(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.SetImage"));

	struct
	{
		TSoftObjectPtr<class UTexture2D> SoftTexture;
	} params = {};

	params.SoftTexture = SoftTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ExecuteUbergraph_WBP_Cost_PremiumShop_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_PremiumShop_Entry_C::ExecuteUbergraph_WBP_Cost_PremiumShop_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost_PremiumShop_Entry.WBP_Cost_PremiumShop_Entry_C.ExecuteUbergraph_WBP_Cost_PremiumShop_Entry"));

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
