// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AimAssist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotator
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                AutoAimRotator                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::GetAutoAimRotator(struct FRotator* AutoAimRotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotator"));

	struct
	{
		struct FRotator                AutoAimRotator;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimRotator != nullptr)
		*AutoAimRotator = params.AutoAimRotator;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimPureAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsAngleValueNOTNull_           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::GetAutoAimPureAngle(float* AutoAimAngle, bool* IsAngleValueNOTNull_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimPureAngle"));

	struct
	{
		float                          AutoAimAngle;
		bool                           IsAngleValueNOTNull_;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimAngle != nullptr)
		*AutoAimAngle = params.AutoAimAngle;
	if (IsAngleValueNOTNull_ != nullptr)
		*IsAngleValueNOTNull_ = params.IsAngleValueNOTNull_;
}


// Function BP_AimAssist.BP_AimAssist_C.ModifyFrictionByMovementCoeff
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Initial_Friction_Value         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Movement_Coeff                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Final_Friction                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::ModifyFrictionByMovementCoeff(float Initial_Friction_Value, float Movement_Coeff, float* Final_Friction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.ModifyFrictionByMovementCoeff"));

	struct
	{
		float                          Initial_Friction_Value;
		float                          Movement_Coeff;
		float                          Final_Friction;
	} params = {};

	params.Initial_Friction_Value = Initial_Friction_Value;
	params.Movement_Coeff = Movement_Coeff;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Final_Friction != nullptr)
		*Final_Friction = params.Final_Friction;
}


// Function BP_AimAssist.BP_AimAssist_C.Logging
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssist_C::Logging()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.Logging"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.AdditionalCheckHittingTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Start_Point                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Forward_Vector                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHittedTargetDirectTrace_     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::AdditionalCheckHittingTarget(const struct FVector& Start_Point, const struct FVector& Forward_Vector, bool* IsHittedTargetDirectTrace_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.AdditionalCheckHittingTarget"));

	struct
	{
		struct FVector                 Start_Point;
		struct FVector                 Forward_Vector;
		bool                           IsHittedTargetDirectTrace_;
	} params = {};

	params.Start_Point = Start_Point;
	params.Forward_Vector = Forward_Vector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsHittedTargetDirectTrace_ != nullptr)
		*IsHittedTargetDirectTrace_ = params.IsHittedTargetDirectTrace_;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAngle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAutoAimAngle(float* AutoAimAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAngle"));

	struct
	{
		float                          AutoAimAngle;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimAngle != nullptr)
		*AutoAimAngle = params.AutoAimAngle;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotatorPure
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                AutoAimRotator                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::GetAutoAimRotatorPure(struct FRotator* AutoAimRotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimRotatorPure"));

	struct
	{
		struct FRotator                AutoAimRotator;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimRotator != nullptr)
		*AutoAimRotator = params.AutoAimRotator;
}


// Function BP_AimAssist.BP_AimAssist_C.GetCurrentHoldTargetTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          CurrentHoldTargetTime          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetCurrentHoldTargetTime(float* CurrentHoldTargetTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetCurrentHoldTargetTime"));

	struct
	{
		float                          CurrentHoldTargetTime;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrentHoldTargetTime != nullptr)
		*CurrentHoldTargetTime = params.CurrentHoldTargetTime;
}


