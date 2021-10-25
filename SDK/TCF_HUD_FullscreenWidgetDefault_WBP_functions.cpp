// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_HUD_FullscreenWidgetDefault_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UHUD_FullscreenWidgetDefault_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FYFullscreenScopeData   newData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUD_FullscreenWidgetDefault_WBP_C::BP_SetData(const struct FYFullscreenScopeData& newData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_SetData"));

	struct
	{
		struct FYFullscreenScopeData   newData;
	} params;

	params.newData = newData;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_FullscreenWidgetDefault_WBP_C::ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP"));

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
