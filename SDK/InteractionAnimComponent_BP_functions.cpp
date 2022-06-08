// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "InteractionAnimComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnRep_IsLongInteracting
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::OnRep_IsLongInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnRep_IsLongInteracting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.GetPickUpInteractionActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AYPickupActor*           AsYPickup_Actor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::GetPickUpInteractionActor(class AYPickupActor** AsYPickup_Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.GetPickUpInteractionActor"));

	struct
	{
		class AYPickupActor*           AsYPickup_Actor;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsYPickup_Actor != nullptr)
		*AsYPickup_Actor = params.AsYPickup_Actor;
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.RetrieveMesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             AsStatic_Mesh                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::RetrieveMesh(class UStaticMesh** AsStatic_Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.RetrieveMesh"));

	struct
	{
		class UStaticMesh*             AsStatic_Mesh;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsStatic_Mesh != nullptr)
		*AsStatic_Mesh = params.AsStatic_Mesh;
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryPrepareSpecialAnimation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSpecial                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInteractionAnimComponent_BP_C::TryPrepareSpecialAnimation(bool* IsSpecial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryPrepareSpecialAnimation"));

	struct
	{
		bool                           IsSpecial;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (IsSpecial != nullptr)
		*IsSpecial = params.IsSpecial;
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.GetPlayerInteractionComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYPlayerInteractionComponent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYPlayerInteractionComponent* UInteractionAnimComponent_BP_C::GetPlayerInteractionComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.GetPlayerInteractionComponent"));

	struct
	{
		class UYPlayerInteractionComponent* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.IsInstantInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldPlayQuickInteraction     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInteractionAnimComponent_BP_C::IsInstantInteraction(bool* shouldPlayQuickInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.IsInstantInteraction"));

	struct
	{
		bool                           shouldPlayQuickInteraction;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (shouldPlayQuickInteraction != nullptr)
		*shouldPlayQuickInteraction = params.shouldPlayQuickInteraction;
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TrySpawnSpecialPickUpMesh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::TrySpawnSpecialPickUpMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TrySpawnSpecialPickUpMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryDestroySpecialStaticMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::TryDestroySpecialStaticMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.TryDestroySpecialStaticMesh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnInteractionStarted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPlayerInteractionComponent* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::BP_OnInteractionStarted_Event_1(class UYPlayerInteractionComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnInteractionStarted_Event_1"));

	struct
	{
		class UYPlayerInteractionComponent* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnInteractionEnded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPlayerInteractionComponent* Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::BP_OnInteractionEnded_Event_1(class UYPlayerInteractionComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnInteractionEnded_Event_1"));

	struct
	{
		class UYPlayerInteractionComponent* Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnControllerChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::BP_OnControllerChanged_Event_1(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.BP_OnControllerChanged_Event_1"));

	struct
	{
		class AController*             Controller;
	} params = {};

	params.Controller = Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SetupBindings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::SetupBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SetupBindings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SetIsLongInteractionActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLongInteractingActive        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInteractionAnimComponent_BP_C::SetIsLongInteractionActive(bool IsLongInteractingActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.SetIsLongInteractionActive"));

	struct
	{
		bool                           IsLongInteractingActive;
	} params = {};

	params.IsLongInteractingActive = IsLongInteractingActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ExecuteUbergraph_InteractionAnimComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UInteractionAnimComponent_BP_C::ExecuteUbergraph_InteractionAnimComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.ExecuteUbergraph_InteractionAnimComponent_BP"));

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


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInteractionStopped__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInteractionAnimComponent_BP_C::OnInteractionStopped__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInteractionStopped__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInteractionTriggered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsInstantInteraction           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsSpecial                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UInteractionAnimComponent_BP_C::OnInteractionTriggered__DelegateSignature(bool IsInstantInteraction, bool IsSpecial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function InteractionAnimComponent_BP.InteractionAnimComponent_BP_C.OnInteractionTriggered__DelegateSignature"));

	struct
	{
		bool                           IsInstantInteraction;
		bool                           IsSpecial;
	} params = {};

	params.IsInstantInteraction = IsInstantInteraction;
	params.IsSpecial = IsSpecial;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
