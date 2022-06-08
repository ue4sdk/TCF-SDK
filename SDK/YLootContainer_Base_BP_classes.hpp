#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YLootContainer_Base_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YLootContainer_Base_BP.YLootContainer_Base_BP_C
// 0x0000 (0x04F8 - 0x04F8)
class AYLootContainer_Base_BP_C : public AYLootContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YLootContainer_Base_BP.YLootContainer_Base_BP_C"));
		return ptr;
	}


	struct FString GetDebugDescription();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
