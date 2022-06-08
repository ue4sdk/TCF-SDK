#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_TabElementBase_TabElem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C
// 0x0018 (0x02F0 - 0x02D8)
class UWBP_TabElementBase_TabElem_C : public UYWidget_TabElement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C"));
		return ptr;
	}


	void GetTabName(struct FText* Name);
	void Construct();
	void Unhovered();
	void Clicked(class UWBP_ButtonBase_Btn_C* Button);
	void Hovered();
	void OnSelected();
	void OnDeselected();
	void Base_Clicked(class UWBP_ButtonBase_Btn_C* Button);
	void Base_Unhovered();
	void Base_Hovered();
	void ExecuteUbergraph_WBP_TabElementBase_TabElem(int EntryPoint);
	void OnClicked__DelegateSignature(class UWBP_TabElementBase_TabElem_C* TabElement);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
