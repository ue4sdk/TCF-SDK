// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AL_LootPoint_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAL_LootPoint_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetLootListEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     LootListEntry                  (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void AAL_LootPoint_BP_C::GetLootListEntry(struct FDataTableRowHandle* LootListEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetLootListEntry"));

	struct
	{
		struct FDataTableRowHandle     LootListEntry;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LootListEntry != nullptr)
		*LootListEntry = params.LootListEntry;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetInteractableTestPoints
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         RandomPoints                   (CPF_Parm, CPF_OutParm)

void AAL_LootPoint_BP_C::GetInteractableTestPoints(TArray<struct FVector>* RandomPoints)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.GetInteractableTestPoints"));

	struct
	{
		TArray<struct FVector>         RandomPoints;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RandomPoints != nullptr)
		*RandomPoints = params.RandomPoints;
}


// Function AL_LootPoint_BP.AL_LootPoint_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_LootPoint_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootPoint_BP.AL_LootPoint_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
