#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIRangedAttackFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIRangedAttackFunctions.AIRangedAttackFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UAIRangedAttackFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIRangedAttackFunctions.AIRangedAttackFunctions_C");
		return ptr;
	}


	static void GetVFXDataFromWeaponTransportRowHandle(const struct FDataTableRowHandle& inWeaponTransportHandle, class UObject* __WorldContext, struct FYFXCategoryRow* OutFXCategory, bool* bSuccessfull);
	static void PlayMuzzleFXFromRangedAttackDefinitionNew(const struct FDataTableRowHandle& InWeaponTransportRowHandle, class AActor* InAICharacterOwner, class UObject* __WorldContext);
	static void Fire_Projectile_Now_from_Ranged_Attack_Definition(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class AYProjectile* PreSpawnedActor, class UObject* __WorldContext);
	static void DetermineAttackLocation(class AActor* ActorVictim, class UObject* __WorldContext, struct FVector* AttackLocation);
	static void DetermineVelocityLaunchFromRangedAttackDefinition(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class UObject* __WorldContext, struct FVector* LaunchVelocity, float* GravityZMultiplier);
	static void DetermineVelocityLaunch(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, int AIAttackIndex, class UObject* __WorldContext, struct FVector* LaunchVelocity, float* GravityZMultiplier);
	static void DetermineTimeItTakesForProjectileToLocationFromRangedAttackDefinition(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, const struct FYAIRangedAttackDefinitionNew& AIAttackIndex, class UObject* __WorldContext, float* Time);
	static void DetermineTimeItTakesForProjectileToLocation(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, int AIAttackIndex, class UObject* __WorldContext, float* Time);
	static void ApplyWeaponSpread(const struct FVector& Direction, class AYAICharacter* Attacker, class UObject* __WorldContext, struct FVector* DirectionAdjusted);
	static void TryAdjustShootAtLocationByTraceDown(const struct FVector& shootAtLocation, bool ShootAtGround, class UObject* WorldContextObj, class UObject* __WorldContext, struct FVector* ShootAtLocationAdjusted);
	static void Predicated_Target_LocationFromRangedAttackDefinition(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, float Accuracy, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class UObject* __WorldContext, struct FVector* ShootAtLocationPredicted);
	static void Predicated_Target_Location(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, float Accuracy, class UObject* __WorldContext, struct FVector* ShootAtLocationPredicted);
	static void FireProjectileNow(class AYAICharacter* AIAttacker, class AActor* Victim, int RangedAttackIndex, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
