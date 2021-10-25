// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_StormMineral_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.CrumbleAll
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_StormMineral_BP_C::CrumbleAll()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.CrumbleAll"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAAM_StormMineral_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AAAM_StormMineral_BP_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.OnReplicatedMatchPhaseDataUpdated_Event_1"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params;

	params.newMatchPhaseData = newMatchPhaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.ExecuteUbergraph_AAM_StormMineral_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_StormMineral_BP_C::ExecuteUbergraph_AAM_StormMineral_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_StormMineral_BP.AAM_StormMineral_BP_C.ExecuteUbergraph_AAM_StormMineral_BP"));

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
