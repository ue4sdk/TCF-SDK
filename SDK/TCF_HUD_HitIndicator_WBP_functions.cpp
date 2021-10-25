// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HUD_HitIndicator_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.BP_OnPlayHitTargetFeedback
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       damageData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UHUD_HitIndicator_WBP_C::BP_OnPlayHitTargetFeedback(const struct FYDealtDamageData& damageData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.BP_OnPlayHitTargetFeedback"));

	struct
	{
		struct FYDealtDamageData       damageData;
		float                          ReturnValue;
	} params;

	params.damageData = damageData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_HitIndicator_WBP_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.OnTakeDamage_CallBack
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UHUD_HitIndicator_WBP_C::OnTakeDamage_CallBack(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.OnTakeDamage_CallBack"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.ExecuteUbergraph_HUD_HitIndicator_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_HitIndicator_WBP_C::ExecuteUbergraph_HUD_HitIndicator_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_HitIndicator_WBP.HUD_HitIndicator_WBP_C.ExecuteUbergraph_HUD_HitIndicator_WBP"));

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