// Function BP_AimAssist.BP_AimAssist_C.GetFoundValidTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Found_Valid_Target_            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::GetFoundValidTarget(bool* Found_Valid_Target_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetFoundValidTarget"));

	struct
	{
		bool                           Found_Valid_Target_;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Found_Valid_Target_ != nullptr)
		*Found_Valid_Target_ = params.Found_Valid_Target_;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPresetSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 PresetName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// float                          HoldTargetTime                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFriction_In_Bliend    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismAdhesion_In_Bliend    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFriction_In_Aim       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismAdhesion_In_Aim       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAimAssistPresetSettings(struct FString* PresetName, float* HoldTargetTime, float* MagnetismFriction_In_Bliend, float* MagnetismAdhesion_In_Bliend, float* MagnetismFriction_In_Aim, float* MagnetismAdhesion_In_Aim)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPresetSettings"));

	struct
	{
		struct FString                 PresetName;
		float                          HoldTargetTime;
		float                          MagnetismFriction_In_Bliend;
		float                          MagnetismAdhesion_In_Bliend;
		float                          MagnetismFriction_In_Aim;
		float                          MagnetismAdhesion_In_Aim;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PresetName != nullptr)
		*PresetName = params.PresetName;
	if (HoldTargetTime != nullptr)
		*HoldTargetTime = params.HoldTargetTime;
	if (MagnetismFriction_In_Bliend != nullptr)
		*MagnetismFriction_In_Bliend = params.MagnetismFriction_In_Bliend;
	if (MagnetismAdhesion_In_Bliend != nullptr)
		*MagnetismAdhesion_In_Bliend = params.MagnetismAdhesion_In_Bliend;
	if (MagnetismFriction_In_Aim != nullptr)
		*MagnetismFriction_In_Aim = params.MagnetismFriction_In_Aim;
	if (MagnetismAdhesion_In_Aim != nullptr)
		*MagnetismAdhesion_In_Aim = params.MagnetismAdhesion_In_Aim;
}


// Function BP_AimAssist.BP_AimAssist_C.GetMagnetismAImSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MagnetismAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismDistance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFalloffDistance       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismNearFalloffDistance   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetMagnetismAImSettings(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetMagnetismAImSettings"));

	struct
	{
		float                          MagnetismAngle;
		float                          MagnetismDistance;
		float                          MagnetismFalloffDistance;
		float                          MagnetismNearFalloffDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MagnetismAngle != nullptr)
		*MagnetismAngle = params.MagnetismAngle;
	if (MagnetismDistance != nullptr)
		*MagnetismDistance = params.MagnetismDistance;
	if (MagnetismFalloffDistance != nullptr)
		*MagnetismFalloffDistance = params.MagnetismFalloffDistance;
	if (MagnetismNearFalloffDistance != nullptr)
		*MagnetismNearFalloffDistance = params.MagnetismNearFalloffDistance;
}


// Function BP_AimAssist.BP_AimAssist_C.GetMagnetismBliendSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MagnetismAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismDistance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFalloffDistance       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismNearFalloffDistance   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetMagnetismBliendSettings(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetMagnetismBliendSettings"));

	struct
	{
		float                          MagnetismAngle;
		float                          MagnetismDistance;
		float                          MagnetismFalloffDistance;
		float                          MagnetismNearFalloffDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MagnetismAngle != nullptr)
		*MagnetismAngle = params.MagnetismAngle;
	if (MagnetismDistance != nullptr)
		*MagnetismDistance = params.MagnetismDistance;
	if (MagnetismFalloffDistance != nullptr)
		*MagnetismFalloffDistance = params.MagnetismFalloffDistance;
	if (MagnetismNearFalloffDistance != nullptr)
		*MagnetismNearFalloffDistance = params.MagnetismNearFalloffDistance;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAimSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DeviationAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimDistance                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimFalloffDistance         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimNearFalloffDistance     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAutoAimAimSettings(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimAimSettings"));

	struct
	{
		float                          DeviationAngle;
		float                          AutoAimAngle;
		float                          AutoAimDistance;
		float                          AutoAimFalloffDistance;
		float                          AutoAimNearFalloffDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DeviationAngle != nullptr)
		*DeviationAngle = params.DeviationAngle;
	if (AutoAimAngle != nullptr)
		*AutoAimAngle = params.AutoAimAngle;
	if (AutoAimDistance != nullptr)
		*AutoAimDistance = params.AutoAimDistance;
	if (AutoAimFalloffDistance != nullptr)
		*AutoAimFalloffDistance = params.AutoAimFalloffDistance;
	if (AutoAimNearFalloffDistance != nullptr)
		*AutoAimNearFalloffDistance = params.AutoAimNearFalloffDistance;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimBliendSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DeviationAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimDistance                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimFalloffDistance         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimNearFalloffDistance     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAutoAimBliendSettings(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimBliendSettings"));

	struct
	{
		float                          DeviationAngle;
		float                          AutoAimAngle;
		float                          AutoAimDistance;
		float                          AutoAimFalloffDistance;
		float                          AutoAimNearFalloffDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DeviationAngle != nullptr)
		*DeviationAngle = params.DeviationAngle;
	if (AutoAimAngle != nullptr)
		*AutoAimAngle = params.AutoAimAngle;
	if (AutoAimDistance != nullptr)
		*AutoAimDistance = params.AutoAimDistance;
	if (AutoAimFalloffDistance != nullptr)
		*AutoAimFalloffDistance = params.AutoAimFalloffDistance;
	if (AutoAimNearFalloffDistance != nullptr)
		*AutoAimNearFalloffDistance = params.AutoAimNearFalloffDistance;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPresetName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Aim_Assist_WPN_Preset_Name     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAimAssistWPNPresetName(struct FName* Aim_Assist_WPN_Preset_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPresetName"));

	struct
	{
		struct FName                   Aim_Assist_WPN_Preset_Name;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Aim_Assist_WPN_Preset_Name != nullptr)
		*Aim_Assist_WPN_Preset_Name = params.Aim_Assist_WPN_Preset_Name;
}


// Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Pitch                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Input_Pitch_Value_After_Inf_Magsm (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetPitchInputByController(float Pitch, float* Input_Pitch_Value_After_Inf_Magsm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByController"));

	struct
	{
		float                          Pitch;
		float                          Input_Pitch_Value_After_Inf_Magsm;
	} params = {};

	params.Pitch = Pitch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Input_Pitch_Value_After_Inf_Magsm != nullptr)
		*Input_Pitch_Value_After_Inf_Magsm = params.Input_Pitch_Value_After_Inf_Magsm;
}


