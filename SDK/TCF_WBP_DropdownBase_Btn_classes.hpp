#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_DropdownBase_Btn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C
// 0x0028 (0x02F0 - 0x02C8)
class UWBP_DropdownBase_Btn_C : public UYWidget_DropDown
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TArray<struct FText>                               DefaultOptions;                                           // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FScriptMulticastDelegate                    OnSelectedOptionDelegate;                                 // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02E0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C");
		return ptr;
	}


	void GetSelectedOption(struct FString* SelectedOption);
	void GetSelectedIndex(int* SelectedIndex);
	void SetOptions(TArray<struct FString>* Options);
	void SetSelectedIndex(int Index);
	void SetSelectedOption(const struct FString& DesiredOption, bool* returnResult);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Base_OnSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnSelectionChanged();
	void ExecuteUbergraph_WBP_DropdownBase_Btn(int EntryPoint);
	void OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
