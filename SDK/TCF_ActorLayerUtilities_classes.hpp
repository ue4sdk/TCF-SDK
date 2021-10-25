#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ActorLayerUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorLayerUtilities.LayersBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ActorLayerUtilities.LayersBlueprintLibrary");
		return ptr;
	}


	static void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
	static TArray<class AActor*> GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
	static void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
