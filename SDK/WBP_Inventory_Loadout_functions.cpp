// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_C::SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetItemContainerInsuranceProperties
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item_Container                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::SetItemContainerInsuranceProperties(class UObject* Item_Container)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetItemContainerInsuranceProperties"));

	struct
	{
		class UObject*                 Item_Container;
	} params = {};

	params.Item_Container = Item_Container;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetDropAreasEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DropAreasEnabled               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Loadout_C::SetDropAreasEnabled(bool DropAreasEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetDropAreasEnabled"));

	struct
	{
		bool                           DropAreasEnabled;
	} params = {};

	params.DropAreasEnabled = DropAreasEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GetAllItemContainerWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UYWidget_ItemContainer*> itemContainers                 (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference)

void UWBP_Inventory_Loadout_C::GetAllItemContainerWidgets(TArray<class UYWidget_ItemContainer*>* itemContainers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GetAllItemContainerWidgets"));

	struct
	{
		TArray<class UYWidget_ItemContainer*> itemContainers;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (itemContainers != nullptr)
		*itemContainers = params.itemContainers;
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.FindItemContainerWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FString                 ItemInstanceId                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UYWidget_ItemContainer*  itemContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Found                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_Loadout_C::FindItemContainerWidget(const struct FString& ItemInstanceId, class UYWidget_ItemContainer** itemContainer, bool* Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.FindItemContainerWidget"));

	struct
	{
		struct FString                 ItemInstanceId;
		class UYWidget_ItemContainer*  itemContainer;
		bool                           Found;
	} params = {};

	params.ItemInstanceId = ItemInstanceId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (itemContainer != nullptr)
		*itemContainer = params.itemContainer;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_Loadout_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BP_AnimateVisibility"));

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


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GenericPanelScreenIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_C::GenericPanelScreenIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GenericPanelScreenIn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetInventoryId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInventoryComponentId        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::SetInventoryId(int NewInventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetInventoryId"));

	struct
	{
		int                            NewInventoryComponentId;
	} params = {};

	params.NewInventoryComponentId = NewInventoryComponentId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature"));

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


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Bag_Player_K2Node_ComponentBoundEvent_1_OnAddItem__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Bag_Player_K2Node_ComponentBoundEvent_1_OnAddItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Bag_Player_K2Node_ComponentBoundEvent_1_OnAddItem__DelegateSignature"));

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


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.ExecuteUbergraph_WBP_Inventory_Loadout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::ExecuteUbergraph_WBP_Inventory_Loadout(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.ExecuteUbergraph_WBP_Inventory_Loadout"));

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


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnItemAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnItemAdded__DelegateSignature"));

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


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInventoryDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::OnInventoryDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInventoryDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params = {};

	params.DragDropOperation = DragDropOperation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
