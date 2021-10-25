// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Stash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Stash.WBP_Stash_C.Try Find Stash Item Container From Backend Id
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 itemBackendId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYWidget_ItemContainer*  AsItemContainer                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::Try_Find_Stash_Item_Container_From_Backend_Id(const struct FString& itemBackendId, bool* SUCCESS, class UWidget** Widget, class UYWidget_ItemContainer** AsItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Try Find Stash Item Container From Backend Id"));

	struct
	{
		struct FString                 itemBackendId;
		bool                           SUCCESS;
		class UWidget*                 Widget;
		class UYWidget_ItemContainer*  AsItemContainer;
	} params;

	params.itemBackendId = itemBackendId;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
	if (Widget != nullptr)
		*Widget = params.Widget;
	if (AsItemContainer != nullptr)
		*AsItemContainer = params.AsItemContainer;
}


// Function WBP_Stash.WBP_Stash_C.Handle Visibility Of Item Moved From Stash To Sell Screen
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Normal_Visibility           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::Handle_Visibility_Of_Item_Moved_From_Stash_To_Sell_Screen(bool Is_Normal_Visibility, class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Handle Visibility Of Item Moved From Stash To Sell Screen"));

	struct
	{
		bool                           Is_Normal_Visibility;
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.Is_Normal_Visibility = Is_Normal_Visibility;
	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.On Item Removed From Sell List
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::On_Item_Removed_From_Sell_List(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.On Item Removed From Sell List"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.Double Click from Stash to Sell List
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::Double_Click_from_Stash_to_Sell_List(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Double Click from Stash to Sell List"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.On Stash Dropped
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::On_Stash_Dropped(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.On Stash Dropped"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.Set Stash Limit Visibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shoudBeVisible                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

void UWBP_Stash_C::Set_Stash_Limit_Visibility(bool shoudBeVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Set Stash Limit Visibility"));

	struct
	{
		bool                           shoudBeVisible;
	} params;

	params.shoudBeVisible = shoudBeVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.Move Item from Sell to Stash Area
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::Move_Item_from_Sell_to_Stash_Area(class UDragDropOperation* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Move Item from Sell to Stash Area"));

	struct
	{
		class UDragDropOperation*      Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.On Stash Item Dropped On Sell Area
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 itemBackendId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::On_Stash_Item_Dropped_On_Sell_Area(const struct FString& itemBackendId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.On Stash Item Dropped On Sell Area"));

	struct
	{
		struct FString                 itemBackendId;
	} params;

	params.itemBackendId = itemBackendId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.Set Stash Amount Values
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Stash_C::Set_Stash_Amount_Values()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Set Stash Amount Values"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.BP_CreateInventoryItem
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                setSlottype                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYInventoryListType            listType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isEquipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYWidget_ItemContainer*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_ItemContainer* UWBP_Stash_C::BP_CreateInventoryItem(const struct FYInventoryItem& Item, EYPlayerSetType setSlottype, EYInventoryListType listType, bool isEquipped, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.BP_CreateInventoryItem"));

	struct
	{
		struct FYInventoryItem         Item;
		EYPlayerSetType                setSlottype;
		EYInventoryListType            listType;
		bool                           isEquipped;
		int                            Amount;
		class UYWidget_ItemContainer*  ReturnValue;
	} params;

	params.Item = Item;
	params.setSlottype = setSlottype;
	params.listType = listType;
	params.isEquipped = isEquipped;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Stash.WBP_Stash_C.On Item Drag Detected
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isDragging                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::On_Item_Drag_Detected(class UYWidget_ItemContainer* itemWidget, bool isDragging, class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.On Item Drag Detected"));

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


// Function WBP_Stash.WBP_Stash_C.Create Items
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Inventory_Id                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::Create_Items(const struct FYInventoryItem& Item, int Inventory_Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Create Items"));

	struct
	{
		struct FYInventoryItem         Item;
		int                            Inventory_Id;
	} params;

	params.Item = Item;
	params.Inventory_Id = Inventory_Id;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Stash_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.FilterItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYFilterCategoriesDataEntry DesiredCategories              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Stash_C::FilterItems(const struct FYFilterCategoriesDataEntry& DesiredCategories)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.FilterItems"));

	struct
	{
		struct FYFilterCategoriesDataEntry DesiredCategories;
	} params;

	params.DesiredCategories = DesiredCategories;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.ClearItems
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Stash_C::ClearItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.ClearItems"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.DraggingItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::DraggingItem(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.DraggingItem"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.OnDragCancelledCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::OnDragCancelledCallback(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.OnDragCancelledCallback"));

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.OnDropCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::OnDropCallback(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.OnDropCallback"));

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.BP_RemoveItems
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYInventoryItem> itemsToRemove                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Stash_C::BP_RemoveItems(TArray<struct FYInventoryItem> itemsToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.BP_RemoveItems"));

	struct
	{
		TArray<struct FYInventoryItem> itemsToRemove;
	} params;

	params.itemsToRemove = itemsToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.BP_UpdateItems
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ItemId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::BP_UpdateItems(const struct FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.BP_UpdateItems"));

	struct
	{
		struct FString                 ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.AllItemsSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Stash_C::AllItemsSpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.AllItemsSpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Stash_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.InventoryInfoUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::InventoryInfoUpdated(class UYStateInventoryComponent* stateInventoryComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.InventoryInfoUpdated"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.ExecuteUbergraph_WBP_Stash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::ExecuteUbergraph_WBP_Stash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.ExecuteUbergraph_WBP_Stash"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.MoveItemFromStashToSellScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::MoveItemFromStashToSellScreen__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.MoveItemFromStashToSellScreen__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.OnItemAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_ItemContainer*  itemContainer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.OnItemAdded__DelegateSignature"));

	struct
	{
		class UYWidget_ItemContainer*  itemContainer;
	} params;

	params.itemContainer = itemContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Stash.WBP_Stash_C.OnDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Stash_C::OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Stash.WBP_Stash_C.OnDragStarted__DelegateSignature"));

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
