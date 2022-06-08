#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Bag_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_Bag_Player.WBP_Inventory_Bag_Player_C
// 0x0020 (0x04C0 - 0x04A0)
class UWBP_Inventory_Bag_Player_C : public UYWidget_Inventory_PlayerBag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Inventory_Bag_Item_C*                   WBP_Inventory_Bag_Item;                                   // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnAddItem;                                                // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_Bag_Player.WBP_Inventory_Bag_Player_C"));
		return ptr;
	}


	void HandleModDroppedCallback(const struct FYInventoryItem& inInventoryItem, EYPlayerSetType targetSetType, int targetInventoryComponentId);
	EYPlayerSetType BP_GetTargetSetType(class UUserWidget* InWidget);
	float BP_GetCurrentMaxWeight();
	float BP_GetCurrentWeight();
	bool BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget);
	bool CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget);
	void OnMoveItemToSlotCallback(int originInventoryComponentId, int targetInventoryComponentId, const struct FYInventoryItem& inventoryItem, int amountToMove, EYPlayerSetType targetSlot);
	void SetInventoryId(int inventoryComponentId);
	void BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory);
	void OnInitialized();
	void BndEvt__WBP_Inventory_Bag_Player_WBP_Inventory_Bag_Item_K2Node_ComponentBoundEvent_0_AddedItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void OnPlayerSetUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent);
	void ExecuteUbergraph_WBP_Inventory_Bag_Player(int EntryPoint);
	void OnAddItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
