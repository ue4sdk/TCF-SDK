#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dungeon_HelperFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dungeon_HelperFunctions.Dungeon_HelperFunctions_C
// 0x0000 (0x0030 - 0x0030)
class UDungeon_HelperFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Dungeon_HelperFunctions.Dungeon_HelperFunctions_C"));
		return ptr;
	}


	static void HighlightConnectedActorsDEBUG(class AActor* ThisActor, const struct FString& DebugText, class UObject* __WorldContext, TArray<class AActor*>* ConnectedActors);
	static void Register_with_Dungeon_Manager(class AActor* Actor, float MaxFindRange, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
