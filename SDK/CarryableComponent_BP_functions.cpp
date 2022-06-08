// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CarryableComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarryableComponent_BP.CarryableComponent_BP_C.GetCollisionRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          SphereRadius                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::GetCollisionRadius(float* SphereRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.GetCollisionRadius"));

	struct
	{
		float                          SphereRadius;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.GetDesiredDistanceFromCarrier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::GetDesiredDistanceFromCarrier(float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.GetDesiredDistanceFromCarrier"));

	struct
	{
		float                          Distance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.BP_GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString UCarryableComponent_BP_C::BP_GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.BP_GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.GetComponentForCollisionChecks
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     AsPrimitive_Component          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::GetComponentForCollisionChecks(class UPrimitiveComponent** AsPrimitive_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.GetComponentForCollisionChecks"));

	struct
	{
		class UPrimitiveComponent*     AsPrimitive_Component;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsPrimitive_Component != nullptr)
		*AsPrimitive_Component = params.AsPrimitive_Component;
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.OnRep_PlayerCarryingComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::OnRep_PlayerCarryingComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.OnRep_PlayerCarryingComponent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.ThrowActorDueDrop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::ThrowActorDueDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.ThrowActorDueDrop"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.StartGettingCarried
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlayerCarryingComponent_BP_C* CarryingComponent              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::StartGettingCarried(class UPlayerCarryingComponent_BP_C* CarryingComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.StartGettingCarried"));

	struct
	{
		class UPlayerCarryingComponent_BP_C* CarryingComponent;
	} params = {};

	params.CarryingComponent = CarryingComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.StopGettingCarried
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::StopGettingCarried()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.StopGettingCarried"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.TryRequestStopCarry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::TryRequestStopCarry()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.TryRequestStopCarry"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStartedGettingCarried
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::NotifyOnStartedGettingCarried()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStartedGettingCarried"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStoppedGettingCarried
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::NotifyOnStoppedGettingCarried()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.NotifyOnStoppedGettingCarried"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.MulticastThrow
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::MulticastThrow(const struct FVector& Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.MulticastThrow"));

	struct
	{
		struct FVector                 Velocity;
	} params = {};

	params.Velocity = Velocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.ReceiveTick"));

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


// Function CarryableComponent_BP.CarryableComponent_BP_C.ExecuteUbergraph_CarryableComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCarryableComponent_BP_C::ExecuteUbergraph_CarryableComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.ExecuteUbergraph_CarryableComponent_BP"));

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


// Function CarryableComponent_BP.CarryableComponent_BP_C.OnStoppedGettingCarried__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::OnStoppedGettingCarried__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.OnStoppedGettingCarried__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CarryableComponent_BP.CarryableComponent_BP_C.OnStartedGettingCarried__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarryableComponent_BP_C::OnStartedGettingCarried__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CarryableComponent_BP.CarryableComponent_BP_C.OnStartedGettingCarried__DelegateSignature"));

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
