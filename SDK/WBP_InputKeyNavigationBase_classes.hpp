#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_InputKeyNavigationBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C
// 0x0020 (0x0290 - 0x0270)
class UWBP_InputKeyNavigationBase_C : public UUserWidget
{
public:
	TArray<class UWBP_InputKeyNavigation_Btn_C*>       InputKeys;                                                // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FMulticastScriptDelegate                    OnInputKeyClicked;                                        // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_InputKeyNavigationBase.WBP_InputKeyNavigationBase_C"));
		return ptr;
	}


	void OnButtonClicked(class UWBP_ButtonBase_Btn_C* Button);
	void AddInputKey(class UWBP_InputKeyNavigation_Btn_C* Button);
	void ClearInputKeys();
	void OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
