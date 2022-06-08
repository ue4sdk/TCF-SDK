#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Interaction_HUD_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Interaction_HUD_Panel.WBP_Interaction_HUD_Panel_C
// 0x0000 (0x02E8 - 0x02E8)
class UWBP_Interaction_HUD_Panel_C : public UYWidget_Interaction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Interaction_HUD_Panel.WBP_Interaction_HUD_Panel_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
