#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUD_WeaponReticle_DotRework_02_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C
// 0x0008 (0x0338 - 0x0330)
class UHUD_WeaponReticle_DotRework_02_WBP_C : public UHUD_FullscreenWidgetDefault_WBP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_HUD_WeaponReticle_DotRework_02_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
