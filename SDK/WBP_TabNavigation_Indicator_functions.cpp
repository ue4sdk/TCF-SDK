// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_TabNavigation_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabNavigation_Indicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TabNavigation_Indicator_C::UpdateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.UpdateState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.SetIsActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TabNavigation_Indicator_C::SetIsActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.SetIsActive"));

	struct
	{
		bool                           IsActive;
	} params = {};

	params.IsActive = IsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.ExecuteUbergraph_WBP_TabNavigation_Indicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TabNavigation_Indicator_C::ExecuteUbergraph_WBP_TabNavigation_Indicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TabNavigation_Indicator.WBP_TabNavigation_Indicator_C.ExecuteUbergraph_WBP_TabNavigation_Indicator"));

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
