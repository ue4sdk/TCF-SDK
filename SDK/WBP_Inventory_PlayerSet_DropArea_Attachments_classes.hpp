#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_PlayerSet_DropArea_Attachments_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C
// 0x0020 (0x0290 - 0x0270)
class UWBP_Inventory_PlayerSet_DropArea_Attachments_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Inventory_PlayerSet_DropArea_C*         UI_Inventory_PlayerSet_DropArea_WBP;                      // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FString                                     weaponItemId;                                             // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea_Attachments.WBP_Inventory_PlayerSet_DropArea_Attachments_C"));
		return ptr;
	}


	void OnItemDroppedCallback(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove);
	void OnDropStateChanged(const struct FYDragStateData& State);
	void OnInitialized();
	void ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Attachments(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
