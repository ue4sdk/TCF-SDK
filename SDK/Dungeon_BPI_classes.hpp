#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dungeon_BPI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dungeon_BPI.Dungeon_BPI_C
// 0x0000 (0x0030 - 0x0030)
class UDungeon_BPI_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Dungeon_BPI.Dungeon_BPI_C"));
		return ptr;
	}


	void DungeonPlayerLeft(class AActor* LeavingPlayer);
	void DungeonPlayerEntered(class AActor* EnteringPlayer);
	void DungeonAddActorToCache(class AActor* ActorToAdd);
	void DungeonTrigger(class AActor* TriggerCauser);
	void Debug_DungeonReset();
	void DungeonReset();
	void DungeonInitiate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
