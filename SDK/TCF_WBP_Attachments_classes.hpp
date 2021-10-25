#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Attachments_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Attachments.WBP_Attachments_C
// 0x0020 (0x0468 - 0x0448)
class UWBP_Attachments_C : public UYWidget_Inventory_Attachments
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            WidgetIn_Anim;                                            // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_FullMessage_C*                          WBP_FullMessage;                                          // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_ItemList_C*                   WBP_InventoryList;                                        // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Attachments.WBP_Attachments_C"));
		return ptr;
	}


	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	EYPlayerSetType BP_GetTargetSetType(class UUserWidget* InWidget);
	float BP_GetCurrentMaxWeight();
	float BP_GetCurrentWeight();
	bool BP_CanMoveItem(const struct FYInventoryItem& inventoryItem, class UUserWidget* InWidget);
	void BP_PlayerInventoryDataUpdated(const struct FYUIInventoryData& inPlayerInventory);
	void OnInitialized();
	void ExecuteUbergraph_WBP_Attachments(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
