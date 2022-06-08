// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Cost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Cost.WBP_Cost_C.SequenceEvent__ENTRYPOINTWBP_Cost_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::SequenceEvent__ENTRYPOINTWBP_Cost_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SequenceEvent__ENTRYPOINTWBP_Cost_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetShowBookmarkBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetShowBookmarkBtn(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetShowBookmarkBtn"));

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


// Function WBP_Cost.WBP_Cost_C.SetBookmarkBtnState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetBookmarkBtnState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetBookmarkBtnState"));

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


// Function WBP_Cost.WBP_Cost_C.SetBookmarkBtnTooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Cost_C::SetBookmarkBtnTooltip(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetBookmarkBtnTooltip"));

	struct
	{
		bool                           Condition;
		class UWidget*                 ReturnValue;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Cost.WBP_Cost_C.SetDiscountedCost
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasDiscount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          OriginalPrice                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DiscountedPrice                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   DiscountedPriceText            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::SetDiscountedCost(bool HasDiscount, float OriginalPrice, float DiscountedPrice, const struct FText& DiscountedPriceText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetDiscountedCost"));

	struct
	{
		bool                           HasDiscount;
		float                          OriginalPrice;
		float                          DiscountedPrice;
		struct FText                   DiscountedPriceText;
	} params = {};

	params.HasDiscount = HasDiscount;
	params.OriginalPrice = OriginalPrice;
	params.DiscountedPrice = DiscountedPrice;
	params.DiscountedPriceText = DiscountedPriceText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetShowDiscountTag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetShowDiscountTag(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetShowDiscountTag"));

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


// Function WBP_Cost.WBP_Cost_C.GetCostEntryFromPFStoreItemEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry PlayfabStoreItemEntry          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FYCostEntryRow          CurrentCostEntry               (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// struct FYCostEntryRow          OriginalCostEntry              (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// bool                           HasDiscount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::GetCostEntryFromPFStoreItemEntry(const struct FYPlayfabStoreItemEntry& PlayfabStoreItemEntry, struct FYCostEntryRow* CurrentCostEntry, struct FYCostEntryRow* OriginalCostEntry, bool* HasDiscount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.GetCostEntryFromPFStoreItemEntry"));

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


// Function WBP_Cost.WBP_Cost_C.SetPlayfabItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYPlayfabStoreItemEntry storeItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::SetPlayfabItem(const struct FYPlayfabStoreItemEntry& storeItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetPlayfabItem"));

	struct
	{
		struct FYPlayfabStoreItemEntry storeItem;
	} params = {};

	params.storeItem = storeItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Show Tooltip For Upgrade Node In Progress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowTooltip                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::Show_Tooltip_For_Upgrade_Node_In_Progress(bool ShowTooltip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Show Tooltip For Upgrade Node In Progress"));

	struct
	{
		bool                           ShowTooltip;
	} params = {};

	params.ShowTooltip = ShowTooltip;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.GetToolTipWidget_Crafting
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_Cost_C::GetToolTipWidget_Crafting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.GetToolTipWidget_Crafting"));

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


// Function WBP_Cost.WBP_Cost_C.Get Amount Value
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Amount                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::Get_Amount_Value(int* Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Get Amount Value"));

	struct
	{
		int                            Amount;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WBP_Cost.WBP_Cost_C.TryToHighlightPurchaseButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::TryToHighlightPurchaseButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.TryToHighlightPurchaseButton"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetAdditionalRequirementsFulfilled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           canPurchase                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetAdditionalRequirementsFulfilled(bool canPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetAdditionalRequirementsFulfilled"));

	struct
	{
		bool                           canPurchase;
	} params = {};

	params.canPurchase = canPurchase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.UpdateWidgetLabelVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::UpdateWidgetLabelVisibility(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.UpdateWidgetLabelVisibility"));

	struct
	{
		bool                           IsVisible;
	} params = {};

	params.IsVisible = IsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.UpdateWidgetLabel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   newText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::UpdateWidgetLabel(const struct FText& newText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.UpdateWidgetLabel"));

	struct
	{
		struct FText                   newText;
	} params = {};

	params.newText = newText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.UpdateWidgetToDataMapping
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         CostEntries                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FYCostEntryRow>  CostData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Cost_C::UpdateWidgetToDataMapping(TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap, TArray<class UWidget*>* CostEntries, TArray<struct FYCostEntryRow>* CostData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.UpdateWidgetToDataMapping"));

	struct
	{
		TArray<class UWidget*>         CostEntries;
		TArray<struct FYCostEntryRow>  CostData;
		TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap;
	} params = {};

	params.TargetMap = TargetMap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CostEntries != nullptr)
		*CostEntries = params.CostEntries;
	if (CostData != nullptr)
		*CostData = params.CostData;
}


// Function WBP_Cost.WBP_Cost_C.Update Cost Entry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Cost_Entry_C*       LocalCostEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYCostEntryRow          YCostEntryRow                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// bool                           NotEnoughRequirements          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::Update_Cost_Entry(class UWBP_Cost_Entry_C* LocalCostEntry, const struct FYCostEntryRow& YCostEntryRow, bool* NotEnoughRequirements)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Update Cost Entry"));

	struct
	{
		class UWBP_Cost_Entry_C*       LocalCostEntry;
		struct FYCostEntryRow          YCostEntryRow;
		bool                           NotEnoughRequirements;
	} params = {};

	params.LocalCostEntry = LocalCostEntry;
	params.YCostEntryRow = YCostEntryRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (NotEnoughRequirements != nullptr)
		*NotEnoughRequirements = params.NotEnoughRequirements;
}


// Function WBP_Cost.WBP_Cost_C.ShowCraftingProgressHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::ShowCraftingProgressHighlight(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.ShowCraftingProgressHighlight"));

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


// Function WBP_Cost.WBP_Cost_C.SetInProgressState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetInProgressState(bool InProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetInProgressState"));

	struct
	{
		bool                           InProgress;
	} params = {};

	params.InProgress = InProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.UpdateCostEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::UpdateCostEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.UpdateCostEntries"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.CreateCostEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYCostEntryRow          ingredient                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UHorizontalBox*          Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UWBP_Cost_Entry_C*       CreatedWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::CreateCostEntry(const struct FYCostEntryRow& ingredient, class UHorizontalBox* Target, TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap, class UWBP_Cost_Entry_C** CreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.CreateCostEntry"));

	struct
	{
		struct FYCostEntryRow          ingredient;
		class UHorizontalBox*          Target;
		TMap<class UWBP_Cost_Entry_C*, struct FYCostEntryRow> TargetMap;
		class UWBP_Cost_Entry_C*       CreatedWidget;
	} params = {};

	params.ingredient = ingredient;
	params.Target = Target;
	params.TargetMap = TargetMap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;
}


// Function WBP_Cost.WBP_Cost_C.Update Ingredients
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCostEntryRow>  Ingredients                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FYCostEntryRow>  OptionalIngredients            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Cost_C::Update_Ingredients(TArray<struct FYCostEntryRow>* Ingredients, TArray<struct FYCostEntryRow>* OptionalIngredients)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Update Ingredients"));

	struct
	{
		TArray<struct FYCostEntryRow>  Ingredients;
		TArray<struct FYCostEntryRow>  OptionalIngredients;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Ingredients != nullptr)
		*Ingredients = params.Ingredients;
	if (OptionalIngredients != nullptr)
		*OptionalIngredients = params.OptionalIngredients;
}


