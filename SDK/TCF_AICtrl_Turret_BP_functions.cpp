// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AICtrl_Turret_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.GetRe-FireTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          m_refireTime                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Turret_BP_C::GetRe_FireTime(float* m_refireTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.GetRe-FireTime"));

	struct
	{
		float                          m_refireTime;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (m_refireTime != nullptr)
		*m_refireTime = params.m_refireTime;
}


// Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.ReceivePossess
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Turret_BP_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.ReceivePossess"));

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.ExecuteUbergraph_AICtrl_Turret_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Turret_BP_C::ExecuteUbergraph_AICtrl_Turret_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AICtrl_Turret_BP.AICtrl_Turret_BP_C.ExecuteUbergraph_AICtrl_Turret_BP"));

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
