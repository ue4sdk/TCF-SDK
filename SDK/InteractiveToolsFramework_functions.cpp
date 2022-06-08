// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InteractiveToolsFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bWorldIn                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState"));

	struct
	{
		bool                           bWorldIn;
	} params = {};

	params.bWorldIn = bWorldIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bHoveringIn                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState"));

	struct
	{
		bool                           bHoveringIn;
	} params = {};

	params.bHoveringIn = bHoveringIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FTransform              NewTransform                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform"));

	struct
	{
		struct FTransform              NewTransform;
	} params = {};

	params.NewTransform = NewTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UGizmoTransformSource::GetTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGizmoAxisSource::HasTangentVectors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector                 TangentXOut                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TangentYOut                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors"));

	struct
	{
		struct FVector                 TangentXOut;
		struct FVector                 TangentYOut;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TangentXOut != nullptr)
		*TangentXOut = params.TangentXOut;
	if (TangentYOut != nullptr)
		*TangentYOut = params.TangentYOut;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UGizmoAxisSource::GetOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UGizmoAxisSource::GetDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection"));

	struct
	{
		struct FVector                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           bHovering                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState"));

	struct
	{
		bool                           bHovering;
	} params = {};

	params.bHovering = bHovering;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (FUNC_Native, FUNC_Public)

void UGizmoStateTarget::EndUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (FUNC_Native, FUNC_Public)

void UGizmoStateTarget::BeginUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter"));

	struct
	{
		float                          NewValue;
	} params = {};

	params.NewValue = NewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGizmoFloatParameterSource::GetParameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (FUNC_Native, FUNC_Public)

void UGizmoFloatParameterSource::EndModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (FUNC_Native, FUNC_Public)

void UGizmoFloatParameterSource::BeginModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector2D               NewValue                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter"));

	struct
	{
		struct FVector2D               NewValue;
	} params = {};

	params.NewValue = NewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (FUNC_Native, FUNC_Public)

void UGizmoVec2ParameterSource::EndModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (FUNC_Native, FUNC_Public)

void UGizmoVec2ParameterSource::BeginModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify"));

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
