// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_DragAndDropable_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.GetInventoryItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         ReturnItem                     (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// EYPlayerSetType                slotType                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UItemComponent_DragAndDropable_WBP_C::GetInventoryItem(struct FYInventoryItem* ReturnItem, EYPlayerSetType* slotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.GetInventoryItem");

	struct
	{
		struct FYInventoryItem         ReturnItem;
		bool                           ReturnValue;
		EYPlayerSetType                slotType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ReturnItem != nullptr)
		*ReturnItem = params.ReturnItem;
	if (slotType != nullptr)
		*slotType = params.slotType;

	return params.ReturnValue;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDropDone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::OnDragDropDone(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDropDone");

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.isCompatible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           isCompatible                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_DragAndDropable_WBP_C::isCompatible(const struct FYInventoryItem& Item, bool* isCompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.isCompatible");

	struct
	{
		struct FYInventoryItem         Item;
		bool                           isCompatible;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (isCompatible != nullptr)
		*isCompatible = params.isCompatible;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.PlayDragOverEffectsIfCompatible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::PlayDragOverEffectsIfCompatible(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.PlayDragOverEffectsIfCompatible");

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.WantsToDropAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UItemComponent_DragAndDropable_WBP_C::WantsToDropAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.WantsToDropAmount");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ShowDragUXForCompatibleItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::ShowDragUXForCompatibleItem(class UDragDropOperation* DragDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ShowDragUXForCompatibleItem");

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params;

	params.DragDropOperation = DragDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.HideDragUXForCompatibleItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      self2                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::HideDragUXForCompatibleItem(class UDragDropOperation* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.HideDragUXForCompatibleItem");

	struct
	{
		class UDragDropOperation*      self2;
	} params;

	params.self2 = self2;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.BP_OnDragDetected
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UDragDropOperation* UItemComponent_DragAndDropable_WBP_C::BP_OnDragDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.BP_OnDragDetected");

	struct
	{
		class UDragDropOperation*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemComponent_DragAndDropable_WBP_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UItemComponent_DragAndDropable_WBP_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragEnter");

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


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_DragAndDropable_WBP_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_DragAndDropable_WBP_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.AssignDragDetectedDelagates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragNDropOperation             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::AssignDragDetectedDelagates(class UDragDropOperation* DragNDropOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.AssignDragDetectedDelagates");

	struct
	{
		class UDragDropOperation*      DragNDropOperation;
	} params;

	params.DragNDropOperation = DragNDropOperation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDrop_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::OnDrop_Event_2(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDrop_Event_2");

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragCancelled_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::OnDragCancelled_Event_2(class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragCancelled_Event_2");

	struct
	{
		class UDragDropOperation*      Operation;
	} params;

	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.Initialize Drag And Drop Data
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                playerSetType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYItemImprovementScreenSlotType uiSlotType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::Initialize_Drag_And_Drop_Data(int inventoryComponentId, const struct FYInventoryItem& inventoryItem, EYPlayerSetType playerSetType, EYItemImprovementScreenSlotType uiSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.Initialize Drag And Drop Data");

	struct
	{
		int                            inventoryComponentId;
		struct FYInventoryItem         inventoryItem;
		EYPlayerSetType                playerSetType;
		EYItemImprovementScreenSlotType uiSlotType;
	} params;

	params.inventoryComponentId = inventoryComponentId;
	params.inventoryItem = inventoryItem;
	params.playerSetType = playerSetType;
	params.uiSlotType = uiSlotType;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ExecuteUbergraph_ItemComponent_DragAndDropable_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_DragAndDropable_WBP_C::ExecuteUbergraph_ItemComponent_DragAndDropable_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.ExecuteUbergraph_ItemComponent_DragAndDropable_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDone__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_DragAndDropable_WBP_C::OnDragDone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnDragDone__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_DragAndDropable_WBP_C::OnMouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnMouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnUnhover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_DragAndDropable_WBP_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnUnhover__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_DragAndDropable_WBP_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C.OnHover__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
