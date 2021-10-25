// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIBehaviorFunctionLibraryBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIBehaviorFunctionLibraryBP.AIBehaviorFunctionLibraryBP_C.EvalRootMotionMontage
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           CharacterAI                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAIBehaviorFunctionLibraryBP_C::EvalRootMotionMontage(class AYAICharacter* CharacterAI, class UAnimMontage* Montage, class UObject* __WorldContext, bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIBehaviorFunctionLibraryBP.AIBehaviorFunctionLibraryBP_C.EvalRootMotionMontage");

	struct
	{
		class AYAICharacter*           CharacterAI;
		class UAnimMontage*            Montage;
		class UObject*                 __WorldContext;
		bool                           SUCCESS;
	} params;

	params.CharacterAI = CharacterAI;
	params.Montage = Montage;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
