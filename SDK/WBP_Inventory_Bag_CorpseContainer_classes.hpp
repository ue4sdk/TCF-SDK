#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Bag_CorpseContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_Bag_CorpseContainer.WBP_Inventory_Bag_CorpseContainer_C
// 0x01A8 (0x0648 - 0x04A0)
class UWBP_Inventory_Bag_CorpseContainer_C : public UYWidget_Inventory_Container
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Inventory_Bag_Item_C*                   WBP_Inventory_Bag_Item;                                   // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnBackpackLootedEvent;                                    // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FYUIInventoryData                           In_Player_Inventory;                                      // 0x04C0(0x0188) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_Bag_CorpseContainer.WBP_Inventory_Bag_CorpseContainer_C"));
		return ptr;
	}


	EYPlayerSetType BP_GetTargetSetType(class UUserWidget* InWidget);
	float BP_GetCurrentWeight();
	float BP_GetCurrentMaxWeight();
	bool BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget);
	void OnMoveItemToSlotCallback(int originInventoryComponentId, int targetInventoryComponentId, const struct FYInventoryItem& inventoryItem, int amountToMove, EYPlayerSetType targetSlot);
	void SetInventoryId(int inventoryComponentId);
	void BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory);
	void OnInitialized();
	void CheckBagItem();
	void ExecuteUbergraph_WBP_Inventory_Bag_CorpseContainer(int EntryPoint);
	void OnBackpackLootedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
