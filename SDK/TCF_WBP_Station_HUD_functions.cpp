// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_HUD.WBP_Station_HUD_C.Manually Toggle Active Contracts in HUD
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::Manually_Toggle_Active_Contracts_in_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.Manually Toggle Active Contracts in HUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.OnToggleHudVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Station_HUD_C::OnToggleHudVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.OnToggleHudVisibility");

	struct
	{
		bool                           Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.ToggleActiveContractsInHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::ToggleActiveContractsInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.ToggleActiveContractsInHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.OnActivateContract
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveContractUIData  activeContractUIData           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Station_HUD_C::OnActivateContract(const struct FYActiveContractUIData& activeContractUIData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.OnActivateContract");

	struct
	{
		struct FYActiveContractUIData  activeContractUIData;
	} params;

	params.activeContractUIData = activeContractUIData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.OnSocialPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::OnSocialPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.OnSocialPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_HUD_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.CustomEvent_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Station_HUD_C::CustomEvent_1(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.CustomEvent_1");

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_HUD.WBP_Station_HUD_C.ExecuteUbergraph_WBP_Station_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_HUD_C::ExecuteUbergraph_WBP_Station_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_HUD.WBP_Station_HUD_C.ExecuteUbergraph_WBP_Station_HUD");

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
