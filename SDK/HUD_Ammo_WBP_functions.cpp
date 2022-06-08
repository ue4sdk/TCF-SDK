// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUD_Ammo_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.CalculateCooldown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::CalculateCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.CalculateCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.Overheat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::Overheat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.Overheat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.CooldDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::CooldDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.CooldDown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.OnLoaded_85BC48B14C06DA2A222A65A469032ECC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_Ammo_WBP_C::OnLoaded_85BC48B14C06DA2A222A65A469032ECC(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.OnLoaded_85BC48B14C06DA2A222A65A469032ECC"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.UpdateHeat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::UpdateHeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.UpdateHeat"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.BulletAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::BulletAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.BulletAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.BP_OnAmmoChanged
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYAmmoUpdateInfo        ammoUpdateInfo                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UHUD_Ammo_WBP_C::BP_OnAmmoChanged(const struct FYAmmoUpdateInfo& ammoUpdateInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.BP_OnAmmoChanged"));

	struct
	{
		struct FYAmmoUpdateInfo        ammoUpdateInfo;
	} params = {};

	params.ammoUpdateInfo = ammoUpdateInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.InitializeAmmoIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::InitializeAmmoIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.InitializeAmmoIcon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.SetupAmmoVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Ammo_WBP_C::SetupAmmoVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.SetupAmmoVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.ExecuteUbergraph_HUD_Ammo_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_Ammo_WBP_C::ExecuteUbergraph_HUD_Ammo_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_Ammo_WBP.HUD_Ammo_WBP_C.ExecuteUbergraph_HUD_Ammo_WBP"));

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
