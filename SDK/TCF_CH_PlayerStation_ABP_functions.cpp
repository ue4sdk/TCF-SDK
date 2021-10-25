// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_CH_PlayerStation_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.GetDeathAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Tags                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UCH_PlayerStation_ABP_C::GetDeathAnimationToPlay(const struct FYDealtDamageData& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.GetDeathAnimationToPlay");

	struct
	{
		struct FYDealtDamageData       Tags;
		class UAnimMontage*            ReturnValue;
	} params;

	params.Tags = Tags;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.3rdP
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               _3rdP                          (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::_3rdP(struct FPoseLink* _3rdP)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.3rdP");

	struct
	{
		struct FPoseLink               _3rdP;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (_3rdP != nullptr)
		*_3rdP = params._3rdP;
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetIsTurning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::SetIsTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetIsTurning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ClampInterpDelta
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          clampedValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::ClampInterpDelta(float Value, float* clampedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ClampInterpDelta");

	struct
	{
		float                          Value;
		float                          clampedValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (clampedValue != nullptr)
		*clampedValue = params.clampedValue;
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetAimAndDirectionVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::SetAimAndDirectionVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetAimAndDirectionVariables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.CalculateInterpolationValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::CalculateInterpolationValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.CalculateInterpolationValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetLowerbodyBlend
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::SetLowerbodyBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetLowerbodyBlend");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.HandleAimOffsetRotationReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::HandleAimOffsetRotationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.HandleAimOffsetRotationReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.Set Speed And Movement Variables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::Set_Speed_And_Movement_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.Set Speed And Movement Variables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_FB5FF52B4CBB5BFE2E8FEB9BB007AC06
// (FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_FB5FF52B4CBB5BFE2E8FEB9BB007AC06()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_FB5FF52B4CBB5BFE2E8FEB9BB007AC06");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_01B14A5F4CC6BE4B19E1F483D0C01772
// (FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_01B14A5F4CC6BE4B19E1F483D0C01772()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_01B14A5F4CC6BE4B19E1F483D0C01772");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_20E202D0442920CA857EFE824DEAE5E5
// (FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_20E202D0442920CA857EFE824DEAE5E5()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_20E202D0442920CA857EFE824DEAE5E5");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_79CBEBF84887BD34EB7B97AF46533DDC
// (FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_79CBEBF84887BD34EB7B97AF46533DDC()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_79CBEBF84887BD34EB7B97AF46533DDC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_35BA399A4E700EF7BEC0E9BB71C1D3D4
// (FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_35BA399A4E700EF7BEC0E9BB71C1D3D4()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_PlayerStation_ABP_AnimGraphNode_TransitionResult_35BA399A4E700EF7BEC0E9BB71C1D3D4");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.UpdateRecallmesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RecallState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::UpdateRecallmesh(bool RecallState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.UpdateRecallmesh");

	struct
	{
		bool                           RecallState;
	} params;

	params.RecallState = RecallState;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_TurnIK_Off
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_TurnIK_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_TurnIK_Off");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_TurnIK_On
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_TurnIK_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_TurnIK_On");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SendTurnDeltaOffsetToWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DYaw                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DPitch                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SendTurnDeltaOffsetToWeapon");

	struct
	{
		float                          DYaw;
		float                          DPitch;
	} params;

	params.DYaw = DYaw;
	params.DPitch = DPitch;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.IsFirstPersonWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::IsFirstPersonWeapon(bool IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.IsFirstPersonWeapon");

	struct
	{
		bool                           IsFirstPerson;
	} params;

	params.IsFirstPerson = IsFirstPerson;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DoPactWave
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::DoPactWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DoPactWave");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayPactAccept
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::OnPlayPactAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayPactAccept");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayPactDeny
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::OnPlayPactDeny()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayPactDeny");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayerStateAssigned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::OnPlayerStateAssigned(class AYPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnPlayerStateAssigned");

	struct
	{
		class AYPlayerState*           PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.WalkOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::WalkOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.WalkOut");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_ForceFullbody
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_ForceFullbody()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_ForceFullbody");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_DisableForceFullbodz
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_DisableForceFullbodz()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_DisableForceFullbodz");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EmoteStop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           interupted                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::EmoteStop(bool interupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.EmoteStop");

	struct
	{
		bool                           interupted;
	} params;

	params.interupted = interupted;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.LightImpact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::LightImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.LightImpact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnJumped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            jumpCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::OnJumped(int jumpCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnJumped");

	struct
	{
		int                            jumpCount;
	} params;

	params.jumpCount = jumpCount;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.jumpLand
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::jumpLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.jumpLand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BindOnCommwheelUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::BindOnCommwheelUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BindOnCommwheelUsed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnCommWheelUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCommWheelVOComponent*  commWheelComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     commWheelEntry                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::OnCommWheelUse(class UYCommWheelVOComponent* commWheelComponent, const struct FDataTableRowHandle& commWheelEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnCommWheelUse");

	struct
	{
		class UYCommWheelVOComponent*  commWheelComponent;
		struct FDataTableRowHandle     commWheelEntry;
	} params;

	params.commWheelComponent = commWheelComponent;
	params.commWheelEntry = commWheelEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetUnarmedMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Unarmed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::SetUnarmedMode(bool Unarmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.SetUnarmedMode");

	struct
	{
		bool                           Unarmed;
	} params;

	params.Unarmed = Unarmed;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DoPointForward
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::DoPointForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DoPointForward");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnBannerStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::OnBannerStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnBannerStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnGlobalVanityEntryUpdatedDelegate_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<EYVanityType>           Types                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCH_PlayerStation_ABP_C::OnGlobalVanityEntryUpdatedDelegate_Event_1(TArray<EYVanityType> Types)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnGlobalVanityEntryUpdatedDelegate_Event_1");

	struct
	{
		TArray<EYVanityType>           Types;
	} params;

	params.Types = Types;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DisableWeaponSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::DisableWeaponSway()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.DisableWeaponSway");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BindOnEmoted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::BindOnEmoted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BindOnEmoted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnEmoted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYGlobalVanityItem      usedEmote                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::OnEmoted(const struct FYGlobalVanityItem& usedEmote, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.OnEmoted");

	struct
	{
		struct FYGlobalVanityItem      usedEmote;
		class AActor*                  Instigator;
	} params;

	params.usedEmote = usedEmote;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BP_SetIsFirstPerson
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           firstPersonState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerStation_ABP_C::BP_SetIsFirstPerson(bool firstPersonState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BP_SetIsFirstPerson");

	struct
	{
		bool                           firstPersonState;
	} params;

	params.firstPersonState = firstPersonState;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_Jumpreset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_Jumpreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_Jumpreset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_EnteredJumpStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::AnimNotify_EnteredJumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.AnimNotify_EnteredJumpStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ResetCounterRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_PlayerStation_ABP_C::ResetCounterRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ResetCounterRotation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BP_PlayWeaponState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYWeaponPlayState              State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::BP_PlayWeaponState(EYWeaponPlayState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.BP_PlayWeaponState");

	struct
	{
		EYWeaponPlayState              State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ExecuteUbergraph_CH_PlayerStation_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerStation_ABP_C::ExecuteUbergraph_CH_PlayerStation_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CH_PlayerStation_ABP.CH_PlayerStation_ABP_C.ExecuteUbergraph_CH_PlayerStation_ABP");

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