// Function BP_AimAssist.BP_AimAssist_C.SetYawInputByController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Yaw                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Input_Yaw_Value_After_Inf_Magsm (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetYawInputByController(float Yaw, float* Input_Yaw_Value_After_Inf_Magsm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetYawInputByController"));

	struct
	{
		float                          Yaw;
		float                          Input_Yaw_Value_After_Inf_Magsm;
	} params = {};

	params.Yaw = Yaw;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Input_Yaw_Value_After_Inf_Magsm != nullptr)
		*Input_Yaw_Value_After_Inf_Magsm = params.Input_Yaw_Value_After_Inf_Magsm;
}


// Function BP_AimAssist.BP_AimAssist_C.GetMagnetismStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          YawInput                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PitchInput                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PlayerInputMax                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismSensCoefficient       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FinalMagnetismCoefficient      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Friction                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AddedControlRotationAngleYaw   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AddedControlRotationAnglePitch (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FrictionFraction               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetMagnetismStatus(float* YawInput, float* PitchInput, float* PlayerInputMax, float* MagnetismSensCoefficient, float* FinalMagnetismCoefficient, float* Friction, float* AddedControlRotationAngleYaw, float* AddedControlRotationAnglePitch, float* FrictionFraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetMagnetismStatus"));

	struct
	{
		float                          YawInput;
		float                          PitchInput;
		float                          PlayerInputMax;
		float                          MagnetismSensCoefficient;
		float                          FinalMagnetismCoefficient;
		float                          Friction;
		float                          AddedControlRotationAngleYaw;
		float                          AddedControlRotationAnglePitch;
		float                          FrictionFraction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (YawInput != nullptr)
		*YawInput = params.YawInput;
	if (PitchInput != nullptr)
		*PitchInput = params.PitchInput;
	if (PlayerInputMax != nullptr)
		*PlayerInputMax = params.PlayerInputMax;
	if (MagnetismSensCoefficient != nullptr)
		*MagnetismSensCoefficient = params.MagnetismSensCoefficient;
	if (FinalMagnetismCoefficient != nullptr)
		*FinalMagnetismCoefficient = params.FinalMagnetismCoefficient;
	if (Friction != nullptr)
		*Friction = params.Friction;
	if (AddedControlRotationAngleYaw != nullptr)
		*AddedControlRotationAngleYaw = params.AddedControlRotationAngleYaw;
	if (AddedControlRotationAnglePitch != nullptr)
		*AddedControlRotationAnglePitch = params.AddedControlRotationAnglePitch;
	if (FrictionFraction != nullptr)
		*FrictionFraction = params.FrictionFraction;
}


