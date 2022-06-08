// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StationLocationActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StationLocationActor_BP.StationLocationActor_BP_C.VO_NPC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AStationLocationActor_BP_C::VO_NPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationLocationActor_BP.StationLocationActor_BP_C.VO_NPC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationLocationActor_BP.StationLocationActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStationLocationActor_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationLocationActor_BP.StationLocationActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StationLocationActor_BP.StationLocationActor_BP_C.ExecuteUbergraph_StationLocationActor_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStationLocationActor_BP_C::ExecuteUbergraph_StationLocationActor_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StationLocationActor_BP.StationLocationActor_BP_C.ExecuteUbergraph_StationLocationActor_BP"));

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
