// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_Player_LABP_TPP_Loco_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.GetDeathAnimationToPlay
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Tags                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAnimMontage* UCH_Player_LABP_TPP_Loco_v2_C::GetDeathAnimationToPlay(const struct FYDealtDamageData& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.GetDeathAnimationToPlay"));

	struct
	{
		struct FYDealtDamageData       Tags;
		class UAnimMontage*            ReturnValue;
	} params = {};

	params.Tags = Tags;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_UpperBody
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               UpperBody                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_UpperBody                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::TPP_UpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* TPP_UpperBody)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_UpperBody"));

	struct
	{
		struct FPoseLink               UpperBody;
		struct FPoseLink               TPP_UpperBody;
	} params = {};

	params.UpperBody = UpperBody;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_UpperBody != nullptr)
		*TPP_UpperBody = params.TPP_UpperBody;
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_Additive
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               Additive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FPoseLink               TPP_Additive                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::TPP_Additive(const struct FPoseLink& Additive, struct FPoseLink* TPP_Additive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_Additive"));

	struct
	{
		struct FPoseLink               Additive;
		struct FPoseLink               TPP_Additive;
	} params = {};

	params.Additive = Additive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Additive != nullptr)
		*TPP_Additive = params.TPP_Additive;
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_Loco
// (FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               TPP_Loco                       (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::TPP_Loco(struct FPoseLink* TPP_Loco)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.TPP_Loco"));

	struct
	{
		struct FPoseLink               TPP_Loco;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TPP_Loco != nullptr)
		*TPP_Loco = params.TPP_Loco;
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.Fix Backward Direction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::Fix_Backward_Direction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.Fix Backward Direction"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.StriderPluginUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::StriderPluginUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.StriderPluginUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.StriderPluginSetup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::StriderPluginSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.StriderPluginSetup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.CalculateAnimAlphas
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::CalculateAnimAlphas()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.CalculateAnimAlphas"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_4F19F264473A83612C2B9693CAC15648
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_4F19F264473A83612C2B9693CAC15648()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_4F19F264473A83612C2B9693CAC15648"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_ABD7B2E54970289D1F0EA0B8A50A98B0
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_ABD7B2E54970289D1F0EA0B8A50A98B0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_ABD7B2E54970289D1F0EA0B8A50A98B0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_F456FC68416516296343F7A9FFFD921F
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_F456FC68416516296343F7A9FFFD921F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_F456FC68416516296343F7A9FFFD921F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BE0A5CE74C3526DAB44452AE70ADDCF6
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BE0A5CE74C3526DAB44452AE70ADDCF6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BE0A5CE74C3526DAB44452AE70ADDCF6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_Loco_v2_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params = {};

	params.DeltaTimeX = DeltaTimeX;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_709BEAE24FC11F21AF6587A6626C1F80
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_709BEAE24FC11F21AF6587A6626C1F80()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_709BEAE24FC11F21AF6587A6626C1F80"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.JumpLand
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::JumpLand()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.JumpLand"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BP_SetIsFirstPerson
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           firstPersonState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::BP_SetIsFirstPerson(bool firstPersonState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BP_SetIsFirstPerson"));

	struct
	{
		bool                           firstPersonState;
	} params = {};

	params.firstPersonState = firstPersonState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BP_PlayWeaponState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYWeaponPlayState              State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_Loco_v2_C::BP_PlayWeaponState(EYWeaponPlayState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.BP_PlayWeaponState"));

	struct
	{
		EYWeaponPlayState              State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BD7EDAAB48686E84B9CF2DA7E3A61B7D
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BD7EDAAB48686E84B9CF2DA7E3A61B7D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_BD7EDAAB48686E84B9CF2DA7E3A61B7D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_D325670C4C015EE092A6DA8A95B292BC
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_D325670C4C015EE092A6DA8A95B292BC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_D325670C4C015EE092A6DA8A95B292BC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.SetUnarmedMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Unarmed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::SetUnarmedMode(bool Unarmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.SetUnarmedMode"));

	struct
	{
		bool                           Unarmed;
	} params = {};

	params.Unarmed = Unarmed;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.DisableWeaponSway
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::DisableWeaponSway()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.DisableWeaponSway"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B14D13034A0D0CD87B59968A21E5CB2A
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B14D13034A0D0CD87B59968A21E5CB2A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B14D13034A0D0CD87B59968A21E5CB2A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B47CD1A541E2CFAE64B0B1923298DCA6
// (FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B47CD1A541E2CFAE64B0B1923298DCA6()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2_AnimGraphNode_TransitionResult_B47CD1A541E2CFAE64B0B1923298DCA6"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.UpdateRecallmesh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RecallState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::UpdateRecallmesh(bool RecallState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.UpdateRecallmesh"));

	struct
	{
		bool                           RecallState;
	} params = {};

	params.RecallState = RecallState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.SendTurnDeltaOffsetToWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DYaw                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DPitch                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_Loco_v2_C::SendTurnDeltaOffsetToWeapon(float DYaw, float DPitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.SendTurnDeltaOffsetToWeapon"));

	struct
	{
		float                          DYaw;
		float                          DPitch;
	} params = {};

	params.DYaw = DYaw;
	params.DPitch = DPitch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.IsFirstPersonWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_Player_LABP_TPP_Loco_v2_C::IsFirstPersonWeapon(bool IsFirstPerson)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.IsFirstPersonWeapon"));

	struct
	{
		bool                           IsFirstPerson;
	} params = {};

	params.IsFirstPerson = IsFirstPerson;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.WalkOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::WalkOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.WalkOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.LightImpact
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCH_Player_LABP_TPP_Loco_v2_C::LightImpact()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.LightImpact"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_Player_LABP_TPP_Loco_v2_C::ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_Player_LABP_TPP_Loco_v2.CH_Player_LABP_TPP_Loco_v2_C.ExecuteUbergraph_CH_Player_LABP_TPP_Loco_v2"));

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