// Function BP_AimAssist.BP_AimAssist_C.GetTargetBone
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   TargetHitBoneName              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetTargetBone(struct FName* TargetHitBoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetTargetBone"));

	struct
	{
		struct FName                   TargetHitBoneName;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetHitBoneName != nullptr)
		*TargetHitBoneName = params.TargetHitBoneName;
}


// Function BP_AimAssist.BP_AimAssist_C.GetTargetActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Current_Target_Hit_Actor       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetTargetActor(class AActor** Current_Target_Hit_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetTargetActor"));

	struct
	{
		class AActor*                  Current_Target_Hit_Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Current_Target_Hit_Actor != nullptr)
		*Current_Target_Hit_Actor = params.Current_Target_Hit_Actor;
}


// Function BP_AimAssist.BP_AimAssist_C.GetTargetImpactPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 TargetImpactPoint              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetTargetImpactPoint(struct FVector* TargetImpactPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetTargetImpactPoint"));

	struct
	{
		struct FVector                 TargetImpactPoint;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetImpactPoint != nullptr)
		*TargetImpactPoint = params.TargetImpactPoint;
}


// Function BP_AimAssist.BP_AimAssist_C.GetDistanceToTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          TargetDistance                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetDistanceToTarget(float* TargetDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetDistanceToTarget"));

	struct
	{
		float                          TargetDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TargetDistance != nullptr)
		*TargetDistance = params.TargetDistance;
}


// Function BP_AimAssist.BP_AimAssist_C.GetMagnetismCoefficients
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MagnetismCoefficient           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          FinalMagnetismCoefficient      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismAngleCoefficient      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismDistanceCoefficient   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismSensCoefficient       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetMagnetismCoefficients(float* MagnetismCoefficient, float* FinalMagnetismCoefficient, float* MagnetismAngleCoefficient, float* MagnetismDistanceCoefficient, float* MagnetismSensCoefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetMagnetismCoefficients"));

	struct
	{
		float                          MagnetismCoefficient;
		float                          FinalMagnetismCoefficient;
		float                          MagnetismAngleCoefficient;
		float                          MagnetismDistanceCoefficient;
		float                          MagnetismSensCoefficient;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MagnetismCoefficient != nullptr)
		*MagnetismCoefficient = params.MagnetismCoefficient;
	if (FinalMagnetismCoefficient != nullptr)
		*FinalMagnetismCoefficient = params.FinalMagnetismCoefficient;
	if (MagnetismAngleCoefficient != nullptr)
		*MagnetismAngleCoefficient = params.MagnetismAngleCoefficient;
	if (MagnetismDistanceCoefficient != nullptr)
		*MagnetismDistanceCoefficient = params.MagnetismDistanceCoefficient;
	if (MagnetismSensCoefficient != nullptr)
		*MagnetismSensCoefficient = params.MagnetismSensCoefficient;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAutoAimCoefficients
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          AutoAimCoefficient             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimDistanceCoefficient     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimAngleCoefficient        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAutoAimCoefficients(float* AutoAimCoefficient, float* AutoAimDistanceCoefficient, float* AutoAimAngleCoefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAutoAimCoefficients"));

	struct
	{
		float                          AutoAimCoefficient;
		float                          AutoAimDistanceCoefficient;
		float                          AutoAimAngleCoefficient;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimCoefficient != nullptr)
		*AutoAimCoefficient = params.AutoAimCoefficient;
	if (AutoAimDistanceCoefficient != nullptr)
		*AutoAimDistanceCoefficient = params.AutoAimDistanceCoefficient;
	if (AutoAimAngleCoefficient != nullptr)
		*AutoAimAngleCoefficient = params.AutoAimAngleCoefficient;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPreset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSTR_AimAssistPresetDesc AimAssistPresetLib             (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAimAssistPreset(struct FSTR_AimAssistPresetDesc* AimAssistPresetLib)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAimAssistPreset"));

	struct
	{
		struct FSTR_AimAssistPresetDesc AimAssistPresetLib;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AimAssistPresetLib != nullptr)
		*AimAssistPresetLib = params.AimAssistPresetLib;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPreset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSTR_AimAssistWPNPresetDesc AimAssistWPNPresetLib          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAimAssistWPNPreset(struct FSTR_AimAssistWPNPresetDesc* AimAssistWPNPresetLib)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAimAssistWPNPreset"));

	struct
	{
		struct FSTR_AimAssistWPNPresetDesc AimAssistWPNPresetLib;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AimAssistWPNPresetLib != nullptr)
		*AimAssistWPNPresetLib = params.AimAssistWPNPresetLib;
}


// Function BP_AimAssist.BP_AimAssist_C.GetAimState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_CharacterAimState> AimState                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetAimState(TEnumAsByte<ENUM_CharacterAimState>* AimState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetAimState"));

	struct
	{
		TEnumAsByte<ENUM_CharacterAimState> AimState;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AimState != nullptr)
		*AimState = params.AimState;
}


// Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByMouse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Pitch                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Input_Pitch_Value_After_Inf_Magsm (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetPitchInputByMouse(float Pitch, float* Input_Pitch_Value_After_Inf_Magsm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetPitchInputByMouse"));

	struct
	{
		float                          Pitch;
		float                          Input_Pitch_Value_After_Inf_Magsm;
	} params = {};

	params.Pitch = Pitch;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Input_Pitch_Value_After_Inf_Magsm != nullptr)
		*Input_Pitch_Value_After_Inf_Magsm = params.Input_Pitch_Value_After_Inf_Magsm;
}


