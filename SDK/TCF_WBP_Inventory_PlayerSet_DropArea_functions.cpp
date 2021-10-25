// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_PlayerSet_DropArea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.IsItemCompatible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           isCompatible                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Inventory_PlayerSet_DropArea_C::IsItemCompatible(const struct FYInventoryItem& inventoryItem, bool* isCompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.IsItemCompatible");

	struct
	{
		struct FYInventoryItem         inventoryItem;
		bool                           isCompatible;
	} params;

	params.inventoryItem = inventoryItem;

	UObject::ProcessEvent(fn, &params);

	if (isCompatible != nullptr)
		*isCompatible = params.isCompatible;
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.HideDragUX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::HideDragUX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.HideDragUX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Inventory_PlayerSet_DropArea_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDrop");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.AssignDragAndDropOperationDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::AssignDragAndDropOperationDelegates(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.AssignDragAndDropOperationDelegates");

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelledCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDragCancelledCallback(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelledCallback");

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDropCallback(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropCallback");

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropStateChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDragStateData         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDropStateChangedCallback(const struct FYDragStateData& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDropStateChangedCallback");

	struct
	{
		struct FYDragStateData         State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnSplitCurrentDraggingStack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::OnSplitCurrentDraggingStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnSplitCurrentDraggingStack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragLeave");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnDragCancelled");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ListenForSplitAfterDrag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::ListenForSplitAfterDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ListenForSplitAfterDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.StopListeningForSplitAfterDrag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::StopListeningForSplitAfterDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.StopListeningForSplitAfterDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemSplitAfterDragBegun__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnItemSplitAfterDragBegun__DelegateSignature(const struct FYInventoryItem& Item, int localPlayerInventoryComponentId, int inventoryItemComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemSplitAfterDragBegun__DelegateSignature");

	struct
	{
		struct FYInventoryItem         Item;
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
	} params;

	params.Item = Item;
	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnValidDragDropOperationDetected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::OnValidDragDropOperationDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnValidDragDropOperationDetected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInvalidDragDropOperationDetected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_C::OnInvalidDragDropOperationDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnInvalidDragDropOperationDetected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDroppedWithDragDropOperation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      InDragDropOperation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnItemDroppedWithDragDropOperation__DelegateSignature(class UDragDropOperation* InDragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDroppedWithDragDropOperation__DelegateSignature");

	struct
	{
		class UDragDropOperation*      InDragDropOperation;
	} params;

	params.InDragDropOperation = InDragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDropped__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_C::OnItemDropped__DelegateSignature(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C.OnItemDropped__DelegateSignature");

	struct
	{
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
		struct FYInventoryItem         inventoryItem;
		int                            amountToMove;
	} params;

	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;
	params.inventoryItem = inventoryItem;
	params.amountToMove = amountToMove;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
