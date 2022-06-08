// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerAnimEvalComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerAnimEvalComponent_BP.YPlayerAnimEvalComponent_BP_C.GetAnimationDeathTags
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UYPlayerAnimEvalComponent_BP_C::GetAnimationDeathTags()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerAnimEvalComponent_BP.YPlayerAnimEvalComponent_BP_C.GetAnimationDeathTags"));

	struct
	{
		struct FGameplayTagContainer   ReturnValue;
	} params = {};


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
