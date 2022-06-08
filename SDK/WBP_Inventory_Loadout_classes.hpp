#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_Loadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_Loadout.WBP_Inventory_Loadout_C
// 0x0059 (0x0329 - 0x02D0)
class UWBP_Inventory_Loadout_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_ConnectorBottom;                                      // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_ConnectorTop;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_GenericContent_Panel_C*                 WBP_GenericContent_Panel;                                 // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Bag_Player_C*                 WBP_Inventory_Bag_Player;                                 // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Loadout_Item_C*               WBP_Inventory_Loadout_Item;                               // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnInventoryDragStarted;                                   // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnItemAdded;                                              // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               AllowPendingInsurance;                                    // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_Loadout.WBP_Inventory_Loadout_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_Inventory_Loadout_1();
	void SetItemContainerInsuranceProperties(class UObject* Item_Container);
	void SetDropAreasEnabled(bool DropAreasEnabled);
	void GetAllItemContainerWidgets(TArray<class UYWidget_ItemContainer*>* itemContainers);
	void FindItemContainerWidget(const struct FString& ItemInstanceId, class UYWidget_ItemContainer** itemContainer, bool* Found);
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void GenericPanelScreenIn();
	void SetInventoryId(int NewInventoryComponentId);
	void BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Loadout_Item_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void BndEvt__WBP_Inventory_Loadout_WBP_Inventory_Bag_Player_K2Node_ComponentBoundEvent_1_OnAddItem__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void ExecuteUbergraph_WBP_Inventory_Loadout(int EntryPoint);
	void OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void OnInventoryDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
