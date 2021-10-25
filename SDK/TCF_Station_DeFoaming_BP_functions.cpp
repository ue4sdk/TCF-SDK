// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Station_DeFoaming_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AStation_DeFoaming_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AStation_DeFoaming_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStation_DeFoaming_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.ExecuteUbergraph_Station_DeFoaming_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStation_DeFoaming_BP_C::ExecuteUbergraph_Station_DeFoaming_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Station_DeFoaming_BP.Station_DeFoaming_BP_C.ExecuteUbergraph_Station_DeFoaming_BP"));

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
