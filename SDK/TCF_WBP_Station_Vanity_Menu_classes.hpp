#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Vanity_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C
// 0x0178 (0x04B8 - 0x0340)
class UWBP_Station_Vanity_Menu_C : public UYWidget_Vanity_View
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_Cross;                                                // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                ItemList;                                                 // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     RotationButton;                                           // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    SelectionAction;                                          // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_Label;                                                // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Empty_Btn_C*                     WBP_Btn_Cancel;                                           // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Btn_C*                           WBP_Common_Btn;                                           // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_FilterNavigation_C*                     WBP_FilterNavigation;                                     // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_GenericContent_Panel_C*                 WBP_GenericContent_Panel_Filters;                         // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SingleRowScroll_Panel_C*                WBP_SingleRowScroll_Panel;                                // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Toast_C*                                WBP_Toast;                                                // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYWidget_ItemContainer*                      SelectedWidgetRef;                                        // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<int, struct FYFilterItemEntry>                SpawnRequestToRowHandleMap;                               // 0x03B0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<TEnumAsByte<En_VanityMenuStates>, struct FStructure_VanityMenuStateEntry> VanityScreenToSettingsData;                               // 0x0400(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     User_Id;                                                  // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               ScrollIntoView;                                           // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	TMap<struct FName, class UWBP_Item_Btn_C*>         RowHandleToCreatedChildWidget;                            // 0x0468(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Station_Vanity_Menu.WBP_Station_Vanity_Menu_C"));
		return ptr;
	}


	int EvaluateStackPop();
	bool ExecuteActivate();
	bool ExecuteDeactivate();
	void ClearWidgetsAndRequests();
	void RefreshRuntimeStateOnWidget(const struct FYFilterItemEntry& Entry, class UWBP_Item_Btn_C* CreatedBtn);
	void RefreshedCreatedCustomizationStates();
	void SetActiveVanityScreen(TEnumAsByte<En_VanityMenuStates> ID, EYCustomizationCategory customizationCategory);
	void ConstructItemWithFilterEntry(const struct FYFilterItemEntry& Entry);
	void SetSelectedWidget(class UYWidget_ItemContainer* DesiredSelectedWidget);
	void RequestAsyncCreationFromFilterSettings(const struct FYFilterCategoriesDataEntry& FilterSettings, bool ScrollIntoView);
	struct FYFilterRuntimeSettings Get_Filter_Runtime_Settings_To_Use();
	bool IsProspectSelectionActive();
	void BndEvt__WBP_Btn_Cancel_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void OnItemClicked(class UYWidget_ItemContainer* itemWidget);
	void ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data);
	void BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_FilterNavigation_K2Node_ComponentBoundEvent_0_OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue);
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__RotationButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BP_OnAccept(EYVanityViewDialogOptions Type);
	void BP_OnOnDecline(EYVanityViewDialogOptions Type);
	void OnCharacterUpdated_Event_1(EYCustomizationModelType Type);
	void PreConstruct(bool IsDesignTime);
	void BP_OnWidgetHidden();
	void BP_OnWidgetShown();
	void Init();
	void ExecuteUbergraph_WBP_Station_Vanity_Menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
