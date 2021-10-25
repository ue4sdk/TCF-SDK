// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Mineral_Wall_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C.BndEvt__AA_Mineral_Wall_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Wall_BP_C::BndEvt__AA_Mineral_Wall_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C.BndEvt__AA_Mineral_Wall_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_0_OnCollapseTriggered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C.ExecuteUbergraph_AA_Mineral_Wall_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Wall_BP_C::ExecuteUbergraph_AA_Mineral_Wall_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Wall_BP.AA_Mineral_Wall_BP_C.ExecuteUbergraph_AA_Mineral_Wall_BP"));

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
