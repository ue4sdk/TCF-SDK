// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SettingsMenu_SBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingsMenu_SBP.SettingsMenu_SBP_C.OnStateExitedEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USettingsMenu_SBP_C::OnStateExitedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SettingsMenu_SBP.SettingsMenu_SBP_C.OnStateExitedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SettingsMenu_SBP.SettingsMenu_SBP_C.BP_OnWidgetLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USettingsMenu_SBP_C::BP_OnWidgetLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SettingsMenu_SBP.SettingsMenu_SBP_C.BP_OnWidgetLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SettingsMenu_SBP.SettingsMenu_SBP_C.OnStateEnteredEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USettingsMenu_SBP_C::OnStateEnteredEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SettingsMenu_SBP.SettingsMenu_SBP_C.OnStateEnteredEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SettingsMenu_SBP.SettingsMenu_SBP_C.ExecuteUbergraph_SettingsMenu_SBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USettingsMenu_SBP_C::ExecuteUbergraph_SettingsMenu_SBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SettingsMenu_SBP.SettingsMenu_SBP_C.ExecuteUbergraph_SettingsMenu_SBP"));

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
