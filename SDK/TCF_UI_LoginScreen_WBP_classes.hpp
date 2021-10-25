#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_LoginScreen_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_LoginScreen_WBP.UI_LoginScreen_WBP_C
// 0x0008 (0x0328 - 0x0320)
class UUI_LoginScreen_WBP_C : public UYWidget_Login
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_LoginScreen_WBP.UI_LoginScreen_WBP_C");
		return ptr;
	}


	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
