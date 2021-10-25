#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContent_Controls_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C
// 0x0130 (0x0470 - 0x0340)
class UWBP_SettingsContent_Controls_C : public UWBP_SettingsContentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UVerticalBox*                                VerticalBox_PerScopeSensitivity;                          // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ADSSensitivity;                          // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_MouseSensitivity;                        // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity;                       // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity_16x;                   // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity_1_5x;                  // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity_2x;                    // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity_4x;                    // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Selector_Btn_C*                         WBP_Selector_Btn_ScopedSensitivity_8x;                    // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_AdsSensitivity;                     // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_CrouchToggle;                       // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_EnablePerScopeSensitivity;          // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_FOVBasedSensitivity;                // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_InvertXAxis;                        // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_InvertYAxis;                        // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_LeaningToggle;                      // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_MouseSmoothing;                     // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity;                  // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity_3;                // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity_5;                // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity_9;                // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity_16;               // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_ScopedSensitivity_17;               // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_Sensitivity;                        // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_SprintToggle;                       // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingEntry_Item_C*                    WBP_SettingEntry_Item_TargetingToggle;                    // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_AimSensitivity;                  // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_SettingSectionHeader_Item_C*            WBP_SettingSectionHeader_InputOptions;                    // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_CrouchToggle;                          // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_FOVBasedSensitivityScaling;            // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_InvertX;                               // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_InvertY;                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_LeaningToggle;                         // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_MouseSmoothing;                        // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_PerScopeSensitivity;                   // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_SprintToggle;                          // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ToggleText_Btn_C*                       WBP_ToggleText_Btn_TargettingToggle;                      // 0x0468(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsContent_Controls.WBP_SettingsContent_Controls_C");
		return ptr;
	}


	void UpdateScopedSensitivityTexts();
	void Provider_OnDataChanged(struct FName* DataName, struct FName* dataType);
	void Initialize();
	void RegisterWidgets();
	void UpdateScopedSensitivityCategory();
	void BndEvt__WBP_Selector_Btn_MouseSensitivity_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ADSSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_ToggleText_Btn_CrouchToggle_K2Node_ComponentBoundEvent_3_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_FOVBasedSensitivityScaling_K2Node_ComponentBoundEvent_4_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_InvertX_K2Node_ComponentBoundEvent_6_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_InvertY_K2Node_ComponentBoundEvent_7_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_MouseSmoothing_K2Node_ComponentBoundEvent_8_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_PerScopeSensitivity_K2Node_ComponentBoundEvent_9_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_SprintToggle_K2Node_ComponentBoundEvent_12_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_ToggleText_Btn_TargettingToggle_K2Node_ComponentBoundEvent_13_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_1_5x_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_2x_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_4x_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_8x_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_Selector_Btn_ScopedSensitivity_16x_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void BndEvt__WBP_ToggleText_Btn_LeaningToggle_K2Node_ComponentBoundEvent_20_OnToggleChanged__DelegateSignature(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void ExecuteUbergraph_WBP_SettingsContent_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
