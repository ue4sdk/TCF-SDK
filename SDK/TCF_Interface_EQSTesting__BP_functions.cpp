// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Interface_EQSTesting__BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_EQSTesting__BP.Interface_EQSTesting__BP_C.GetCombatTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  CombatTargetActor              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInterface_EQSTesting__BP_C::GetCombatTarget(class AActor** CombatTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_EQSTesting__BP.Interface_EQSTesting__BP_C.GetCombatTarget");

	struct
	{
		class AActor*                  CombatTargetActor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CombatTargetActor != nullptr)
		*CombatTargetActor = params.CombatTargetActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
