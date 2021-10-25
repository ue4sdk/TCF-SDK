// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTTask_FinishMontage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_FinishMontage.BTTask_FinishMontage_C.GetAnimationToPlay
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           allowPhysicsRotationDuringAnimation (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           finishNodeSuccesfullyIfNoAnimIsProvided (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UBTTask_FinishMontage_C::GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FinishMontage.BTTask_FinishMontage_C.GetAnimationToPlay");

	struct
	{
		bool                           allowPhysicsRotationDuringAnimation;
		bool                           finishNodeSuccesfullyIfNoAnimIsProvided;
		class UAnimMontage*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (allowPhysicsRotationDuringAnimation != nullptr)
		*allowPhysicsRotationDuringAnimation = params.allowPhysicsRotationDuringAnimation;
	if (finishNodeSuccesfullyIfNoAnimIsProvided != nullptr)
		*finishNodeSuccesfullyIfNoAnimIsProvided = params.finishNodeSuccesfullyIfNoAnimIsProvided;

	return params.ReturnValue;
}


// Function BTTask_FinishMontage.BTTask_FinishMontage_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_FinishMontage_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FinishMontage.BTTask_FinishMontage_C.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_FinishMontage.BTTask_FinishMontage_C.BP_OnNodeEnds
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           succeeded                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBTTask_FinishMontage_C::BP_OnNodeEnds(bool succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FinishMontage.BTTask_FinishMontage_C.BP_OnNodeEnds");

	struct
	{
		bool                           succeeded;
	} params;

	params.succeeded = succeeded;

	UObject::ProcessEvent(fn, &params);
}


// Function BTTask_FinishMontage.BTTask_FinishMontage_C.ExecuteUbergraph_BTTask_FinishMontage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_FinishMontage_C::ExecuteUbergraph_BTTask_FinishMontage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FinishMontage.BTTask_FinishMontage_C.ExecuteUbergraph_BTTask_FinishMontage");

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
