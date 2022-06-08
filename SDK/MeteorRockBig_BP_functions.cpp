// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeteorRockBig_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeteorRockBig_BP.MeteorRockBig_BP_C.IsAllLootPickedUp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMeteorRockBig_BP_C::IsAllLootPickedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBig_BP.MeteorRockBig_BP_C.IsAllLootPickedUp"));

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


// Function MeteorRockBig_BP.MeteorRockBig_BP_C.BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMeteorRockBig_BP_C::BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBig_BP.MeteorRockBig_BP_C.BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature"));

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


// Function MeteorRockBig_BP.MeteorRockBig_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AMeteorRockBig_BP_C::BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBig_BP.MeteorRockBig_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature"));

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


// Function MeteorRockBig_BP.MeteorRockBig_BP_C.SpawnLoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMeteorRockBig_BP_C::SpawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBig_BP.MeteorRockBig_BP_C.SpawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MeteorRockBig_BP.MeteorRockBig_BP_C.ExecuteUbergraph_MeteorRockBig_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMeteorRockBig_BP_C::ExecuteUbergraph_MeteorRockBig_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MeteorRockBig_BP.MeteorRockBig_BP_C.ExecuteUbergraph_MeteorRockBig_BP"));

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
