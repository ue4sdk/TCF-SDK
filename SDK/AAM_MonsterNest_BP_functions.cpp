// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_MonsterNest_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_MonsterNest_BP.AAM_MonsterNest_BP_C.Initiate
// (FUNC_BlueprintEvent)

void AAAM_MonsterNest_BP_C::Initiate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_MonsterNest_BP.AAM_MonsterNest_BP_C.Initiate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_MonsterNest_BP.AAM_MonsterNest_BP_C.ExecuteUbergraph_AAM_MonsterNest_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_MonsterNest_BP_C::ExecuteUbergraph_AAM_MonsterNest_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_MonsterNest_BP.AAM_MonsterNest_BP_C.ExecuteUbergraph_AAM_MonsterNest_BP"));

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
