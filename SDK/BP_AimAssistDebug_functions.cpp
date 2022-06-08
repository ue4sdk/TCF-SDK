// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AimAssistDebug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismAIMProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MagnetismAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismDistance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFalloffDistance       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismNearFalloffDistance   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::GetMagnetismAIMProperties(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismAIMProperties"));

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


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimAIMProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DeviationAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimDistance                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimFalloffDistance         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimNearFalloffDistance     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::GetAutoAimAIMProperties(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimAIMProperties"));

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


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismBlindProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MagnetismAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismDistance              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismFalloffDistance       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnetismNearFalloffDistance   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::GetMagnetismBlindProperties(float* MagnetismAngle, float* MagnetismDistance, float* MagnetismFalloffDistance, float* MagnetismNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetMagnetismBlindProperties"));

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


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawDebugCircle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Camera_Location                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Camera_Direction               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Cone_Angle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Camera_Rotation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            Debug_Color                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::DrawDebugCircle(const struct FVector& Camera_Location, const struct FVector& Camera_Direction, float Cone_Angle, const struct FRotator& Camera_Rotation, const struct FLinearColor& Debug_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawDebugCircle"));

	struct
	{
		struct FVector                 Camera_Location;
		struct FVector                 Camera_Direction;
		float                          Cone_Angle;
		struct FRotator                Camera_Rotation;
		struct FLinearColor            Debug_Color;
	} params = {};

	params.Camera_Location = Camera_Location;
	params.Camera_Direction = Camera_Direction;
	params.Cone_Angle = Cone_Angle;
	params.Camera_Rotation = Camera_Rotation;
	params.Debug_Color = Debug_Color;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimBlindProperties
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          DeviationAngle                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimAngle                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimDistance                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimFalloffDistance         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AutoAimNearFalloffDistance     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::GetAutoAimBlindProperties(float* DeviationAngle, float* AutoAimAngle, float* AutoAimDistance, float* AutoAimFalloffDistance, float* AutoAimNearFalloffDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.GetAutoAimBlindProperties"));

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


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawnCone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Direction                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            LineColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::DrawnCone(const struct FVector& Origin, const struct FVector& Direction, float Angle, float Distance, const struct FLinearColor& LineColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.DrawnCone"));

	struct
	{
		struct FVector                 Origin;
		struct FVector                 Direction;
		float                          Angle;
		float                          Distance;
		struct FLinearColor            LineColor;
	} params = {};

	params.Origin = Origin;
	params.Direction = Direction;
	params.Angle = Angle;
	params.Distance = Distance;
	params.LineColor = LineColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.ReceiveTick"));

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


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.OpenTickForDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssistDebug_C::OpenTickForDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.OpenTickForDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.CreateDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssistDebug_C::CreateDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.CreateDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.RemoveDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssistDebug_C::RemoveDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.RemoveDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.CloseTickForDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssistDebug_C::CloseTickForDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.CloseTickForDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.ToggleDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_AimAssistDebug_C::ToggleDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.ToggleDebug"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BP_AimAssistDebug.BP_AimAssistDebug_C.ExecuteUbergraph_BP_AimAssistDebug
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_AimAssistDebug_C::ExecuteUbergraph_BP_AimAssistDebug(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_AimAssistDebug.BP_AimAssistDebug_C.ExecuteUbergraph_BP_AimAssistDebug"));

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
