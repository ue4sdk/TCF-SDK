// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerAnimEvalComponent_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerAnimEvalComponent_BP.YPlayerAnimEvalComponent_BP_C.GetAnimationDeathTags");

	struct
	{
		struct FGameplayTagContainer   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
