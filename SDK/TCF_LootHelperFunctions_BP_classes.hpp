#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LootHelperFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LootHelperFunctions_BP.LootHelperFunctions_BP_C
// 0x0000 (0x0028 - 0x0028)
class ULootHelperFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LootHelperFunctions_BP.LootHelperFunctions_BP_C");
		return ptr;
	}


	static void IsLootActorVisible(class AYPickupActor* pickUpActor, class APlayerController* PlayerController, class UObject* __WorldContext, bool* Result);
	static void GetNameSafe(class UObject* Object, class UObject* __WorldContext, struct FString* String);
	bool IsValidLootListEntry(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
