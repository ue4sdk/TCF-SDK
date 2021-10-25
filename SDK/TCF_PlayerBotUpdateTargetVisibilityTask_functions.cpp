// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerBotUpdateTargetVisibilityTask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ownerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotUpdateTargetVisibilityTask_C::ReceiveExecute(class AActor* ownerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ReceiveExecute");

	struct
	{
		class AActor*                  ownerActor;
	} params;

	params.ownerActor = ownerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ExecuteUbergraph_PlayerBotUpdateTargetVisibilityTask
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBotUpdateTargetVisibilityTask_C::ExecuteUbergraph_PlayerBotUpdateTargetVisibilityTask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerBotUpdateTargetVisibilityTask.PlayerBotUpdateTargetVisibilityTask_C.ExecuteUbergraph_PlayerBotUpdateTargetVisibilityTask");

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