// Function BP_AimAssist.BP_AimAssist_C.SetYawInputByMouse
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Yaw                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Input_Yaw_Value_After_Inf_Magsm (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetYawInputByMouse(float Yaw, float* Input_Yaw_Value_After_Inf_Magsm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetYawInputByMouse"));

	struct
	{
		float                          Yaw;
		float                          Input_Yaw_Value_After_Inf_Magsm;
	} params = {};

	params.Yaw = Yaw;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Input_Yaw_Value_After_Inf_Magsm != nullptr)
		*Input_Yaw_Value_After_Inf_Magsm = params.Input_Yaw_Value_After_Inf_Magsm;
}


// Function BP_AimAssist.BP_AimAssist_C.ApplyMagnetism
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MagnetismCoefficient           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 CameraWorldLocation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::ApplyMagnetism(float MagnetismCoefficient, const struct FVector& CameraWorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.ApplyMagnetism"));

	struct
	{
		float                          MagnetismCoefficient;
		struct FVector                 CameraWorldLocation;
	} params = {};

	params.MagnetismCoefficient = MagnetismCoefficient;
	params.CameraWorldLocation = CameraWorldLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.ApplyAutoAim
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ForwardVector                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 WorldPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::ApplyAutoAim(const struct FVector& StartPoint, const struct FVector& ForwardVector, const struct FVector& WorldPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.ApplyAutoAim"));

	struct
	{
		struct FVector                 StartPoint;
		struct FVector                 ForwardVector;
		struct FVector                 WorldPoint;
	} params = {};

	params.StartPoint = StartPoint;
	params.ForwardVector = ForwardVector;
	params.WorldPoint = WorldPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.CalculateCoefficients
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TargetDistance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetAngle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimCoefficient             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismCoefficient           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::CalculateCoefficients(float TargetDistance, float TargetAngle, float* AutoAimCoefficient, float* MagnetismCoefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.CalculateCoefficients"));

	struct
	{
		float                          TargetDistance;
		float                          TargetAngle;
		float                          AutoAimCoefficient;
		float                          MagnetismCoefficient;
	} params = {};

	params.TargetDistance = TargetDistance;
	params.TargetAngle = TargetAngle;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AutoAimCoefficient != nullptr)
		*AutoAimCoefficient = params.AutoAimCoefficient;
	if (MagnetismCoefficient != nullptr)
		*MagnetismCoefficient = params.MagnetismCoefficient;
}


// Function BP_AimAssist.BP_AimAssist_C.PreciseTarget
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSTR_AimAssistTarget    AimAssistTarget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 CameraWorldLocation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 CameraForwardVector            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TraceDistance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::PreciseTarget(const struct FVector& CameraWorldLocation, const struct FVector& CameraForwardVector, float TraceDistance, struct FSTR_AimAssistTarget* AimAssistTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.PreciseTarget"));

	struct
	{
		struct FSTR_AimAssistTarget    AimAssistTarget;
		struct FVector                 CameraWorldLocation;
		struct FVector                 CameraForwardVector;
		float                          TraceDistance;
	} params = {};

	params.CameraWorldLocation = CameraWorldLocation;
	params.CameraForwardVector = CameraForwardVector;
	params.TraceDistance = TraceDistance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AimAssistTarget != nullptr)
		*AimAssistTarget = params.AimAssistTarget;
}


