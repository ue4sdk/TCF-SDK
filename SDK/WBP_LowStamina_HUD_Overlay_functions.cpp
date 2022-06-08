// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_LowStamina_HUD_Overlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.OnStaminaChangedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentStamina                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LowStamina_HUD_Overlay_C::OnStaminaChangedCallback(float currentStamina)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.OnStaminaChangedCallback"));

	struct
	{
		float                          currentStamina;
	} params = {};

	params.currentStamina = currentStamina;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LowStamina_HUD_Overlay_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LowStamina_HUD_Overlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.UpdateVignette
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LowStamina_HUD_Overlay_C::UpdateVignette()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.UpdateVignette"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.ExecuteUbergraph_WBP_LowStamina_HUD_Overlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LowStamina_HUD_Overlay_C::ExecuteUbergraph_WBP_LowStamina_HUD_Overlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LowStamina_HUD_Overlay.WBP_LowStamina_HUD_Overlay_C.ExecuteUbergraph_WBP_LowStamina_HUD_Overlay"));

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
