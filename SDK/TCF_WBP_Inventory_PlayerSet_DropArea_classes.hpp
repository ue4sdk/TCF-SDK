#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_PlayerSet_DropArea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C
// 0x0158 (0x03B8 - 0x0260)
class UWBP_Inventory_PlayerSet_DropArea_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            DragDetected;                                             // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      DropAreaImage;                                            // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SFX_DropSound;                                            // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_CompatibleDragOverSoundEffect;                        // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FScriptMulticastDelegate                    OnItemDropped;                                            // 0x0298(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0298(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FYInventoryItem                             DragDropItem;                                             // 0x02A8(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                DragDropItemComponentId;                                  // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	TArray<EYItemType>                                 StationUncompatibleItems;                                 // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EYItemType>                                 MatchUncompatibleItems;                                   // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UYWidget_Inventory_Base*                     ParentWidget;                                             // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UUserWidget*                                 ParentDropArea;                                           // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemDroppedWithDragDropOperation;                       // 0x0378(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0378(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnInvalidDragDropOperationDetected;                       // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0388(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnValidDragDropOperationDetected;                         // 0x0398(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0398(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemSplitAfterDragBegun;                                // 0x03A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x03A8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Inventory_PlayerSet_DropArea.WBP_Inventory_PlayerSet_DropArea_C");
		return ptr;
	}


	void IsItemCompatible(const struct FYInventoryItem& inventoryItem, bool* isCompatible);
	void HideDragUX();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void AssignDragAndDropOperationDelegates(class UDragDropOperation* DragDropOperation);
	void OnDragCancelledCallback(class UDragDropOperation* Operation);
	void OnDropCallback(class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnInitialized();
	void OnDropStateChangedCallback(const struct FYDragStateData& State);
	void OnSplitCurrentDraggingStack();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ListenForSplitAfterDrag();
	void StopListeningForSplitAfterDrag();
	void ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea(int EntryPoint);
	void OnItemSplitAfterDragBegun__DelegateSignature(const struct FYInventoryItem& Item, int localPlayerInventoryComponentId, int inventoryItemComponentID);
	void OnValidDragDropOperationDetected__DelegateSignature();
	void OnInvalidDragDropOperationDetected__DelegateSignature();
	void OnItemDroppedWithDragDropOperation__DelegateSignature(class UDragDropOperation* InDragDropOperation);
	void OnItemDropped__DelegateSignature(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToMove);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
