// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_StationQueueElevatorLight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.Pulse__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_StationQueueElevatorLight_C::Pulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.Pulse__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.Pulse__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_StationQueueElevatorLight_C::Pulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.Pulse__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_StationQueueElevatorLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.ExecuteUbergraph_BP_StationQueueElevatorLight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_StationQueueElevatorLight_C::ExecuteUbergraph_BP_StationQueueElevatorLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StationQueueElevatorLight.BP_StationQueueElevatorLight_C.ExecuteUbergraph_BP_StationQueueElevatorLight"));

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
