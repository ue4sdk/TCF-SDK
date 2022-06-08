// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_ActivityInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_ActivityInterface.BPI_ActivityInterface_C.GetLootSpawnData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     LootDefinitionRow              (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// EYLootContainerTier            lootTier                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsContainer                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPI_ActivityInterface_C::GetLootSpawnData(struct FDataTableRowHandle* LootDefinitionRow, EYLootContainerTier* lootTier, bool* IsContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_ActivityInterface.BPI_ActivityInterface_C.GetLootSpawnData"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
