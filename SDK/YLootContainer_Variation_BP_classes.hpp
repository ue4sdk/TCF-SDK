#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YLootContainer_Variation_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YLootContainer_Variation_BP.YLootContainer_Variation_BP_C
// 0x0010 (0x0560 - 0x0550)
class AYLootContainer_Variation_BP_C : public AYLootContainerVariation
{
public:
	struct FDataTableRowHandle                         LootContainerDefinition_PlacedInWorld;                    // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YLootContainer_Variation_BP.YLootContainer_Variation_BP_C"));
		return ptr;
	}


	struct FText BP_GetInteractionAvailableMessage(int numInputBindings);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
