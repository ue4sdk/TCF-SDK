// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Keyroom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Keyroom.AA_Keyroom_C.Re-SetLootCrates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AAA_Keyroom_C::Re_SetLootCrates(TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.Re-SetLootCrates"));

	struct
	{
		TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot;
	} params = {};

	params.SpawnedLoot = SpawnedLoot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.SpawnSingleLoot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLootUpdate              (CPF_Parm, CPF_OutParm)

void AAA_Keyroom_C::SpawnSingleLoot(TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot, TMap<class AAL_Base_BP_C*, class AActor*>* SpawnedLootUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.SpawnSingleLoot"));

	struct
	{
		TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLoot;
		TMap<class AAL_Base_BP_C*, class AActor*> SpawnedLootUpdate;
	} params = {};

	params.SpawnedLoot = SpawnedLoot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedLootUpdate != nullptr)
		*SpawnedLootUpdate = params.SpawnedLootUpdate;
}


// Function AA_Keyroom.AA_Keyroom_C.ShowConnectedActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Keyroom_C::ShowConnectedActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.ShowConnectedActors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.ClearLoot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<class AAL_Base_BP_C*, class AActor*> LootToClear                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void AAA_Keyroom_C::ClearLoot(TMap<class AAL_Base_BP_C*, class AActor*> LootToClear)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.ClearLoot"));

	struct
	{
		TMap<class AAL_Base_BP_C*, class AActor*> LootToClear;
	} params = {};

	params.LootToClear = LootToClear;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.SpawnLoot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSet<class AAL_Base_BP_C*>     LootLocations                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TMap<class AAL_Base_BP_C*, class AActor*> SpawnedActors                  (CPF_Parm, CPF_OutParm)

void AAA_Keyroom_C::SpawnLoot(TSet<class AAL_Base_BP_C*> LootLocations, TMap<class AAL_Base_BP_C*, class AActor*>* SpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.SpawnLoot"));

	struct
	{
		TSet<class AAL_Base_BP_C*>     LootLocations;
		TMap<class AAL_Base_BP_C*, class AActor*> SpawnedActors;
	} params = {};

	params.LootLocations = LootLocations;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedActors != nullptr)
		*SpawnedActors = params.SpawnedActors;
}


// Function AA_Keyroom.AA_Keyroom_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Keyroom_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_Keyroom_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.BndEvt__AA_Keyroom_YAreaStatusNotify_K2Node_ComponentBoundEvent_0_OnAreaRespawned__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_Keyroom_C::BndEvt__AA_Keyroom_YAreaStatusNotify_K2Node_ComponentBoundEvent_0_OnAreaRespawned__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.BndEvt__AA_Keyroom_YAreaStatusNotify_K2Node_ComponentBoundEvent_0_OnAreaRespawned__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Keyroom.AA_Keyroom_C.ExecuteUbergraph_AA_Keyroom
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Keyroom_C::ExecuteUbergraph_AA_Keyroom(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Keyroom.AA_Keyroom_C.ExecuteUbergraph_AA_Keyroom"));

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
