// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_LowHealth_HUD_Overlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.GetPlayerCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class APawn* UWBP_LowHealth_HUD_Overlay_C::GetPlayerCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.GetPlayerCharacter"));

	struct
	{
		class APawn*                   ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LowHealth_HUD_Overlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.CurrentHealthChangedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LowHealth_HUD_Overlay_C::CurrentHealthChangedDelegate_Event_1(float CurrentHealth, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.CurrentHealthChangedDelegate_Event_1"));

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params = {};

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.ExecuteUbergraph_WBP_LowHealth_HUD_Overlay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LowHealth_HUD_Overlay_C::ExecuteUbergraph_WBP_LowHealth_HUD_Overlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowHealth_HUD_Overlay.WBP_LowHealth_HUD_Overlay_C.ExecuteUbergraph_WBP_LowHealth_HUD_Overlay"));

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
