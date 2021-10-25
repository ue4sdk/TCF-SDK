// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerBotBuyGearsetTask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerBotBuyGearsetTask.PlayerBotBuyGearsetTask_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ownerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotBuyGearsetTask_C::ReceiveExecute(class AActor* ownerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotBuyGearsetTask.PlayerBotBuyGearsetTask_C.ReceiveExecute");

	struct
	{
		class AActor*                  ownerActor;
	} params;

	params.ownerActor = ownerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerBotBuyGearsetTask.PlayerBotBuyGearsetTask_C.ExecuteUbergraph_PlayerBotBuyGearsetTask
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotBuyGearsetTask_C::ExecuteUbergraph_PlayerBotBuyGearsetTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotBuyGearsetTask.PlayerBotBuyGearsetTask_C.ExecuteUbergraph_PlayerBotBuyGearsetTask");

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
