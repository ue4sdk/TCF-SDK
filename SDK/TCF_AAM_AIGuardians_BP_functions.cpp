// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_AIGuardians_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_AIGuardians_BP.AAM_AIGuardians_BP_C.RespawnCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_AIGuardians_BP_C::RespawnCheck()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_AIGuardians_BP.AAM_AIGuardians_BP_C.RespawnCheck"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_AIGuardians_BP.AAM_AIGuardians_BP_C.ExecuteUbergraph_AAM_AIGuardians_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_AIGuardians_BP_C::ExecuteUbergraph_AAM_AIGuardians_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_AIGuardians_BP.AAM_AIGuardians_BP_C.ExecuteUbergraph_AAM_AIGuardians_BP"));

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
