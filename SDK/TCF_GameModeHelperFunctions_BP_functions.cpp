// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_GameModeHelperFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeHelperFunctions_BP.GameModeHelperFunctions_BP_C.CreateIDFromActorLocation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ID                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGameModeHelperFunctions_BP_C::CreateIDFromActorLocation(const struct FVector& Location, class UObject* __WorldContext, struct FString* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeHelperFunctions_BP.GameModeHelperFunctions_BP_C.CreateIDFromActorLocation");

	struct
	{
		struct FVector                 Location;
		class UObject*                 __WorldContext;
		struct FString                 ID;
	} params;

	params.Location = Location;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ID != nullptr)
		*ID = params.ID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
