// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "VH_EvacShip_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UVH_EvacShip_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.AnimGraph"));

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


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.SelectDoorsToOpen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OpenBackDoor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OpenFrontDoor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OpenLeftDoor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           OpenRightDoor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UVH_EvacShip_ABP_C::SelectDoorsToOpen(bool OpenBackDoor, bool OpenFrontDoor, bool OpenLeftDoor, bool OpenRightDoor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.SelectDoorsToOpen"));

	struct
	{
		bool                           OpenBackDoor;
		bool                           OpenFrontDoor;
		bool                           OpenLeftDoor;
		bool                           OpenRightDoor;
	} params = {};

	params.OpenBackDoor = OpenBackDoor;
	params.OpenFrontDoor = OpenFrontDoor;
	params.OpenLeftDoor = OpenLeftDoor;
	params.OpenRightDoor = OpenRightDoor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B19BB31D4F148EDAF4C394B9E9A50BEF
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B19BB31D4F148EDAF4C394B9E9A50BEF()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B19BB31D4F148EDAF4C394B9E9A50BEF"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_56DE9C054692E0108CBBAF8C77532490
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_56DE9C054692E0108CBBAF8C77532490()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_56DE9C054692E0108CBBAF8C77532490"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_77ED3D6B40010AF310A8A7BF7B4BC33E
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_77ED3D6B40010AF310A8A7BF7B4BC33E()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_77ED3D6B40010AF310A8A7BF7B4BC33E"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B1952F8B44E83332657D69979E69B98B
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B1952F8B44E83332657D69979E69B98B()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_B1952F8B44E83332657D69979E69B98B"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_A69B65E5469777CE622D80BDB09FDD5F
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_A69B65E5469777CE622D80BDB09FDD5F()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_LayeredBoneBlend_A69B65E5469777CE622D80BDB09FDD5F"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_8C11B22E48456B34C65995B716630B0A
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_8C11B22E48456B34C65995B716630B0A()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_8C11B22E48456B34C65995B716630B0A"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_DCDDE588455F047C003276999035DEF0
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_DCDDE588455F047C003276999035DEF0()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_DCDDE588455F047C003276999035DEF0"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_FFE40C014BA1E6F9756A80803E96E0E3
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_FFE40C014BA1E6F9756A80803E96E0E3()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_FFE40C014BA1E6F9756A80803E96E0E3"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_E76D6FF24F8EB3154D8050987D1EB52D
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_E76D6FF24F8EB3154D8050987D1EB52D()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_E76D6FF24F8EB3154D8050987D1EB52D"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_69D96BEA482B5D2CE373B98EE8DDA967
// (FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_69D96BEA482B5D2CE373B98EE8DDA967()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VH_EvacShip_ABP_AnimGraphNode_TransitionResult_69D96BEA482B5D2CE373B98EE8DDA967"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVH_EvacShip_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintUpdateAnimation"));

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


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.AnimNotify_FinishedToLandedBlend
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::AnimNotify_FinishedToLandedBlend()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.AnimNotify_FinishedToLandedBlend"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.ExecuteUbergraph_VH_EvacShip_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVH_EvacShip_ABP_C::ExecuteUbergraph_VH_EvacShip_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.ExecuteUbergraph_VH_EvacShip_ABP"));

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


// Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.FinishedToLandedBlendDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVH_EvacShip_ABP_C::FinishedToLandedBlendDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function VH_EvacShip_ABP.VH_EvacShip_ABP_C.FinishedToLandedBlendDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