// Function BP_AimAssist.BP_AimAssist_C.GetSuitableTargetFast
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 CameraWorldLocation            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 CameraForwardVector            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSTR_AimAssistTarget    AimAssistTarget                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::GetSuitableTargetFast(const struct FVector& CameraWorldLocation, const struct FVector& CameraForwardVector, struct FSTR_AimAssistTarget* AimAssistTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.GetSuitableTargetFast"));

	struct
	{
		struct FVector                 CameraWorldLocation;
		struct FVector                 CameraForwardVector;
		struct FSTR_AimAssistTarget    AimAssistTarget;
	} params = {};

	params.CameraWorldLocation = CameraWorldLocation;
	params.CameraForwardVector = CameraForwardVector;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AimAssistTarget != nullptr)
		*AimAssistTarget = params.AimAssistTarget;
}


// Function BP_AimAssist.BP_AimAssist_C.DefiningTarget
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssist_C::DefiningTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.DefiningTarget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.InitializeAimPresetLib
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::InitializeAimPresetLib(const struct FName& RowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.InitializeAimPresetLib"));

	struct
	{
		struct FName                   RowName;
	} params = {};

	params.RowName = RowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.SetCharacterAimState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CharacterAimState> CharacterAimState              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetCharacterAimState(TEnumAsByte<ENUM_CharacterAimState> CharacterAimState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetCharacterAimState"));

	struct
	{
		TEnumAsByte<ENUM_CharacterAimState> CharacterAimState;
	} params = {};

	params.CharacterAimState = CharacterAimState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.SetAimAssitWPNPreset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Preset_Name                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetAimAssitWPNPreset(const struct FName& Preset_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetAimAssitWPNPreset"));

	struct
	{
		struct FName                   Preset_Name;
	} params = {};

	params.Preset_Name = Preset_Name;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.AimAssistScanTurn ON OFF
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Scanning_                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBP_AimAssist_C::AimAssistScanTurn_ON_OFF(bool Scanning_)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.AimAssistScanTurn ON OFF"));

	struct
	{
		bool                           Scanning_;
	} params = {};

	params.Scanning_ = Scanning_;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_AimAssist_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.SetAnimAssistPreset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::SetAnimAssistPreset(const struct FName& RowName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.SetAnimAssistPreset"));

	struct
	{
		struct FName                   RowName;
	} params = {};

	params.RowName = RowName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.CharacterChangeState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_CharacterAimState> newState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::CharacterChangeState(TEnumAsByte<ENUM_CharacterAimState> newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.CharacterChangeState"));

	struct
	{
		TEnumAsByte<ENUM_CharacterAimState> newState;
	} params = {};

	params.newState = newState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.InitializeAimAssistWPNPreset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PresetName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::InitializeAimAssistWPNPreset(const struct FString& PresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.InitializeAimAssistWPNPreset"));

	struct
	{
		struct FString                 PresetName;
	} params = {};

	params.PresetName = PresetName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.KeybindingDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssist_C::KeybindingDataChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.KeybindingDataChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.StartTimerBasedOnInputDevice
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssist_C::StartTimerBasedOnInputDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.StartTimerBasedOnInputDevice"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssist.BP_AimAssist_C.ExecuteUbergraph_BP_AimAssist
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssist_C::ExecuteUbergraph_BP_AimAssist(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssist.BP_AimAssist_C.ExecuteUbergraph_BP_AimAssist"));

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
