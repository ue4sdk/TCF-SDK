// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Hit_Overlay_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.GetShieldColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSlateColor             SlateColor                     (CPF_Parm, CPF_OutParm)

void UWBP_Hit_Overlay_HUD_C::GetShieldColor(struct FSlateColor* SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.GetShieldColor"));

	struct
	{
		struct FSlateColor             SlateColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.BP_OnPlayHitTargetFeedback
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_Hit_Overlay_HUD_C::BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& damageData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.BP_OnPlayHitTargetFeedback"));

	struct
	{
		struct FYDealtDamageData       damageData;
	} params;

	params.damageData = damageData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.TriggerHitAnnouncement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Hit_Overlay_HUD_C::TriggerHitAnnouncement(const struct FDataTableRowHandle& rowHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.TriggerHitAnnouncement"));

	struct
	{
		struct FDataTableRowHandle     rowHandle;
	} params;

	params.rowHandle = rowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.OnShieldChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentShield                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Hit_Overlay_HUD_C::OnShieldChanged(float CurrentShield)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.OnShieldChanged"));

	struct
	{
		float                          CurrentShield;
	} params;

	params.CurrentShield = CurrentShield;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.OnPawnStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   oldPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   newPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Hit_Overlay_HUD_C::OnPawnStateChanged_Event_1(class APawn* oldPawn, class APawn* newPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.OnPawnStateChanged_Event_1"));

	struct
	{
		class APawn*                   oldPawn;
		class APawn*                   newPawn;
	} params;

	params.oldPawn = oldPawn;
	params.newPawn = newPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.TryBindToPawnDelegates
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Hit_Overlay_HUD_C::TryBindToPawnDelegates()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.TryBindToPawnDelegates"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Hit_Overlay_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.ExecuteUbergraph_WBP_Hit_Overlay_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Hit_Overlay_HUD_C::ExecuteUbergraph_WBP_Hit_Overlay_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Hit_Overlay_HUD.WBP_Hit_Overlay_HUD_C.ExecuteUbergraph_WBP_Hit_Overlay_HUD"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
