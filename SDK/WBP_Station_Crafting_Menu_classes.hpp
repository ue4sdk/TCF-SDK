#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Station_Crafting_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C
// 0x0150 (0x0498 - 0x0348)
class UWBP_Station_Crafting_Menu_C : public UYWidgetView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ItemChange_Anim;                                          // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FilterChange_Anim;                                        // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                ItemList;                                                 // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     RotationButton;                                           // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher_ItemList;                                        // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Btn_C*                           WBP_Common_Btn;                                           // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Cost_C*                                 WBP_Cost;                                                 // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Cost_Modal_C*                           WBP_Cost_Modal;                                           // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_CraftingProgressWidget_C*               WBP_CraftingProgressWidget;                               // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_DividerHorizontal_Panel_C*              WBP_DividerHorizontal_Panel;                              // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_FilterNavigation_C*                     WBP_FilterNavigation;                                     // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Footer_C_Panel_C*                       WBP_Footer_C_Panel;                                       // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_GenericContent_Panel_C*                 WBP_GenericContent_Panel_Filters;                         // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ItemOverview_C*                         WBP_ItemOverview;                                         // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_LoadingOverlay_C*                       WBP_LoadingOverlay;                                       // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SingleRowScroll_Panel_C*                WBP_SingleRowScroll_Panel;                                // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYWidgetProvider_WeaponShops*                WeaponShopProvider;                                       // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         ScreenInSound;                                            // 0x03E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	TMap<int, struct FYShopBlueprintData>              ExecutionData;                                            // 0x03F0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TEnumAsByte<En_FilterCategoryCollection>           SelectedFilter;                                           // 0x0440(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	TArray<class UYWidget_ItemContainer*>              ItemTiles;                                                // 0x0448(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	class UYWidget_ItemContainer*                      SelectedWidget;                                           // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     BPName;                                                   // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UYControllerStationComponent*                controllerStationComponent;                               // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnItemSelected;                                           // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FName>                               AllowedItemIds;                                           // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Station_Crafting_Menu.WBP_Station_Crafting_Menu_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_3();
	void SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_2();
	void SequenceEvent__ENTRYPOINTWBP_Station_Crafting_Menu_1();
	bool Crafting_In_Progress();
	bool Is_Item_Valid_For_This_Shop(const struct FYShopItem& SelectedShopItem);
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	bool Selected_Item_Cant_Be_Skipped();
	bool Selected_Item_Cant_Be_Crafted();
	bool Get_If_Selected_Item_Is_Being_Crafted();
	void Refresh_Item_Price(bool Selected_Item_Is_Being_Crafted);
	void Refresh_Recipe_And_Button();
	void Close_Loading_Screen();
	void Play_Flash_Animations();
	TArray<struct FYCostEntryRow> Get_Price_to_Show_on_Crafting_Button_According_to_Context(bool SelectedItemIsBeingCrafted, TArray<struct FYCostEntryRow>* OptionalCost);
	bool Crafting_In_Progress_And_Is_The_Item_Currently_Selected();
	bool Item_Crafted_And_Selected_Item_Are_The_Same(class UYControllerCraftingComponent* Controller_Crafting_Component);
	void Set_Crafting_Timer_Current_Value(bool CraftingInProgressAndIsTheItemCurrentlySelected);
	void Handle_Player_Craft_Button_Click();
	void On_Crafted_Item_Fail_Response_Received();
	void On_Item_Crafting_Stopped_Response_Received();
	void On_Item_Crafting_Started_Fail_Response_Received(EYStartItemCraftingResultStatus startItemCraftingStatus);
	void On_Item_Crafting_Started_Response_Received();
	void Update_Selected_Item_Timer(float remainingSeconds);
	void Select_Crafting_Station_Item(class UYWidget_ItemContainer* ClickedWidget);
	void On_Filter_Clicked(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue);
	void Create_Item_Tile(const struct FYResourceManagerRequestEntry& Data);
	void Request_Items();
	void Filter_Tile(class UYWidget_ItemContainer* itemTile, bool newVisibility, bool* Visible);
	void SequenceEvent_1();
	void SequenceEvent_2();
	void SequenceEvent_3();
	void WBP_CraftingProgressWidget_Event_1(class UWBP_CraftingProgressWidget_C* WBP_CraftingProgressWidget);
	void BP_OnWidgetStartShow();
	void ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data);
	void Construct();
	void BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_K2Node_ComponentBoundEvent_0_OnPurchase__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_Station_Crafting_Menu_RotationButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_3_OnButtonSecondary__DelegateSignature();
	void BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature();
	void BndEvt__WBP_Station_Crafting_Menu_WBP_Cost_Modal_K2Node_ComponentBoundEvent_5_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void ExecuteUbergraph_WBP_Station_Crafting_Menu(int EntryPoint);
	void OnItemSelected__DelegateSignature(const struct FName& ItemBaseID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
