// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AL_LootContainers_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.GetLootContainerRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYAssetVariationDefinitionRow Out_Row                        (CPF_Parm, CPF_OutParm)

void AAL_LootContainers_Base_BP_C::GetLootContainerRow(struct FYAssetVariationDefinitionRow* Out_Row)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.GetLootContainerRow"));

	struct
	{
		struct FYAssetVariationDefinitionRow Out_Row;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAL_LootContainers_Base_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.GetDebugDescription"));

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAL_LootContainers_Base_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AL_LootContainers_Base_BP.AL_LootContainers_Base_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
