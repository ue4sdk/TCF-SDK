// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_PlayerQuartersLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.OnPLayerQuarterLevelUpdated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYControllerPlayerQuarterComponent* controllerPlayerQuarterComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerQuartersLevel_C::OnPLayerQuarterLevelUpdated(class UYControllerPlayerQuarterComponent* controllerPlayerQuarterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.OnPLayerQuarterLevelUpdated"));

	struct
	{
		class UYControllerPlayerQuarterComponent* controllerPlayerQuarterComponent;
	} params = {};

	params.controllerPlayerQuarterComponent = controllerPlayerQuarterComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.SetLevelText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PlayerQuartersLevel_C::SetLevelText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.SetLevelText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerQuartersLevel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.ExecuteUbergraph_WBP_PlayerQuartersLevel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerQuartersLevel_C::ExecuteUbergraph_WBP_PlayerQuartersLevel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerQuartersLevel.WBP_PlayerQuartersLevel_C.ExecuteUbergraph_WBP_PlayerQuartersLevel"));

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
