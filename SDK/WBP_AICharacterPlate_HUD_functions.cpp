// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_AICharacterPlate_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_AICharacterPlate_HUD_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AICharacterPlate_HUD_C::BP_InitializeFor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_InitializeFor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_UpdatePerks
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AICharacterPlate_HUD_C::BP_UpdatePerks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.BP_UpdatePerks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.OnCurrentHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AICharacterPlate_HUD_C::OnCurrentHealthChanged(float CurrentHealth, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.OnCurrentHealthChanged"));

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


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.RefreshGameplayTags
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AICharacterPlate_HUD_C::RefreshGameplayTags()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.RefreshGameplayTags"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AICharacterPlate_HUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.ExecuteUbergraph_WBP_AICharacterPlate_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AICharacterPlate_HUD_C::ExecuteUbergraph_WBP_AICharacterPlate_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AICharacterPlate_HUD.WBP_AICharacterPlate_HUD_C.ExecuteUbergraph_WBP_AICharacterPlate_HUD"));

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
