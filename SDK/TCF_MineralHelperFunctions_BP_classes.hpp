#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MineralHelperFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MineralHelperFunctions_BP.MineralHelperFunctions_BP_C
// 0x0000 (0x0028 - 0x0028)
class UMineralHelperFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MineralHelperFunctions_BP.MineralHelperFunctions_BP_C"));
		return ptr;
	}


	static void TryGetMineralVariationRow(const struct FDataTableRowHandle& MineralRowHandle, class UObject* __WorldContext, struct FYMineralDefinitionRow* MineralRow, bool* Valid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
