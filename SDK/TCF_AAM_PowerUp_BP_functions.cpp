// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_PowerUp_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.GetSpecialDebugActors
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TArray<class AActor*> AAAM_PowerUp_BP_C::GetSpecialDebugActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.GetSpecialDebugActors"));

	struct
	{
		TArray<class AActor*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.AddConfigurator
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAA_Powerup_Configurator_BP_C* Configurator                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_PowerUp_BP_C::AddConfigurator(class AAA_Powerup_Configurator_BP_C* Configurator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.AddConfigurator"));

	struct
	{
		class AAA_Powerup_Configurator_BP_C* Configurator;
	} params;

	params.Configurator = Configurator;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_PowerUp_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.ExecuteUbergraph_AAM_PowerUp_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_PowerUp_BP_C::ExecuteUbergraph_AAM_PowerUp_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_PowerUp_BP.AAM_PowerUp_BP_C.ExecuteUbergraph_AAM_PowerUp_BP"));

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
