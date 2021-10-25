// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AMB_RandomTrigger_StationOSI_NeedsReplacement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_RandomTrigger_StationOSI_NeedsReplacement.AMB_RandomTrigger_StationOSI_NeedsReplacement_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAMB_RandomTrigger_StationOSI_NeedsReplacement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger_StationOSI_NeedsReplacement.AMB_RandomTrigger_StationOSI_NeedsReplacement_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AMB_RandomTrigger_StationOSI_NeedsReplacement.AMB_RandomTrigger_StationOSI_NeedsReplacement_C.ExecuteUbergraph_AMB_RandomTrigger_StationOSI_NeedsReplacement
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAMB_RandomTrigger_StationOSI_NeedsReplacement_C::ExecuteUbergraph_AMB_RandomTrigger_StationOSI_NeedsReplacement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AMB_RandomTrigger_StationOSI_NeedsReplacement.AMB_RandomTrigger_StationOSI_NeedsReplacement_C.ExecuteUbergraph_AMB_RandomTrigger_StationOSI_NeedsReplacement"));

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
