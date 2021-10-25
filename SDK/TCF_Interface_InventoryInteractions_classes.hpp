#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Interface_InventoryInteractions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_InventoryInteractions.Interface_InventoryInteractions_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_InventoryInteractions_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Interface_InventoryInteractions.Interface_InventoryInteractions_C");
		return ptr;
	}


	void OpenInventory();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
