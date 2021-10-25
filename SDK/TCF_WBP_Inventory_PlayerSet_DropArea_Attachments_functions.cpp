// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_PlayerSet_DropArea_Attachments_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnItemDroppedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            amountToMove                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Attachments_C::OnItemDroppedCallback(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnItemDroppedCallback");

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


// Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnDropStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDragStateData         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Inventory_PlayerSet_DropArea_Attachments_C::OnDropStateChanged(const struct FYDragStateData& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnDropStateChanged");

	struct
	{
		struct FYDragStateData         State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_Attachments_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Attachments_C::ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
