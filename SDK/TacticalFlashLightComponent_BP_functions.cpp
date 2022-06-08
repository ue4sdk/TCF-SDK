// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TacticalFlashLightComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.UpdateRenderState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::UpdateRenderState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.UpdateRenderState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.HitCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StepAmount                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          StartOffset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EndMultiplier                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Hit                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTacticalFlashLightComponent_BP_C::HitCheck(int Index, float Angle, float StepAmount, float StartOffset, float EndMultiplier, bool* Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.HitCheck"));

	struct
	{
		int                            Index;
		float                          Angle;
		float                          StepAmount;
		float                          StartOffset;
		float                          EndMultiplier;
		bool                           Hit;
	} params = {};

	params.Index = Index;
	params.Angle = Angle;
	params.StepAmount = StepAmount;
	params.StartOffset = StartOffset;
	params.EndMultiplier = EndMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OptimizeRadius_Traces
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::OptimizeRadius_Traces()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OptimizeRadius_Traces"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Play Sound on Weapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          VolumeMultiplier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PitchMultiplier                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::Play_Sound_on_Weapon(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Play Sound on Weapon"));

	struct
	{
		class USoundBase*              Sound;
		float                          VolumeMultiplier;
		float                          PitchMultiplier;
	} params = {};

	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleShadowCasting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYSkeletalMeshComponentFOV* BaseMesh                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NewCastShadow                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTacticalFlashLightComponent_BP_C::ToggleShadowCasting(class UYSkeletalMeshComponentFOV* BaseMesh, bool NewCastShadow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleShadowCasting"));

	struct
	{
		class UYSkeletalMeshComponentFOV* BaseMesh;
		bool                           NewCastShadow;
	} params = {};

	params.BaseMesh = BaseMesh;
	params.NewCastShadow = NewCastShadow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OnRep_bIsEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::OnRep_bIsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OnRep_bIsEnabled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.BP_OnWeaponSwitched
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::BP_OnWeaponSwitched()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.BP_OnWeaponSwitched"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Turn On Light
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFlashlightTestActor_C*  testActor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::Turn_On_Light(class AFlashlightTestActor_C* testActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.Turn On Light"));

	struct
	{
		class AFlashlightTestActor_C*  testActor;
	} params = {};

	params.testActor = testActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.TurnOffLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::TurnOffLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.TurnOffLight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ToggleLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleLight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OptimizeLightRadius
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::OptimizeLightRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.OptimizeLightRadius"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.UpdateLocationBasedOnFOV
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::UpdateLocationBasedOnFOV()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.UpdateLocationBasedOnFOV"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleFlashLightTest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ToggleFlashLightTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleFlashLightTest"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleFlashLightTraces
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::ToggleFlashLightTraces()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ToggleFlashLightTraces"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.CheckDistance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTacticalFlashLightComponent_BP_C::CheckDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.CheckDistance"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.SetEnabledServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTacticalFlashLightComponent_BP_C::SetEnabledServer(bool newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.SetEnabledServer"));

	struct
	{
		bool                           newState;
	} params = {};

	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ExecuteUbergraph_TacticalFlashLightComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTacticalFlashLightComponent_BP_C::ExecuteUbergraph_TacticalFlashLightComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TacticalFlashLightComponent_BP.TacticalFlashLightComponent_BP_C.ExecuteUbergraph_TacticalFlashLightComponent_BP"));

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
