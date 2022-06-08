// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_HitIndicator_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.BP_OnPlayHitTargetFeedback
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_HitIndicator_HUD_C::BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& damageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.BP_OnPlayHitTargetFeedback"));

	struct
	{
		struct FYDealtDamageData       damageData;
		float                          ReturnValue;
	} params = {};

	params.damageData = damageData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HitIndicator_HUD_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.OnTakeDamage_CallBack
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UWBP_HitIndicator_HUD_C::OnTakeDamage_CallBack(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.OnTakeDamage_CallBack"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.ExecuteUbergraph_WBP_HitIndicator_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HitIndicator_HUD_C::ExecuteUbergraph_WBP_HitIndicator_HUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HitIndicator_HUD.WBP_HitIndicator_HUD_C.ExecuteUbergraph_WBP_HitIndicator_HUD"));

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
