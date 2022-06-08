// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUD_WeaponReticle_DotRework_02_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_WeaponReticle_DotRework_02_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C.ExecuteUbergraph_HUD_WeaponReticle_DotRework_02_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_WeaponReticle_DotRework_02_WBP_C::ExecuteUbergraph_HUD_WeaponReticle_DotRework_02_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_WeaponReticle_DotRework_02_WBP.HUD_WeaponReticle_DotRework_02_WBP_C.ExecuteUbergraph_HUD_WeaponReticle_DotRework_02_WBP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
