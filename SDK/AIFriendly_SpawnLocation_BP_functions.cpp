// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIFriendly_SpawnLocation_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.TrySpawningFriendlyAi
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIFriendly_SpawnLocation_BP_C::TrySpawningFriendlyAi()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.TrySpawningFriendlyAi"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIFriendly_SpawnLocation_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.OnLoaded_792C63AA4B2E57B2D6705A85EAB079B7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAIFriendly_SpawnLocation_BP_C::OnLoaded_792C63AA4B2E57B2D6705A85EAB079B7(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.OnLoaded_792C63AA4B2E57B2D6705A85EAB079B7"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.OnLoaded_1A44A8E142BEE6F800D2239A5867805D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UObject*/      Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void AAIFriendly_SpawnLocation_BP_C::OnLoaded_1A44A8E142BEE6F800D2239A5867805D(class UClass* /*UObject*/ Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.OnLoaded_1A44A8E142BEE6F800D2239A5867805D"));

	struct
	{
		class UClass* /*UObject*/      Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.BP_OnSpawnLocationFound
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIFriendly_SpawnLocation_BP_C::BP_OnSpawnLocationFound(const struct FVector& SpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.BP_OnSpawnLocationFound"));

	struct
	{
		struct FVector                 SpawnLocation;
	} params = {};

	params.SpawnLocation = SpawnLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIFriendly_SpawnLocation_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.ExecuteUbergraph_AIFriendly_SpawnLocation_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAIFriendly_SpawnLocation_BP_C::ExecuteUbergraph_AIFriendly_SpawnLocation_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIFriendly_SpawnLocation_BP.AIFriendly_SpawnLocation_BP_C.ExecuteUbergraph_AIFriendly_SpawnLocation_BP"));

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
