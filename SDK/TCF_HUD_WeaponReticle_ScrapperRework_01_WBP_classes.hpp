#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HUD_WeaponReticle_ScrapperRework_01_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_WeaponReticle_ScrapperRework_01_WBP.HUD_WeaponReticle_ScrapperRework_01_WBP_C
// 0x0000 (0x02D0 - 0x02D0)
class UHUD_WeaponReticle_ScrapperRework_01_WBP_C : public UHUD_FullscreenWidgetDefault_WBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUD_WeaponReticle_ScrapperRework_01_WBP.HUD_WeaponReticle_ScrapperRework_01_WBP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
