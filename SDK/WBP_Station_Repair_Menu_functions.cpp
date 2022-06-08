// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Station_Repair_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_3
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent__ENTRYPOINTWBP_Station_Repair_Menu_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.IsItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           isEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Repair_Menu_C::IsItemEquipped(struct FYInventoryItem* inventoryItem, bool* isEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.IsItemEquipped"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		bool                           isEquipped;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (inventoryItem != nullptr)
		*inventoryItem = params.inventoryItem;
	if (isEquipped != nullptr)
		*isEquipped = params.isEquipped;
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.OnItemRepaired
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYRepairItemResult             Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::OnItemRepaired(const struct FYInventoryItem& inventoryItem, EYRepairItemResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.OnItemRepaired"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		EYRepairItemResult             Result;
	} params = {};

	params.inventoryItem = inventoryItem;
	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SelectItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::SelectItem(class UYWidget_ItemContainer* itemWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SelectItem"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
	} params = {};

	params.itemWidget = itemWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.FilterTile
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemTile                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::FilterTile(class UYWidget_ItemContainer* itemTile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.FilterTile"));

	struct
	{
		class UYWidget_ItemContainer*  itemTile;
	} params = {};

	params.itemTile = itemTile;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.CreateItemTile
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Station_Repair_Menu_C::CreateItemTile(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.CreateItemTile"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.RequestItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::RequestItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.RequestItems"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Station_Repair_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BP_AnimateVisibility"));

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


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_2"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::SequenceEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.SequenceEvent_3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::BP_OnWidgetStartShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BP_OnWidgetStartShow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_Station_Repair_Menu_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BndEvt__WBP_Station_Repair_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry Categories                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<En_FilterCategoryCollection> ReturnValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::BndEvt__WBP_Station_Repair_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BndEvt__WBP_Station_Repair_Menu_WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature"));

	struct
	{
		struct FYFilterCategoriesDataEntry Categories;
		TEnumAsByte<En_FilterCategoryCollection> ReturnValue;
	} params = {};

	params.Categories = Categories;
	params.ReturnValue = ReturnValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BndEvt__WBP_Station_Repair_Menu_WBP_Cost_K2Node_ComponentBoundEvent_1_OnPurchase__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::BndEvt__WBP_Station_Repair_Menu_WBP_Cost_K2Node_ComponentBoundEvent_1_OnPurchase__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.BndEvt__WBP_Station_Repair_Menu_WBP_Cost_K2Node_ComponentBoundEvent_1_OnPurchase__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_Repair_Menu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.PreConstruct"));

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


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.UpdateSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_Repair_Menu_C::UpdateSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.UpdateSelection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.ExecuteUbergraph_WBP_Station_Repair_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::ExecuteUbergraph_WBP_Station_Repair_Menu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.ExecuteUbergraph_WBP_Station_Repair_Menu"));

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


// Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.OnItemSelectedChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ItemBaseID                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Repair_Menu_C::OnItemSelectedChanged__DelegateSignature(const struct FName& ItemBaseID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Station_Repair_Menu.WBP_Station_Repair_Menu_C.OnItemSelectedChanged__DelegateSignature"));

	struct
	{
		struct FName                   ItemBaseID;
	} params = {};

	params.ItemBaseID = ItemBaseID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
