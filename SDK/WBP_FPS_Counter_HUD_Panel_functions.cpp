// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FPS_Counter_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.BP_OnFpsDataUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FYFpsData               fpsData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FPS_Counter_HUD_Panel_C::BP_OnFpsDataUpdated(const struct FYFpsData& fpsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.BP_OnFpsDataUpdated"));

	struct
	{
		struct FYFpsData               fpsData;
	} params = {};

	params.fpsData = fpsData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FPS_Counter_HUD_Panel_C::ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_FPS_Counter_HUD_Panel.WBP_FPS_Counter_HUD_Panel_C.ExecuteUbergraph_WBP_FPS_Counter_HUD_Panel"));

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
