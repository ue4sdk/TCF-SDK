// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FlinchesComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlinchesComponent_BP.FlinchesComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlinchesComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlinchesComponent_BP.FlinchesComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlinchesComponent_BP.FlinchesComponent_BP_C.OnTakeDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UFlinchesComponent_BP_C::OnTakeDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlinchesComponent_BP.FlinchesComponent_BP_C.OnTakeDamage_Event_1");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function FlinchesComponent_BP.FlinchesComponent_BP_C.ExecuteUbergraph_FlinchesComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlinchesComponent_BP_C::ExecuteUbergraph_FlinchesComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlinchesComponent_BP.FlinchesComponent_BP_C.ExecuteUbergraph_FlinchesComponent_BP");

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
