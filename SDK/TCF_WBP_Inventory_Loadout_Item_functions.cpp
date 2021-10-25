// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_Loadout_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Inventory_Loadout_Item_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BindDragDropItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::BindDragDropItems(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BindDragDropItems"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		bool                           isDragging;
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.itemWidget = itemWidget;
	params.isDragging = isDragging;
	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BindDragDropEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::BindDragDropEvent(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BindDragDropEvent"));

	struct
	{
		class UYWidget_ItemContainer*  itemWidget;
		bool                           isDragging;
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.itemWidget = itemWidget;
	params.isDragging = isDragging;
	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BuildPlayerSet
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inInventoryId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TMap<EYPlayerSetType, struct FYInventoryItem> inIndividualInventoryItems     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Inventory_Loadout_Item_C::BuildPlayerSet(int inInventoryId, TMap<EYPlayerSetType, struct FYInventoryItem> inIndividualInventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BuildPlayerSet"));

	struct
	{
		int                            inInventoryId;
		TMap<EYPlayerSetType, struct FYInventoryItem> inIndividualInventoryItems;
	} params;

	params.inInventoryId = inInventoryId;
	params.inIndividualInventoryItems = inIndividualInventoryItems;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BP_PlayerInventoryDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Loadout_Item_C::BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.BP_PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params;

	params.inPlayerInventory = inPlayerInventory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.DraggingItemOutsideOfWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::DraggingItemOutsideOfWidget(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.DraggingItemOutsideOfWidget"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Loadout_Item_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.SetInventoryId
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::SetInventoryId(int inventoryComponentId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.SetInventoryId"));

	struct
	{
		int                            inventoryComponentId;
	} params;

	params.inventoryComponentId = inventoryComponentId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.ExecuteUbergraph_WBP_Inventory_Loadout_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::ExecuteUbergraph_WBP_Inventory_Loadout_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.ExecuteUbergraph_WBP_Inventory_Loadout_Item"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnItemAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnItemAdded__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.OnDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.MoveItemToSlot__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            originInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            targetInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Loadout_Item_C::MoveItemToSlot__DelegateSignature(int originInventoryComponentId, int targetInventoryComponentId, const struct FYInventoryItem& inventoryItem, int amountToMove, EYPlayerSetType targetSlot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Loadout_Item.WBP_Inventory_Loadout_Item_C.MoveItemToSlot__DelegateSignature"));

	struct
	{
		int                            originInventoryComponentId;
		int                            targetInventoryComponentId;
		struct FYInventoryItem         inventoryItem;
		int                            amountToMove;
		EYPlayerSetType                targetSlot;
	} params;

	params.originInventoryComponentId = originInventoryComponentId;
	params.targetInventoryComponentId = targetInventoryComponentId;
	params.inventoryItem = inventoryItem;
	params.amountToMove = amountToMove;
	params.targetSlot = targetSlot;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
