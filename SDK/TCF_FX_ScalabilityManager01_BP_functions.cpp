// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FX_ScalabilityManager01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFX_ScalabilityManager01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.OnSettingsAppliedMulticastDelegate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AFX_ScalabilityManager01_BP_C::OnSettingsAppliedMulticastDelegate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.OnSettingsAppliedMulticastDelegate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.ExecuteUbergraph_FX_ScalabilityManager01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFX_ScalabilityManager01_BP_C::ExecuteUbergraph_FX_ScalabilityManager01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FX_ScalabilityManager01_BP.FX_ScalabilityManager01_BP_C.ExecuteUbergraph_FX_ScalabilityManager01_BP"));

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
