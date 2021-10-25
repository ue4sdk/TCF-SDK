// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_Mineral_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAA_Mineral_Base_BP_C::GetDrawDebugLineColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineColor"));

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAA_Mineral_Base_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDrawDebugLineTo"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAA_Mineral_Base_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnDamaged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       DamageEvent                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_Mineral_Base_BP_C::OnDamaged(const struct FYDealtDamageData& DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnDamaged"));

	struct
	{
		struct FYDealtDamageData       DamageEvent;
	} params;

	params.DamageEvent = DamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TriggerLootDiscoveredCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::TriggerLootDiscoveredCheck()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TriggerLootDiscoveredCheck"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_LootMined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnRep_LootMined()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_LootMined"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_IsMineralCollapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnRep_IsMineralCollapsed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_IsMineralCollapsed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.DetermineDestructibleMaterialParent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaterialIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInterface*      Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::DetermineDestructibleMaterialParent(int MaterialIndex, class UMaterialInterface** Output)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.DetermineDestructibleMaterialParent"));

	struct
	{
		int                            MaterialIndex;
		class UMaterialInterface*      Output;
	} params;

	params.MaterialIndex = MaterialIndex;

	UObject::ProcessEvent(fn, &params);

	if (Output != nullptr)
		*Output = params.Output;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.InitializeDynamicMaterialInstances
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::InitializeDynamicMaterialInstances()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.InitializeDynamicMaterialInstances"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_SpawnedLoot
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnRep_SpawnedLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_SpawnedLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_MineralVariationRowHandle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnRep_MineralVariationRowHandle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnRep_MineralVariationRowHandle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_Mineral_Base_BP_C::BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_4_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_5_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAA_Mineral_Base_BP_C::BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_5_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_5_OnLootSpawned__DelegateSignature"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_0_OnAllLootPickedUp__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_0_OnAllLootPickedUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_0_OnAllLootPickedUp__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YActivity_K2Node_ComponentBoundEvent_2_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.SetupVariation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::SetupVariation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.SetupVariation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_3_OnRowLoaded__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_3_OnRowLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YAssetVariation_K2Node_ComponentBoundEvent_3_OnRowLoaded__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnMeshVariationIntialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnMeshVariationIntialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnMeshVariationIntialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnLootInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::OnLootInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.OnLootInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TryInitializeDynamicMaterialInstances
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::TryInitializeDynamicMaterialInstances()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TryInitializeDynamicMaterialInstances"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YScannable_K2Node_ComponentBoundEvent_6_OnWasScanned__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__YScannable_K2Node_ComponentBoundEvent_6_OnWasScanned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__YScannable_K2Node_ComponentBoundEvent_6_OnWasScanned__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_1_OnLootPickUpActorDestroyed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  pickUpActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_1_OnLootPickUpActorDestroyed__DelegateSignature(class AActor* pickUpActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__LootSpawnVolume_BP_K2Node_ComponentBoundEvent_1_OnLootPickUpActorDestroyed__DelegateSignature"));

	struct
	{
		class AActor*                  pickUpActor;
	} params;

	params.pickUpActor = pickUpActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.DestroyChunksAround
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 HurtOrigin                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::DestroyChunksAround(const struct FVector& HurtOrigin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.DestroyChunksAround"));

	struct
	{
		struct FVector                 HurtOrigin;
	} params;

	params.HurtOrigin = HurtOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.UpdateDestructionDueAlreadyMinedLoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::UpdateDestructionDueAlreadyMinedLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.UpdateDestructionDueAlreadyMinedLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteSpawnAction
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYResourceManagerRequestEntry Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AAA_Mineral_Base_BP_C::ExecuteSpawnAction(const struct FYResourceManagerRequestEntry& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteSpawnAction"));

	struct
	{
		struct FYResourceManagerRequestEntry Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TrySetMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IndexToTest                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::TrySetMaterial(int IndexToTest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TrySetMaterial"));

	struct
	{
		int                            IndexToTest;
	} params;

	params.IndexToTest = IndexToTest;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TryLoadRow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::TryLoadRow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.TryLoadRow"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.BndEvt__AA_Mineral_Base_BP_CollapseDestructibleComponent_BP_K2Node_ComponentBoundEvent_7_OnCollapseCompleted__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleStarted
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::FX_MineralCompletedCrumbleStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::FX_MineralCompletedCrumbleEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.FX-MineralCompletedCrumbleEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.MarkAsDepletedDueDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Mineral_Base_BP_C::MarkAsDepletedDueDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.MarkAsDepletedDueDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteUbergraph_AA_Mineral_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Mineral_Base_BP_C::ExecuteUbergraph_AA_Mineral_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_Mineral_Base_BP.AA_Mineral_Base_BP_C.ExecuteUbergraph_AA_Mineral_Base_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
