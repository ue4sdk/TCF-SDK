// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AICtrl_Strider_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.OnUsingBlackBoard
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UBlackboardData*         BlackboardAsset                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Strider_BP_C::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.OnUsingBlackBoard");

	struct
	{
		class UBlackboardComponent*    BlackboardComp;
		class UBlackboardData*         BlackboardAsset;
	} params;

	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ClearResting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAICtrl_Strider_BP_C::ClearResting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ClearResting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ExecuteUbergraph_AICtrl_Strider_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAICtrl_Strider_BP_C::ExecuteUbergraph_AICtrl_Strider_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AICtrl_Strider_BP.AICtrl_Strider_BP_C.ExecuteUbergraph_AICtrl_Strider_BP");

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
