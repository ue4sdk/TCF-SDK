// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_Match_DropToGround_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.HandleModDroppedCallback
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYInventoryItem         outInventoryItem               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            inventoryId                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

bool UWBP_Inventory_Match_DropToGround_C::HandleModDroppedCallback(const struct FYInventoryItem& inInventoryItem, struct FYInventoryItem* outInventoryItem, int* inventoryId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.HandleModDroppedCallback"));

	struct
	{
		struct FYInventoryItem         inInventoryItem;
		struct FYInventoryItem         outInventoryItem;
		bool                           ReturnValue;
		int                            inventoryId;
	} params;

	params.inInventoryItem = inInventoryItem;

	UObject::ProcessEvent(fn, &params);

	if (outInventoryItem != nullptr)
		*outInventoryItem = params.outInventoryItem;
	if (inventoryId != nullptr)
		*inventoryId = params.inventoryId;

	return params.ReturnValue;
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnExecuteItemSplittingCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Match_DropToGround_C::OnExecuteItemSplittingCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnExecuteItemSplittingCallback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Match_DropToGround_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragEnter"));

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


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Inventory_Match_DropToGround_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDrop"));

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


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Match_DropToGround_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragCancelled"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Match_DropToGround_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnDragLeave"));

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.NotifyInventoryClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Match_DropToGround_C::NotifyInventoryClosed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.NotifyInventoryClosed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnInventoryClosedCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Match_DropToGround_C::OnInventoryClosedCalled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnInventoryClosedCalled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.ExecuteUbergraph_WBP_Inventory_Match_DropToGround
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Match_DropToGround_C::ExecuteUbergraph_WBP_Inventory_Match_DropToGround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.ExecuteUbergraph_WBP_Inventory_Match_DropToGround"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnInventoryClosed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_Match_DropToGround_C::OnInventoryClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Match_DropToGround.WBP_Inventory_Match_DropToGround_C.OnInventoryClosed__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
