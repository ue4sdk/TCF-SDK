// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_PlaySpawnAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.GetAnimationToPlay
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           allowPhysicsRotationDuringAnimation (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           finishNodeSuccesfullyIfNoAnimIsProvided (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UBTTask_PlaySpawnAnimation_C::GetAnimationToPlay(bool* allowPhysicsRotationDuringAnimation, bool* finishNodeSuccesfullyIfNoAnimIsProvided)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.GetAnimationToPlay"));

	struct
	{
		bool                           allowPhysicsRotationDuringAnimation;
		bool                           finishNodeSuccesfullyIfNoAnimIsProvided;
		class UAnimMontage*            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (allowPhysicsRotationDuringAnimation != nullptr)
		*allowPhysicsRotationDuringAnimation = params.allowPhysicsRotationDuringAnimation;
	if (finishNodeSuccesfullyIfNoAnimIsProvided != nullptr)
		*finishNodeSuccesfullyIfNoAnimIsProvided = params.finishNodeSuccesfullyIfNoAnimIsProvided;

	return params.ReturnValue;
}


// Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.SetHasPlayedSpawnAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_PlaySpawnAnimation_C::SetHasPlayedSpawnAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.SetHasPlayedSpawnAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_PlaySpawnAnimation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ExecuteUbergraph_BTTask_PlaySpawnAnimation
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_PlaySpawnAnimation_C::ExecuteUbergraph_BTTask_PlaySpawnAnimation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_PlaySpawnAnimation.BTTask_PlaySpawnAnimation_C.ExecuteUbergraph_BTTask_PlaySpawnAnimation"));

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
