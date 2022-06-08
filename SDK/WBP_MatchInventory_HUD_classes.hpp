#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_MatchInventory_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C
// 0x0088 (0x0528 - 0x04A0)
class UWBP_MatchInventory_HUD_C : public UYWidget_Inventory_Overview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ItemInspectorIn_Anim;                                     // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ContainerHide_Anim;                                       // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_BlurFullScreenBacker_Panel_C*           WBP_BlurFullScreenBacker_Panel;                           // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKeyNavigation_C*                   WBP_InputKeyNavigation;                                   // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Loadout_C*                    WBP_Inventory_Loadout;                                    // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Match_DropToGround_C*         WBP_Inventory_Match_DropToGround;                         // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Match_DropToGround_C*         WBP_Inventory_Match_DropToGround_2;                       // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Item_Container_C*                       WBP_Item_Container;                                       // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ItemOverview_C*                         WBP_ItemInspector;                                        // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         OpenInventoryAudioHandle;                                 // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         CloseInventoryAudioHandle;                                // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         CloseContainerAudioHandle;                                // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_MatchInventory_HUD.WBP_MatchInventory_HUD_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_2();
	void SequenceEvent__ENTRYPOINTWBP_MatchInventory_HUD_1(class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout);
	void OnSortingMethodChangedCallback();
	bool BP_HandleBackKey();
	void DetermineLootContainerWidgetType(class AActor* InteractingActor, EYLootContainerWidgetType* Type);
	void OnInspectedInventoryItemUpdatedCallback(const struct FYInventoryItem& newInventoryItem);
	void ClearWeaponInspection();
	void OnToggleAttachmentScreenCallback();
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void SequenceEvent_1();
	void OnInventoryStateEntered();
	void OnInventoryStateLeft(bool bInterrupted);
	void UpdateOtherContainerVisibility();
	void OnInitialized();
	void OnBackpackLootedCallback();
	void WBP_Inventory_Loadout_Event_1(class UWBP_Inventory_Loadout_C* WBP_Inventory_Loadout);
	void BndEvt__WBP_MatchInventory_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_1_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle);
	void OnSortingModeChanged();
	void Construct();
	void BP_OnWidgetShown();
	void ExecuteUbergraph_WBP_MatchInventory_HUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
