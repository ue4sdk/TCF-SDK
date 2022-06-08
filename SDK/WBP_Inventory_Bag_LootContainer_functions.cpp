// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Bag_LootContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.HandleModDroppedCallback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         inInventoryItem                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// EYPlayerSetType                targetSetType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            targetInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_LootContainer_C::HandleModDroppedCallback(const struct FYInventoryItem& inInventoryItem, EYPlayerSetType targetSetType, int targetInventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.HandleModDroppedCallback"));

	struct
	{
		struct FYInventoryItem         inInventoryItem;
		EYPlayerSetType                targetSetType;
		int                            targetInventoryComponentId;
	} params = {};

	params.inInventoryItem = inInventoryItem;
	params.targetSetType = targetSetType;
	params.targetInventoryComponentId = targetInventoryComponentId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetTargetSetType
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EYPlayerSetType UWBP_Inventory_Bag_LootContainer_C::BP_GetTargetSetType(class UUserWidget* InWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetTargetSetType"));

	struct
	{
		class UUserWidget*             InWidget;
		EYPlayerSetType                ReturnValue;
	} params = {};

	params.InWidget = InWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetCurrentWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Inventory_Bag_LootContainer_C::BP_GetCurrentWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetCurrentWeight"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetCurrentMaxWeight
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_Inventory_Bag_LootContainer_C::BP_GetCurrentMaxWeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_GetCurrentMaxWeight"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_CanMoveItem
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UUserWidget*             InWidget                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Inventory_Bag_LootContainer_C::BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_CanMoveItem"));

	struct
	{
		struct FYInventoryItem         inventoryItem;
		class UUserWidget*             InWidget;
		bool                           ReturnValue;
	} params = {};

	params.inventoryItem = inventoryItem;
	params.InWidget = InWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.OnMoveItemToSlotCallback
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            originInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            targetInventoryComponentId     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYPlayerSetType                targetSlot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_LootContainer_C::OnMoveItemToSlotCallback(int originInventoryComponentId, int targetInventoryComponentId, const struct FYInventoryItem& inventoryItem, int amountToMove, EYPlayerSetType targetSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.OnMoveItemToSlotCallback"));

	struct
	{
		int                            originInventoryComponentId;
		int                            targetInventoryComponentId;
		struct FYInventoryItem         inventoryItem;
		int                            amountToMove;
		EYPlayerSetType                targetSlot;
	} params = {};

	params.originInventoryComponentId = originInventoryComponentId;
	params.targetInventoryComponentId = targetInventoryComponentId;
	params.inventoryItem = inventoryItem;
	params.amountToMove = amountToMove;
	params.targetSlot = targetSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.SetInventoryId
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inventoryComponentId           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_LootContainer_C::SetInventoryId(int inventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.SetInventoryId"));

	struct
	{
		int                            inventoryComponentId;
	} params = {};

	params.inventoryComponentId = inventoryComponentId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_PlayerInventoryDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYUIInventoryData       inPlayerInventory              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Inventory_Bag_LootContainer_C::BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.BP_PlayerInventoryDataUpdated"));

	struct
	{
		struct FYUIInventoryData       inPlayerInventory;
	} params = {};

	params.inPlayerInventory = inPlayerInventory;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_LootContainer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_Bag_LootContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.ExecuteUbergraph_WBP_Inventory_Bag_LootContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_Bag_LootContainer_C::ExecuteUbergraph_WBP_Inventory_Bag_LootContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_Bag_LootContainer.WBP_Inventory_Bag_LootContainer_C.ExecuteUbergraph_WBP_Inventory_Bag_LootContainer"));

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
