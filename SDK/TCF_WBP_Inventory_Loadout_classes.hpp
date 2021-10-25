#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Inventory_Loadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_Loadout.WBP_Inventory_Loadout_C
// 0x0048 (0x0308 - 0x02C0)
class UWBP_Inventory_Loadout_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_GenericContent_Panel_C*                 WBP_GenericContent_Panel;                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Bag_Player_C*                 WBP_Inventory_Bag_Player;                                 // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Loadout_Item_C*               WBP_Inventory_Loadout_Item;                               // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInventoryDragStarted;                                   // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02E8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnItemAdded;                                              // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02F8(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_Loadout.WBP_Inventory_Loadout_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1();
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void GenericPanelScreenIn();
	void BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_1_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void BndEvt__WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_3_OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void DraggingItemOutsideOfWidget(class UDragDropOperation* InPayload);
	void SetInventoryId(int NewInventoryComponentId);
	void OnInitialized();
	void AddedItemCallback(class UYWidget_ItemContainer* itemContainer);
	void OnDragStartedCallback(class UDragDropOperation* DragDropOperation);
	void ExecuteUbergraph_WBP_Inventory_Loadout(int EntryPoint);
	void OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void OnInventoryDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