// Function WBP_Cost.WBP_Cost_C.SetCosts
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYCostEntryRow>  Ingredients                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FYCostEntryRow>  OptionalCosts                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsRealMoneyCost                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   RealMoneyPrice                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::SetCosts(bool IsRealMoneyCost, const struct FText& RealMoneyPrice, TArray<struct FYCostEntryRow>* Ingredients, TArray<struct FYCostEntryRow>* OptionalCosts)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetCosts"));

	struct
	{
		TArray<struct FYCostEntryRow>  Ingredients;
		TArray<struct FYCostEntryRow>  OptionalCosts;
		bool                           IsRealMoneyCost;
		struct FText                   RealMoneyPrice;
	} params = {};

	params.IsRealMoneyCost = IsRealMoneyCost;
	params.RealMoneyPrice = RealMoneyPrice;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Ingredients != nullptr)
		*Ingredients = params.Ingredients;
	if (OptionalCosts != nullptr)
		*OptionalCosts = params.OptionalCosts;
}


// Function WBP_Cost.WBP_Cost_C.Show Tooltip For Crafting In Progress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowTooltip                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::Show_Tooltip_For_Crafting_In_Progress(bool ShowTooltip)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Show Tooltip For Crafting In Progress"));

	struct
	{
		bool                           ShowTooltip;
	} params = {};

	params.ShowTooltip = ShowTooltip;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Get Contract Data for Tooltip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsValidData                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYContractUiData        YContractUiData                (CPF_Parm, CPF_OutParm)

