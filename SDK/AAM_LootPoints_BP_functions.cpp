// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_LootPoints_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_LootPoints_BP.AAM_LootPoints_BP_C.BP_SpawnActivityActorFromToken
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYSpawnActivityActorTokenData requestData                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AActor* AAAM_LootPoints_BP_C::BP_SpawnActivityActorFromToken(const struct FYSpawnActivityActorTokenData& requestData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_LootPoints_BP.AAM_LootPoints_BP_C.BP_SpawnActivityActorFromToken"));

	struct
	{
		struct FYSpawnActivityActorTokenData requestData;
		class AActor*                  ReturnValue;
	} params = {};

	params.requestData = requestData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
