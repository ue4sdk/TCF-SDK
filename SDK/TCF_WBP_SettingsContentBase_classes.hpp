#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SettingsContentBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsContentBase.WBP_SettingsContentBase_C
// 0x0008 (0x0340 - 0x0338)
class UWBP_SettingsContentBase_C : public UYWidgetView
{
public:
	class UWBP_Settings_Provider_C*                    SettingsProvider;                                         // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsContentBase.WBP_SettingsContentBase_C");
		return ptr;
	}


	void OnDropdownSelectionChanged(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
	void OnSelectorValueChanged(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value);
	void RegisterWidgets();
	void Provider_OnDataChanged(struct FName* DataName, struct FName* dataType);
	void Initialize();
	void OnToggleChanged(class UWBP_ToggleText_Btn_C* Toggle, bool toggled);
	void UpdateRegisteredDropdowns();
	void UpdateRegisteredSelectors();
	void UpdateRegisteredToggles();
	void UpdateRegisteredWidgets();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
