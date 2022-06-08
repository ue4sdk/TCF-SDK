// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EscMenu_SBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EscMenu_SBP.EscMenu_SBP_C.OnStateExitedEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEscMenu_SBP_C::OnStateExitedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EscMenu_SBP.EscMenu_SBP_C.OnStateExitedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EscMenu_SBP.EscMenu_SBP_C.BP_OnWidgetLoaded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEscMenu_SBP_C::BP_OnWidgetLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EscMenu_SBP.EscMenu_SBP_C.BP_OnWidgetLoaded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EscMenu_SBP.EscMenu_SBP_C.OnStateEnteredEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEscMenu_SBP_C::OnStateEnteredEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EscMenu_SBP.EscMenu_SBP_C.OnStateEnteredEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EscMenu_SBP.EscMenu_SBP_C.ExecuteUbergraph_EscMenu_SBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEscMenu_SBP_C::ExecuteUbergraph_EscMenu_SBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EscMenu_SBP.EscMenu_SBP_C.ExecuteUbergraph_EscMenu_SBP"));

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
