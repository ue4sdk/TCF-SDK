// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AITurn_AnimationFunctions_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C.FindBestAngle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAITurnAnimationsData  TurnAnimations                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          DesiredAngle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAITurnAnimation       TurnAnimation                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAITurn_AnimationFunctions_BP_C::FindBestAngle(float DesiredAngle, class UObject* __WorldContext, struct FYAITurnAnimationsData* TurnAnimations, struct FYAITurnAnimation* TurnAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C.FindBestAngle");

	struct
	{
		struct FYAITurnAnimationsData  TurnAnimations;
		float                          DesiredAngle;
		class UObject*                 __WorldContext;
		struct FYAITurnAnimation       TurnAnimation;
	} params;

	params.DesiredAngle = DesiredAngle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TurnAnimations != nullptr)
		*TurnAnimations = params.TurnAnimations;
	if (TurnAnimation != nullptr)
		*TurnAnimation = params.TurnAnimation;
}


// Function AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C.DetermineTurnAnimation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     rowHandle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DesiredAngle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIMontagePlayInfo     MontagePlayInfo                (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UAITurn_AnimationFunctions_BP_C::DetermineTurnAnimation(const struct FDataTableRowHandle& rowHandle, class APawn* Pawn, float DesiredAngle, class UObject* __WorldContext, struct FYAIMontagePlayInfo* MontagePlayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C.DetermineTurnAnimation");

	struct
	{
		struct FDataTableRowHandle     rowHandle;
		class APawn*                   Pawn;
		float                          DesiredAngle;
		class UObject*                 __WorldContext;
		struct FYAIMontagePlayInfo     MontagePlayInfo;
	} params;

	params.rowHandle = rowHandle;
	params.Pawn = Pawn;
	params.DesiredAngle = DesiredAngle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MontagePlayInfo != nullptr)
		*MontagePlayInfo = params.MontagePlayInfo;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
