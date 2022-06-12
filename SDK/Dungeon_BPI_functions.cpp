// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Dungeon_BPI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dungeon_BPI.Dungeon_BPI_C.DungeonPlayerLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  LeavingPlayer                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_BPI_C::DungeonPlayerLeft(class AActor* LeavingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonPlayerLeft"));

	struct
	{
		class AActor*                  LeavingPlayer;
	} params = {};

	params.LeavingPlayer = LeavingPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.DungeonPlayerEntered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  EnteringPlayer                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_BPI_C::DungeonPlayerEntered(class AActor* EnteringPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonPlayerEntered"));

	struct
	{
		class AActor*                  EnteringPlayer;
	} params = {};

	params.EnteringPlayer = EnteringPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.DungeonAddActorToCache
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorToAdd                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_BPI_C::DungeonAddActorToCache(class AActor* ActorToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonAddActorToCache"));

	struct
	{
		class AActor*                  ActorToAdd;
	} params = {};

	params.ActorToAdd = ActorToAdd;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.DungeonTrigger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TriggerCauser                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDungeon_BPI_C::DungeonTrigger(class AActor* TriggerCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonTrigger"));

	struct
	{
		class AActor*                  TriggerCauser;
	} params = {};

	params.TriggerCauser = TriggerCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.Debug_DungeonReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDungeon_BPI_C::Debug_DungeonReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.Debug_DungeonReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.DungeonReset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDungeon_BPI_C::DungeonReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonReset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Dungeon_BPI.Dungeon_BPI_C.DungeonInitiate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDungeon_BPI_C::DungeonInitiate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Dungeon_BPI.Dungeon_BPI_C.DungeonInitiate"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
