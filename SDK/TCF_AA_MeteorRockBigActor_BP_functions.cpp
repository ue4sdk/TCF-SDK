// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_MeteorRockBigActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.CanMeteorBeCollapsed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AAA_MeteorRockBigActor_BP_C::CanMeteorBeCollapsed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.CanMeteorBeCollapsed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.FX-MeteorImpact
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorRockBigActor_BP_C::FX_MeteorImpact()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.FX-MeteorImpact"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.FX-MeteorFlightAlpha
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorRockBigActor_BP_C::FX_MeteorFlightAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.FX-MeteorFlightAlpha"));

	struct
	{
		float                          Alpha;
	} params;

	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.OnMeteorLanded-Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorRockBigActor_BP_C::OnMeteorLanded_Server()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.OnMeteorLanded-Server"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAA_MeteorRockBigActor_BP_C::BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.BndEvt__LootSpawnVolume_Component_BP_Core_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPickupActor*>   LootActors                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAA_MeteorRockBigActor_BP_C::BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature(TArray<class AYPickupActor*>* LootActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.BndEvt__LootSpawnVolume_Component_BP_K2Node_ComponentBoundEvent_0_OnLootSpawned__DelegateSignature"));

	struct
	{
		TArray<class AYPickupActor*>   LootActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootActors != nullptr)
		*LootActors = params.LootActors;
}


// Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.ExecuteUbergraph_AA_MeteorRockBigActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorRockBigActor_BP_C::ExecuteUbergraph_AA_MeteorRockBigActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockBigActor_BP.AA_MeteorRockBigActor_BP_C.ExecuteUbergraph_AA_MeteorRockBigActor_BP"));

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