void UWBP_Cost_C::Get_Contract_Data_for_Tooltip(bool* IsValidData, struct FYContractUiData* YContractUiData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Get Contract Data for Tooltip"));

	struct
	{
		bool                           IsValidData;
		struct FYContractUiData        YContractUiData;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsValidData != nullptr)
		*IsValidData = params.IsValidData;
	if (YContractUiData != nullptr)
		*YContractUiData = params.YContractUiData;
}


// Function WBP_Cost.WBP_Cost_C.ShowUnavailableReason
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::ShowUnavailableReason(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.ShowUnavailableReason"));

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


// Function WBP_Cost.WBP_Cost_C.SetUnavailableReason
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   txt                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::SetUnavailableReason(const struct FText& txt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetUnavailableReason"));

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


// Function WBP_Cost.WBP_Cost_C.Set Cost Button Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::Set_Cost_Button_Text(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Set Cost Button Text"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.UpdateTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Cost_C::UpdateTimer(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.UpdateTimer"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetTimerVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseTimer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetTimerVisibility(bool UseTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetTimerVisibility"));

	struct
	{
		bool                           UseTimer;
	} params = {};

	params.UseTimer = UseTimer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetCancelButtonVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           useCancelButton                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::SetCancelButtonVisibility(bool useCancelButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetCancelButtonVisibility"));

	struct
	{
		bool                           useCancelButton;
	} params = {};

	params.useCancelButton = useCancelButton;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Set Purchase Button Clickability
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           canPurchase                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::Set_Purchase_Button_Clickability(bool canPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Set Purchase Button Clickability"));

	struct
	{
		bool                           canPurchase;
	} params = {};

	params.canPurchase = canPurchase;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Set Crafting Cost
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CraftingCost                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::Set_Crafting_Cost(int CraftingCost)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Set Crafting Cost"));

	struct
	{
		int                            CraftingCost;
	} params = {};

	params.CraftingCost = CraftingCost;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Handle Currency Updated
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::Handle_Currency_Updated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Handle Currency Updated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Handle Selector Value Changed
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Structure_SelectorData         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::Handle_Selector_Value_Changed(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Structure_SelectorData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Handle Selector Value Changed"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Structure_SelectorData;
	} params = {};

	params.selector = selector;
	params.Structure_SelectorData = Structure_SelectorData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Change Button State Based on Craftability
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            repeatTimes                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYShopItem              Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 caller_function                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::Change_Button_State_Based_on_Craftability(int repeatTimes, const struct FYShopItem& Item, const struct FString& caller_function)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Change Button State Based on Craftability"));

	struct
	{
		int                            repeatTimes;
		struct FYShopItem              Item;
		struct FString                 caller_function;
	} params = {};

	params.repeatTimes = repeatTimes;
	params.Item = Item;
	params.caller_function = caller_function;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.Set Crafting Cost Text
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::Set_Crafting_Cost_Text(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Set Crafting Cost Text"));

	struct
	{
		int                            Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Cost_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.PreConstruct"));

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


// Function WBP_Cost.WBP_Cost_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Cost_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.OnSelectorValueChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::OnSelectorValueChanged(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.OnSelectorValueChanged"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SetAmount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::SetAmount(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SetAmount"));

	struct
	{
		int                            Amount;
	} params = {};

	params.Amount = Amount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.BndEvt__WBP_Cost_WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::BndEvt__WBP_Cost_WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.BndEvt__WBP_Cost_WBP_Common_Empty_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params = {};

	params.Button = Button;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.BndEvt__WBP_Cost_WBP_Common_Small_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Cost_C::BndEvt__WBP_Cost_WBP_Common_Small_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.BndEvt__WBP_Cost_WBP_Common_Small_Btn_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Cost.WBP_Cost_C.ExecuteUbergraph_WBP_Cost
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Cost_C::ExecuteUbergraph_WBP_Cost(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.ExecuteUbergraph_WBP_Cost"));

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


// Function WBP_Cost.WBP_Cost_C.OnPurchase__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Cost_C::OnPurchase__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Cost.WBP_Cost_C.OnPurchase__DelegateSignature"));

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
