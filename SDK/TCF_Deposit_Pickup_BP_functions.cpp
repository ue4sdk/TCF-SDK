// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Deposit_Pickup_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ADeposit_Pickup_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ExecuteUbergraph_Deposit_Pickup_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADeposit_Pickup_BP_C::ExecuteUbergraph_Deposit_Pickup_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deposit_Pickup_BP.Deposit_Pickup_BP_C.ExecuteUbergraph_Deposit_Pickup_BP");

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
