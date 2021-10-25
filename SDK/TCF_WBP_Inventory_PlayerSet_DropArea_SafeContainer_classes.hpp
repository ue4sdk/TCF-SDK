#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_PlayerSet_DropArea_SafeContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C
// 0x001C (0x027C - 0x0260)
class UWBP_Inventory_PlayerSet_DropArea_SafeContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Inventory_PlayerSet_DropArea_C*         UI_Inventory_PlayerSet_DropArea_WBP;                      // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYWidget_Inventory_Base*                     NewParentInventoryWidget;                                 // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Inventory_Id;                                             // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea_SafeContainer.WBP_Inventory_PlayerSet_DropArea_SafeContainer_C"));
		return ptr;
	}


	void OnItemSplitAfterDragBegun(const struct FYInventoryItem& Item, int localPlayerInventoryComponentId, int inventoryItemComponentID);
	void GetTargetInventoryComponentId(int* targetInventoryComponentId);
	void OnExecuteItemSplittingCallback();
	void OnItemDroppedCallback(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove);
	void Construct();
	void AssignDragAndDropOperationDelegates(class UDragDropOperation* DragDropOperation);
	void SetParentWidget(class UYWidget_Inventory_Base* NewParentInventoryWidget);
	void Destruct();
	void ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_SafeContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
