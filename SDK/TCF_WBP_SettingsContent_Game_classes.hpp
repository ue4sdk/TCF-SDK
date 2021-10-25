#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContent_Game_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsContent_Game.WBP_SettingsContent_Game_C
// 0x00F0 (0x0430 - 0x0340)
class UWBP_SettingsContent_Game_C : public UWBP_SettingsContentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWBP_Dropdown_Btn_C*                         WBP_Dropdown_Btn_Language;                                // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ChatEnabled;                        // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_FOVMovementChanges;                 // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinBrazilianPortugueseChannel;     // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinChineseChannel;                 // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinEnglishChannel;                 // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinFrenchChannel;                  // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinGermanChannel;                  // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinPolishChannel;                  // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinRussianChannel;                 // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinSpanishChannel;                 // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_JoinTurkishChannel;                 // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Language;                           // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_RotateMinimap;                      // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Subtitles;                          // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_Chat;                            // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_BrazilianPortugueseChannel;            // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_ChatEnabled;                           // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_ChineseChannel;                        // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_EnglishChannel;                        // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_FOVMovementChanges;                    // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_FrenchChannel;                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_GermanChannel;                         // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_PolishChannel;                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_RotateMinimap;                         // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_RussianChannel;                        // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_SpanishChannel;                        // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_Subtitles;                             // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_TurkishChannel;                        // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsContent_Game.WBP_SettingsContent_Game_C");
		return ptr;
	}


	void UpdateChatToggles();
	void Provider_OnDataChanged(struct FName* DataName, struct FName* dataType);
	void UpdateLanguages();
	void Initialize();
	void RegisterWidgets();
	void BndEvt__WBP_ToggleText_Btn_BrazilianPortugueseChannel_K2Node_ComponentBoundEvent_1_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_ChatEnabled_K2Node_ComponentBoundEvent_2_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_ChineseChannel_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_EnglishChannel_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_FOVMovementChanges_K2Node_ComponentBoundEvent_5_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_FrenchChannel_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_GermanChannel_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_PolishChannel_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_RotateMinimap_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_RussianChannel_K2Node_ComponentBoundEvent_10_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_SpanishChannel_K2Node_ComponentBoundEvent_16_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_Subtitles_K2Node_ComponentBoundEvent_17_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_TurkishChannel_K2Node_ComponentBoundEvent_18_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_Dropdown_Btn_Language_K2Node_ComponentBoundEvent_0_OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void ExecuteUbergraph_WBP_SettingsContent_Game(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
