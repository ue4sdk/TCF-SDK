#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_ActivityInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ActivityInterface.BPI_ActivityInterface_C
// 0x0000 (0x0030 - 0x0030)
class UBPI_ActivityInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_ActivityInterface.BPI_ActivityInterface_C"));
		return ptr;
	}


	void GetLootSpawnData(struct FDataTableRowHandle* LootDefinitionRow, EYLootContainerTier* lootTier, bool* IsContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
