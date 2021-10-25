#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YControllerCraftingComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YControllerCraftingComponent_BP.YControllerCraftingComponent_BP_C
// 0x0000 (0x0148 - 0x0148)
class UYControllerCraftingComponent_BP_C : public UYControllerCraftingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass YControllerCraftingComponent_BP.YControllerCraftingComponent_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
