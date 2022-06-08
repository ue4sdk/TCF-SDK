#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ContractFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ContractFunctions_BP.ContractFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class UContractFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ContractFunctions_BP.ContractFunctions_BP_C"));
		return ptr;
	}


	static void DetermineOwnNumItemDescription(const struct FDataTableRowHandle& itemRowHandle, class UObject* WorldContext, class UObject* __WorldContext, struct FText* Result);
	static void DetermineContractShortDescriptionFromRow(class UObject* WorldContext, class UObject* __WorldContext, struct FYContractRow* ContractRow, struct FText* ShortDescription);
	static void DetermineContractShortDescription(const struct FDataTableRowHandle& contractRowHandle, class UObject* WorldContext, class UObject* __WorldContext, struct FText* ShortDescription);
	static void ToContractRowHandle(const struct FString& Row_Name, class UObject* __WorldContext, struct FDataTableRowHandle* rowHandle);
	static void DetermineContractName(class UObject* objectContext, const struct FDataTableRowHandle& contractRowHandle, class UObject* __WorldContext, struct FText* Result);
	static void TryActivateContractDebug(class UObject* playerContext, const struct FDataTableRowHandle& contract, class UObject* __WorldContext, bool* Result);
	static void GetContractRow(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext, struct FYContractRow* Out_Row);
	static struct FDataTableRowHandle GetFactionRowHandle(EYFaction Index, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
