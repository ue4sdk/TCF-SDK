// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Tutorial_SquadSpawner_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorial_SquadSpawner_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATutorial_SquadSpawner_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.SpawnSquad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATutorial_SquadSpawner_BP_C::SpawnSquad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.SpawnSquad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.ExecuteUbergraph_Tutorial_SquadSpawner_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATutorial_SquadSpawner_BP_C::ExecuteUbergraph_Tutorial_SquadSpawner_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial_SquadSpawner_BP.Tutorial_SquadSpawner_BP_C.ExecuteUbergraph_Tutorial_SquadSpawner_BP"));

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
