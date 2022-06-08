// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AL_LootPoint_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetLootSpawnData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     LootDefinitionRow              (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// EYLootContainerTier            lootTier                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsContainer                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAL_LootPoint_BP_C::GetLootSpawnData(struct FDataTableRowHandle* LootDefinitionRow, EYLootContainerTier* lootTier, bool* IsContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetLootSpawnData"));

	struct
	{
		struct FDataTableRowHandle     LootDefinitionRow;
		EYLootContainerTier            lootTier;
		bool                           IsContainer;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootDefinitionRow != nullptr)
		*LootDefinitionRow = params.LootDefinitionRow;
	if (lootTier != nullptr)
		*lootTier = params.lootTier;
	if (IsContainer != nullptr)
		*IsContainer = params.IsContainer;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.UpdateDebugText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_LootPoint_BP_C::UpdateDebugText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.UpdateDebugText"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.SnapToSurface
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_LootPoint_BP_C::SnapToSurface()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.SnapToSurface"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAL_LootPoint_BP_C::GetDebugDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetDebugDescription"));

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


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.DetermineLootListEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     LootListEntry                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAL_LootPoint_BP_C::DetermineLootListEntry(struct FDataTableRowHandle* LootListEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.DetermineLootListEntry"));

	struct
	{
		struct FDataTableRowHandle     LootListEntry;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (LootListEntry != nullptr)
		*LootListEntry = params.LootListEntry;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetInteractableTestPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         RandomPoints                   (CPF_Parm, CPF_OutParm)

void AAL_LootPoint_BP_C::GetInteractableTestPoints(TArray<struct FVector>* RandomPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetInteractableTestPoints"));

	struct
	{
		TArray<struct FVector>         RandomPoints;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (RandomPoints != nullptr)
		*RandomPoints = params.RandomPoints;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_LootPoint_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.UserConstructionScript"));

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
