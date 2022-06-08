#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_BlurBackerSimple_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_BlurBackerSimple_Panel.WBP_BlurBackerSimple_Panel_C
// 0x0008 (0x0278 - 0x0270)
class UWBP_BlurBackerSimple_Panel_C : public UUserWidget
{
public:
	class UImage*                                      Gfx_DarkenFillColor;                                      // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_BlurBackerSimple_Panel.WBP_BlurBackerSimple_Panel_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
