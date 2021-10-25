// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_C::SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_Loadout_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GenericPanelScreenIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_C::GenericPanelScreenIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.GenericPanelScreenIn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_1_OnItemAdded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_1_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_1_OnItemAdded__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_3_OnDragStarted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_3_OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_3_OnDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.DraggingItemOutsideOfWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      InPayload                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::DraggingItemOutsideOfWidget(class UDragDropOperation* InPayload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.DraggingItemOutsideOfWidget"));

	struct
	{
		class UDragDropOperation*      InPayload;
	} params;

	params.InPayload = InPayload;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetInventoryId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInventoryComponentId        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::SetInventoryId(int NewInventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.SetInventoryId"));

	struct
	{
		int                            NewInventoryComponentId;
	} params;

	params.NewInventoryComponentId = NewInventoryComponentId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.AddedItemCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::AddedItemCallback(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.AddedItemCallback"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnDragStartedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::OnDragStartedCallback(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnDragStartedCallback"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.ExecuteUbergraph_WBP_Inventory_Loadout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::ExecuteUbergraph_WBP_Inventory_Loadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.ExecuteUbergraph_WBP_Inventory_Loadout"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnItemAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnItemAdded__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInventoryDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_C::OnInventoryDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout.WBP_Inventory_Loadout_C.OnInventoryDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
