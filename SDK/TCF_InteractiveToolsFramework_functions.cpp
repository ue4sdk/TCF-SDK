// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_InteractiveToolsFramework_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	struct
	{
		bool                           bWorldIn;
	} params;

	params.bWorldIn = bWorldIn;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bHoveringIn                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	struct
	{
		bool                           bHoveringIn;
	} params;

	params.bHoveringIn = bHoveringIn;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FTransform              NewTransform                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");

	struct
	{
		struct FTransform              NewTransform;
	} params;

	params.NewTransform = NewTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UGizmoTransformSource::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGizmoAxisSource::HasTangentVectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector                 TangentXOut                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 TangentYOut                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");

	struct
	{
		struct FVector                 TangentXOut;
		struct FVector                 TangentYOut;
	} params;


	UObject::ProcessEvent(fn, &params);

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
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UGizmoAxisSource::GetDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           bHovering                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");

	struct
	{
		bool                           bHovering;
	} params;

	params.bHovering = bHovering;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (FUNC_Native, FUNC_Public)

void UGizmoStateTarget::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (FUNC_Native, FUNC_Public)

void UGizmoStateTarget::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGizmoFloatParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (FUNC_Native, FUNC_Public)

void UGizmoFloatParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (FUNC_Native, FUNC_Public)

void UGizmoFloatParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector2D               NewValue                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");

	struct
	{
		struct FVector2D               NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (FUNC_Native, FUNC_Public)

void UGizmoVec2ParameterSource::EndModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (FUNC_Native, FUNC_Public)

void UGizmoVec2ParameterSource::BeginModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
