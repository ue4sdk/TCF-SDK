// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AILootSpawningComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.SpawnLoot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYLootItemAmount> LootItems                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AYAICharacter*           aiCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UAILootSpawningComponent_BP_C::SpawnLoot(class AYAICharacter* aiCharacter, TArray<struct FYLootItemAmount>* LootItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.SpawnLoot"));

	struct
	{
		TArray<struct FYLootItemAmount> LootItems;
		class AYAICharacter*           aiCharacter;
	} params = {};

	params.aiCharacter = aiCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootItems != nullptr)
		*LootItems = params.LootItems;
}


// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.DetermineAILoot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           aiCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FYLootItemAmount> LootItems                      (CPF_Parm, CPF_OutParm)

void UAILootSpawningComponent_BP_C::DetermineAILoot(class AYAICharacter* aiCharacter, TArray<struct FYLootItemAmount>* LootItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.DetermineAILoot"));

	struct
	{
		class AYAICharacter*           aiCharacter;
		TArray<struct FYLootItemAmount> LootItems;
	} params = {};

	params.aiCharacter = aiCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootItems != nullptr)
		*LootItems = params.LootItems;
}


// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAILootSpawningComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.BP_OnAICharacterAdded_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAILootSpawningComponent_BP_C::BP_OnAICharacterAdded_Event_1(class AYAICharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.BP_OnAICharacterAdded_Event_1"));

	struct
	{
		class AYAICharacter*           Character;
	} params = {};

	params.Character = Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.HealthEmptyDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAILootSpawningComponent_BP_C::HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.HealthEmptyDelegate_Event_1"));

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params = {};

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.ExecuteUbergraph_AILootSpawningComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAILootSpawningComponent_BP_C::ExecuteUbergraph_AILootSpawningComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AILootSpawningComponent_BP.AILootSpawningComponent_BP_C.ExecuteUbergraph_AILootSpawningComponent_BP"));

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
