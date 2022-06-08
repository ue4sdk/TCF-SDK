// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Mineral_Ground_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C.BndEvt__AA_Mineral_Ground_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Ground_BP_C::BndEvt__AA_Mineral_Ground_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C.BndEvt__AA_Mineral_Ground_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C.ExecuteUbergraph_AA_Mineral_Ground_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Ground_BP_C::ExecuteUbergraph_AA_Mineral_Ground_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Ground_BP.AA_Mineral_Ground_BP_C.ExecuteUbergraph_AA_Mineral_Ground_BP"));

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
