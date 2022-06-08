// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeteorRockBase_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AMeteorRockBase_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDebugDescription"));

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


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AMeteorRockBase_BP_C::GetDrawDebugLineColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AMeteorRockBase_BP_C::GetDrawDebugLineTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetDrawDebugLineTo"));

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


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.IsAllLootPickedUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMeteorRockBase_BP_C::IsAllLootPickedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.IsAllLootPickedUp"));

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


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnRep_IsCrumbled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::OnRep_IsCrumbled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnRep_IsCrumbled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetAllLootActors
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_Parm, CPF_OutParm)

void AMeteorRockBase_BP_C::GetAllLootActors(TArray<class AYPickupActor*>* LootActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.GetAllLootActors"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.InitializeMeteor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::InitializeMeteor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.InitializeMeteor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AMeteorRockBase_BP_C::BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMeteorRockBase_BP_C::BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_1_OnAllLootPickedUp__DelegateSignature
// (FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_1_OnAllLootPickedUp__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_1_OnAllLootPickedUp__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__AC_MeteorRockBase_BP_YDestructibleMesh_K2Node_ComponentBoundEvent_2_MeshFracturedOnChunk__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            chunkID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkLocation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkExtends                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeteorRockBase_BP_C::BndEvt__AC_MeteorRockBase_BP_YDestructibleMesh_K2Node_ComponentBoundEvent_2_MeshFracturedOnChunk__DelegateSignature(int chunkID, const struct FVector& chunkLocation, const struct FVector& chunkExtends)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.BndEvt__AC_MeteorRockBase_BP_YDestructibleMesh_K2Node_ComponentBoundEvent_2_MeshFracturedOnChunk__DelegateSignature"));

	struct
	{
		int                            chunkID;
		struct FVector                 chunkLocation;
		struct FVector                 chunkExtends;
	} params = {};

	params.chunkID = chunkID;
	params.chunkLocation = chunkLocation;
	params.chunkExtends = chunkExtends;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.FX-OnCraterDisapear
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::FX_OnCraterDisapear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.FX-OnCraterDisapear"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnCrumbled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::OnCrumbled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnCrumbled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnMeteorDecayed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::OnMeteorDecayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.OnMeteorDecayed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.SpawnLoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBase_BP_C::SpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.SpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBase_BP.MeteorRockBase_BP_C.ExecuteUbergraph_MeteorRockBase_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeteorRockBase_BP_C::ExecuteUbergraph_MeteorRockBase_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBase_BP.MeteorRockBase_BP_C.ExecuteUbergraph_MeteorRockBase_BP"));

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
