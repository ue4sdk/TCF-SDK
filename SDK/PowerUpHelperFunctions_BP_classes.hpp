#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PowerUpHelperFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class UPowerUpHelperFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PowerUpHelperFunctions_BP.PowerUpHelperFunctions_BP_C"));
		return ptr;
	}


	static void PowerupRelevantUpdate(bool IsRelevant, class UObject* __WorldContext, TArray<class UActorComponent*>* SM_Components);
	static void FindConfigurator(class AActor* PowerUpActor, class UObject* __WorldContext, class AAA_Powerup_Configurator_BP_C** ConfiguratorActor, bool* success, struct FString* errorMessage);
	static bool HasRecentlyAttackedHostilePlayer(class APlayerController* Player, float timeLimit, class UObject* __WorldContext);
	static class AAAM_PowerUp_BP_C* GetPowerUpActivity(class UObject* __WorldContext);
	static void DeterminePowerUpID(class AActor* PowerUpActor, class UObject* __WorldContext, struct FString* PowerUpID);
	static bool HasBeenRecentlyAttackedByHostilePlayer(class APlayerController* Player, float timeLimit, class UObject* __WorldContext);
	static void SendPowerUpBiData(class AActor* PowerUpActor, class APlayerController* PlayerController, TEnumAsByte<EYBIHookPowerUpStep> PowerUpStep, class UObject* __WorldContext);
	static void PropagatePowerStatus(bool IsPowered, class AActor* powerProvider, class UObject* __WorldContext, TArray<class AActor*>* Array);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
