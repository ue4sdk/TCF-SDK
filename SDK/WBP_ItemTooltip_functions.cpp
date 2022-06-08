// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ItemTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemTooltip.WBP_ItemTooltip_C.CanClearTooltipResources
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ItemTooltip_C::CanClearTooltipResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.CanClearTooltipResources"));

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


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent__ENTRYPOINTWBP_ItemTooltip_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::SequenceEvent__ENTRYPOINTWBP_ItemTooltip_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent__ENTRYPOINTWBP_ItemTooltip_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.ShowAttachmentTooltip
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// EYItemType                     ItemType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTooltip_C::ShowAttachmentTooltip(const struct FDataTableRowHandle& rowHandle, EYItemType ItemType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.ShowAttachmentTooltip"));

	struct
	{
		struct FDataTableRowHandle     rowHandle;
		EYItemType                     ItemType;
	} params = {};

	params.rowHandle = rowHandle;
	params.ItemType = ItemType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.UpdateFromItemContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::UpdateFromItemContainer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.UpdateFromItemContainer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetParentItemContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTooltip_C::SetParentItemContainer(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetParentItemContainer"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};

	params.itemContainer = itemContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_ItemTooltip_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.BP_AnimateVisibility"));

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


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.AnimIn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::AnimIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.AnimIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.ShowRelevantSections
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     itemRowHandle                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           IsInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemTooltip_C::ShowRelevantSections(const struct FDataTableRowHandle& itemRowHandle, bool IsInventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.ShowRelevantSections"));

	struct
	{
		struct FDataTableRowHandle     itemRowHandle;
		bool                           IsInventoryItem;
	} params = {};

	params.itemRowHandle = itemRowHandle;
	params.IsInventoryItem = IsInventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromShopItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::SetDataFromShopItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromShopItem"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromItemContainer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTooltip_C::SetDataFromItemContainer(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.SetDataFromItemContainer"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params = {};

	params.itemContainer = itemContainer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.AddSellTooltipInfo
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_InputKeyNav  newItem                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// bool                           ClearDefaultNavItems           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemTooltip_C::AddSellTooltipInfo(const struct FStructure_InputKeyNav& newItem, bool ClearDefaultNavItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.AddSellTooltipInfo"));

	struct
	{
		struct FStructure_InputKeyNav  newItem;
		bool                           ClearDefaultNavItems;
	} params = {};

	params.newItem = newItem;
	params.ClearDefaultNavItems = ClearDefaultNavItems;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.ClearTooltipResources
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemTooltip_C::ClearTooltipResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.ClearTooltipResources"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ItemTooltip.WBP_ItemTooltip_C.ExecuteUbergraph_WBP_ItemTooltip
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemTooltip_C::ExecuteUbergraph_WBP_ItemTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemTooltip.WBP_ItemTooltip_C.ExecuteUbergraph_WBP_ItemTooltip"));

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
