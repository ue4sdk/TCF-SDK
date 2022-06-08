// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTService_Bot_AquireRandomStationTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Bot_AquireRandomStationTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ReceiveTick"));

	struct
	{
		class AActor*                  OwnerActor;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ExecuteUbergraph_BTService_Bot_AquireRandomStationTarget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_Bot_AquireRandomStationTarget_C::ExecuteUbergraph_BTService_Bot_AquireRandomStationTarget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTService_Bot_AquireRandomStationTarget.BTService_Bot_AquireRandomStationTarget_C.ExecuteUbergraph_BTService_Bot_AquireRandomStationTarget"));

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
