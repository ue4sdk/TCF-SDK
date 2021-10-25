#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_TabElementBase_TabElem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C
// 0x0018 (0x02E0 - 0x02C8)
class UWBP_TabElementBase_TabElem_C : public UYWidget_TabElement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02D0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_TabElementBase_TabElem.WBP_TabElementBase_TabElem_C");
		return ptr;
	}


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
