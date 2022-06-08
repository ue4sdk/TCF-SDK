// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIAnimationFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAnimationFunctionLibrary_BP.AIAnimationFunctionLibrary_BP_C.GetDeathAnimationTypeFromBoneName
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYAIWeakSpotDeathAnimType      DeathAnimType                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIAnimationFunctionLibrary_BP_C::GetDeathAnimationTypeFromBoneName(class AActor* Character, const struct FName& BoneName, class UObject* __WorldContext, EYAIWeakSpotDeathAnimType* DeathAnimType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIAnimationFunctionLibrary_BP.AIAnimationFunctionLibrary_BP_C.GetDeathAnimationTypeFromBoneName"));

	struct
	{
		class AActor*                  Character;
		struct FName                   BoneName;
		class UObject*                 __WorldContext;
		EYAIWeakSpotDeathAnimType      DeathAnimType;
	} params = {};

	params.Character = Character;
	params.BoneName = BoneName;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DeathAnimType != nullptr)
		*DeathAnimType = params.DeathAnimType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
