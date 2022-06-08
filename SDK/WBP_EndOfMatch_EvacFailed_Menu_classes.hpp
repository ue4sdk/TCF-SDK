#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatch_EvacFailed_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C
// 0x011C (0x0428 - 0x030C)
class UWBP_EndOfMatch_EvacFailed_Menu_C : public UWBP_EndOfMatchScreen_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ScreenOut_Anim;                                           // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ScreenIn_Inventory_Anim;                                  // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            ScreenIn_DMGRecap_Anim;                                   // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_GenericContent_Panel_C*                 DMGRecapContent_Panel;                                    // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              DMGRecapContentList_2;                                    // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_DamageCauser_C*              WBP_EndOfMatch_DMGSource;                                 // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_DamageCauser_C*              WBP_EndOfMatch_DMGSource_2;                               // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_DamageCauser_C*              WBP_EndOfMatch_DMGSource_3;                               // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_EndOfMatch_Headline_C*                  WBP_EndOfMatch_Headline;                                  // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Inventory_Loadout_C*                    WBP_Inventory_Loadout;                                    // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_LoadoutInsurance_C*                     WBP_LoadoutInsurance;                                     // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FDataTableRowHandle                         SoundFX_Fail;                                             // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SoundFX_ScreenIn;                                         // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SoundFX_ScreenOut;                                        // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FMulticastScriptDelegate                    ExitScreen;                                               // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TMap<EYPlayerSetType, struct FYInventoryItem>      IndividualInventoryItems;                                 // 0x03B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       HeaderText;                                               // 0x0408(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_EndOfMatch_EvacFailed_Menu.WBP_EndOfMatch_EvacFailed_Menu_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_3(class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline);
	void SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_2();
	void SequenceEvent__ENTRYPOINTWBP_EndOfMatch_EvacFailed_Menu_1(class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast);
	class UWBP_EndOfMatch_DamageCauser_C* CreateDamgeSourceWidget();
	void TryGetInventory();
	void OnStageUpdated(int stage);
	class UYDamageRecapComponent* GetDamageRecapComponent();
	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void WBP_EndOfMatch_Toast_Event_1(class UWBP_EndOfMatch_Announcement_C* WBP_EndOfMatch_Toast);
	void SequenceEvent_1();
	void WBP_EndOfMatch_Headline_Event_1(class UWBP_EndOfMatch_Headline_C* WBP_EndOfMatch_Headline);
	void Construct();
	void TextAnimationFinished();
	void PlayFailAnim();
	void PlayScreenOutAnim();
	void RefreshData();
	void BP_OnCondensedDamageInfoReceived_Event_1(TArray<struct FYCondensedDamageData> Events);
	void InitializeDamageRecap();
	void BndEvt__WBP_Inventory_Loadout_K2Node_ComponentBoundEvent_0_OnItemAdded__DelegateSignature(class UYWidget_ItemContainer* itemContainer);
	void OnScreenOut();
	void OnHeadlineScreenOut();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_EndOfMatch_EvacFailed_Menu(int EntryPoint);
	void ExitScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
