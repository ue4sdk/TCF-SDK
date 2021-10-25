// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Interface_InventoryInteractions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_InventoryInteractions.Interface_InventoryInteractions_C.OpenInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UInterface_InventoryInteractions_C::OpenInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_InventoryInteractions.Interface_InventoryInteractions_C.OpenInventory");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
