#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PickUpActorFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PickUpActorFunctions_BP.PickUpActorFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class UPickUpActorFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PickUpActorFunctions_BP.PickUpActorFunctions_BP_C"));
		return ptr;
	}


	static void OffsetPickUpMesh(class AYPickupActor* pickUpActor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
