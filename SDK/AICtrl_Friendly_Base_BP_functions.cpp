// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AICtrl_Friendly_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICtrl_Friendly_Base_BP.AICtrl_Friendly_Base_BP_C.ReceivePossess
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Friendly_Base_BP_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Friendly_Base_BP.AICtrl_Friendly_Base_BP_C.ReceivePossess"));

	struct
	{
		class APawn*                   PossessedPawn;
	} params = {};

	params.PossessedPawn = PossessedPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AICtrl_Friendly_Base_BP.AICtrl_Friendly_Base_BP_C.ExecuteUbergraph_AICtrl_Friendly_Base_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Friendly_Base_BP_C::ExecuteUbergraph_AICtrl_Friendly_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Friendly_Base_BP.AICtrl_Friendly_Base_BP_C.ExecuteUbergraph_AICtrl_Friendly_Base_BP"));

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
