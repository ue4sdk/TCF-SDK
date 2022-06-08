#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Interface_InventoryInteractions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_InventoryInteractions.Interface_InventoryInteractions_C
// 0x0000 (0x0030 - 0x0030)
class UInterface_InventoryInteractions_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Interface_InventoryInteractions.Interface_InventoryInteractions_C"));
		return ptr;
	}


	void OpenShop();
	void OpenFortunaPass();
	void OpenAurumShop();
	void OpenObjectiveList();
	void OpenInventory();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
