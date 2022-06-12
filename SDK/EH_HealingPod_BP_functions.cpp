// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EH_HealingPod_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EH_HealingPod_BP.EH_HealingPod_BP_C.UpdateDebugText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::UpdateDebugText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.UpdateDebugText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.StorePlantLocations
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::StorePlantLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.StorePlantLocations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.ApplyTuningValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::ApplyTuningValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.ApplyTuningValues"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.DeletePlants
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::DeletePlants()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.DeletePlants"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.SpawnPlants
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Locations                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AEH_HealingPod_BP_C::SpawnPlants(TArray<struct FVector>* Locations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.SpawnPlants"));

	struct
	{
		TArray<struct FVector>         Locations;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.FindLocationsForPlants
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         FoundLocations                 (CPF_Parm, CPF_OutParm)

void AEH_HealingPod_BP_C::FindLocationsForPlants(TArray<struct FVector>* FoundLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.FindLocationsForPlants"));

	struct
	{
		TArray<struct FVector>         FoundLocations;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FoundLocations != nullptr)
		*FoundLocations = params.FoundLocations;
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandlePlayerOverlap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       playerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEH_HealingPod_BP_C::HandlePlayerOverlap(class AYPlayerCharacter* playerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandlePlayerOverlap"));

	struct
	{
		class AYPlayerCharacter*       playerCharacter;
	} params = {};

	params.playerCharacter = playerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.ApplyMaterialInstanceParams
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEH_HealingPod_BP_C::ApplyMaterialInstanceParams(float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.ApplyMaterialInstanceParams"));

	struct
	{
		float                          Alpha;
	} params = {};

	params.Alpha = Alpha;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleCooldownOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleCooldownOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleCooldownOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleHealingOver
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleHealingOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleHealingOver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleHealingInterval
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleHealingInterval()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleHealingInterval"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.OnRep_HealingPodState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::OnRep_HealingPodState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.OnRep_HealingPodState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.Colors_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::Colors_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.Colors_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.Colors_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::Colors_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.Colors_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.Healing_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::Healing_TL__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.Healing_TL__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.Healing_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::Healing_TL__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.Healing_TL__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AEH_HealingPod_BP_C::BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.BndEvt__CollisionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HealingInterval_Cosmetic
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HealingInterval_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HealingInterval_Cosmetic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_Healing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleState_Healing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_Healing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_Ready
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleState_Ready()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_Ready"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_OnCooldown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::HandleState_OnCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.HandleState_OnCooldown"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.BndEvt__EH_HealingPod_BP_HealingSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEH_HealingPod_BP_C::BndEvt__EH_HealingPod_BP_HealingSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.BndEvt__EH_HealingPod_BP_HealingSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.RevertCooldownColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AEH_HealingPod_BP_C::RevertCooldownColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.RevertCooldownColor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EH_HealingPod_BP.EH_HealingPod_BP_C.ExecuteUbergraph_EH_HealingPod_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEH_HealingPod_BP_C::ExecuteUbergraph_EH_HealingPod_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EH_HealingPod_BP.EH_HealingPod_BP_C.ExecuteUbergraph_EH_HealingPod_BP"));

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
