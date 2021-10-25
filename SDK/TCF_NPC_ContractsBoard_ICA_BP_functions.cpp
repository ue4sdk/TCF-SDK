// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NPC_ContractsBoard_ICA_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ANPC_ContractsBoard_ICA_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ANPC_ContractsBoard_ICA_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_ContractsBoard_ICA_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ReceiveActorEndOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_ContractsBoard_ICA_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ReceiveActorEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ExecuteUbergraph_NPC_ContractsBoard_ICA_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANPC_ContractsBoard_ICA_BP_C::ExecuteUbergraph_NPC_ContractsBoard_ICA_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NPC_ContractsBoard_ICA_BP.NPC_ContractsBoard_ICA_BP_C.ExecuteUbergraph_NPC_ContractsBoard_ICA_BP"));

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
