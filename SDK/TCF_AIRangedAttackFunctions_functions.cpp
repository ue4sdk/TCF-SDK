// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIRangedAttackFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.GetVFXDataFromWeaponTransportRowHandle
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     inWeaponTransportHandle        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYFXCategoryRow         OutFXCategory                  (CPF_Parm, CPF_OutParm)
// bool                           bSuccessfull                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAIRangedAttackFunctions_C::GetVFXDataFromWeaponTransportRowHandle(const struct FDataTableRowHandle& inWeaponTransportHandle, class UObject* __WorldContext, struct FYFXCategoryRow* OutFXCategory, bool* bSuccessfull)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.GetVFXDataFromWeaponTransportRowHandle");

	struct
	{
		struct FDataTableRowHandle     inWeaponTransportHandle;
		class UObject*                 __WorldContext;
		struct FYFXCategoryRow         OutFXCategory;
		bool                           bSuccessfull;
	} params;

	params.inWeaponTransportHandle = inWeaponTransportHandle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutFXCategory != nullptr)
		*OutFXCategory = params.OutFXCategory;
	if (bSuccessfull != nullptr)
		*bSuccessfull = params.bSuccessfull;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.PlayMuzzleFXFromRangedAttackDefinitionNew
// (FUNC_Static, FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InWeaponTransportRowHandle     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class AActor*                  InAICharacterOwner             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::PlayMuzzleFXFromRangedAttackDefinitionNew(const struct FDataTableRowHandle& InWeaponTransportRowHandle, class AActor* InAICharacterOwner, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.PlayMuzzleFXFromRangedAttackDefinitionNew");

	struct
	{
		struct FDataTableRowHandle     InWeaponTransportRowHandle;
		class AActor*                  InAICharacterOwner;
		class UObject*                 __WorldContext;
	} params;

	params.InWeaponTransportRowHandle = InWeaponTransportRowHandle;
	params.InAICharacterOwner = InAICharacterOwner;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Fire Projectile Now from Ranged Attack Definition
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           AIAttacker                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AYProjectile*            PreSpawnedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::Fire_Projectile_Now_from_Ranged_Attack_Definition(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class AYProjectile* PreSpawnedActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Fire Projectile Now from Ranged Attack Definition");

	struct
	{
		class AYAICharacter*           AIAttacker;
		class AActor*                  Victim;
		struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition;
		class AYProjectile*            PreSpawnedActor;
		class UObject*                 __WorldContext;
	} params;

	params.AIAttacker = AIAttacker;
	params.Victim = Victim;
	params.AIRangedAttackDefinition = AIRangedAttackDefinition;
	params.PreSpawnedActor = PreSpawnedActor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineAttackLocation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorVictim                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 AttackLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::DetermineAttackLocation(class AActor* ActorVictim, class UObject* __WorldContext, struct FVector* AttackLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineAttackLocation");

	struct
	{
		class AActor*                  ActorVictim;
		class UObject*                 __WorldContext;
		struct FVector                 AttackLocation;
	} params;

	params.ActorVictim = ActorVictim;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AttackLocation != nullptr)
		*AttackLocation = params.AttackLocation;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineVelocityLaunchFromRangedAttackDefinition
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           Shooter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 LaunchVelocity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          GravityZMultiplier             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::DetermineVelocityLaunchFromRangedAttackDefinition(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class UObject* __WorldContext, struct FVector* LaunchVelocity, float* GravityZMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineVelocityLaunchFromRangedAttackDefinition");

	struct
	{
		class AYAICharacter*           Shooter;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition;
		class UObject*                 __WorldContext;
		struct FVector                 LaunchVelocity;
		float                          GravityZMultiplier;
	} params;

	params.Shooter = Shooter;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.AIRangedAttackDefinition = AIRangedAttackDefinition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LaunchVelocity != nullptr)
		*LaunchVelocity = params.LaunchVelocity;
	if (GravityZMultiplier != nullptr)
		*GravityZMultiplier = params.GravityZMultiplier;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineVelocityLaunch
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           Shooter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            AIAttackIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 LaunchVelocity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          GravityZMultiplier             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::DetermineVelocityLaunch(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, int AIAttackIndex, class UObject* __WorldContext, struct FVector* LaunchVelocity, float* GravityZMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineVelocityLaunch");

	struct
	{
		class AYAICharacter*           Shooter;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		int                            AIAttackIndex;
		class UObject*                 __WorldContext;
		struct FVector                 LaunchVelocity;
		float                          GravityZMultiplier;
	} params;

	params.Shooter = Shooter;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.AIAttackIndex = AIAttackIndex;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LaunchVelocity != nullptr)
		*LaunchVelocity = params.LaunchVelocity;
	if (GravityZMultiplier != nullptr)
		*GravityZMultiplier = params.GravityZMultiplier;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineTimeItTakesForProjectileToLocationFromRangedAttackDefinition
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           Shooter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIRangedAttackDefinitionNew AIAttackIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::DetermineTimeItTakesForProjectileToLocationFromRangedAttackDefinition(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, const struct FYAIRangedAttackDefinitionNew& AIAttackIndex, class UObject* __WorldContext, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineTimeItTakesForProjectileToLocationFromRangedAttackDefinition");

	struct
	{
		class AYAICharacter*           Shooter;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		struct FYAIRangedAttackDefinitionNew AIAttackIndex;
		class UObject*                 __WorldContext;
		float                          Time;
	} params;

	params.Shooter = Shooter;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.AIAttackIndex = AIAttackIndex;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineTimeItTakesForProjectileToLocation
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           Shooter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            AIAttackIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::DetermineTimeItTakesForProjectileToLocation(class AYAICharacter* Shooter, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, int AIAttackIndex, class UObject* __WorldContext, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.DetermineTimeItTakesForProjectileToLocation");

	struct
	{
		class AYAICharacter*           Shooter;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		int                            AIAttackIndex;
		class UObject*                 __WorldContext;
		float                          Time;
	} params;

	params.Shooter = Shooter;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.AIAttackIndex = AIAttackIndex;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.ApplyWeaponSpread
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYAICharacter*           Attacker                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DirectionAdjusted              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::ApplyWeaponSpread(const struct FVector& Direction, class AYAICharacter* Attacker, class UObject* __WorldContext, struct FVector* DirectionAdjusted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.ApplyWeaponSpread");

	struct
	{
		struct FVector                 Direction;
		class AYAICharacter*           Attacker;
		class UObject*                 __WorldContext;
		struct FVector                 DirectionAdjusted;
	} params;

	params.Direction = Direction;
	params.Attacker = Attacker;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DirectionAdjusted != nullptr)
		*DirectionAdjusted = params.DirectionAdjusted;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.TryAdjustShootAtLocationByTraceDown
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShootAtGround                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 WorldContextObj                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootAtLocationAdjusted        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::TryAdjustShootAtLocationByTraceDown(const struct FVector& shootAtLocation, bool ShootAtGround, class UObject* WorldContextObj, class UObject* __WorldContext, struct FVector* ShootAtLocationAdjusted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.TryAdjustShootAtLocationByTraceDown");

	struct
	{
		struct FVector                 shootAtLocation;
		bool                           ShootAtGround;
		class UObject*                 WorldContextObj;
		class UObject*                 __WorldContext;
		struct FVector                 ShootAtLocationAdjusted;
	} params;

	params.shootAtLocation = shootAtLocation;
	params.ShootAtGround = ShootAtGround;
	params.WorldContextObj = WorldContextObj;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ShootAtLocationAdjusted != nullptr)
		*ShootAtLocationAdjusted = params.ShootAtLocationAdjusted;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Predicated Target LocationFromRangedAttackDefinition
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           AIAttacker                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Accuracy                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootAtLocationPredicted       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::Predicated_Target_LocationFromRangedAttackDefinition(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, float Accuracy, const struct FYAIRangedAttackDefinitionNew& AIRangedAttackDefinition, class UObject* __WorldContext, struct FVector* ShootAtLocationPredicted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Predicated Target LocationFromRangedAttackDefinition");

	struct
	{
		class AYAICharacter*           AIAttacker;
		class AActor*                  Victim;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		float                          Accuracy;
		struct FYAIRangedAttackDefinitionNew AIRangedAttackDefinition;
		class UObject*                 __WorldContext;
		struct FVector                 ShootAtLocationPredicted;
	} params;

	params.AIAttacker = AIAttacker;
	params.Victim = Victim;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.Accuracy = Accuracy;
	params.AIRangedAttackDefinition = AIRangedAttackDefinition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ShootAtLocationPredicted != nullptr)
		*ShootAtLocationPredicted = params.ShootAtLocationPredicted;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Predicated Target Location
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           AIAttacker                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootFromLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 shootAtLocation                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Accuracy                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ShootAtLocationPredicted       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::Predicated_Target_Location(class AYAICharacter* AIAttacker, class AActor* Victim, const struct FVector& ShootFromLocation, const struct FVector& shootAtLocation, float Accuracy, class UObject* __WorldContext, struct FVector* ShootAtLocationPredicted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.Predicated Target Location");

	struct
	{
		class AYAICharacter*           AIAttacker;
		class AActor*                  Victim;
		struct FVector                 ShootFromLocation;
		struct FVector                 shootAtLocation;
		float                          Accuracy;
		class UObject*                 __WorldContext;
		struct FVector                 ShootAtLocationPredicted;
	} params;

	params.AIAttacker = AIAttacker;
	params.Victim = Victim;
	params.ShootFromLocation = ShootFromLocation;
	params.shootAtLocation = shootAtLocation;
	params.Accuracy = Accuracy;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ShootAtLocationPredicted != nullptr)
		*ShootAtLocationPredicted = params.ShootAtLocationPredicted;
}


// Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.FireProjectileNow
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           AIAttacker                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RangedAttackIndex              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIRangedAttackFunctions_C::FireProjectileNow(class AYAICharacter* AIAttacker, class AActor* Victim, int RangedAttackIndex, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIRangedAttackFunctions.AIRangedAttackFunctions_C.FireProjectileNow");

	struct
	{
		class AYAICharacter*           AIAttacker;
		class AActor*                  Victim;
		int                            RangedAttackIndex;
		class UObject*                 __WorldContext;
	} params;

	params.AIAttacker = AIAttacker;
	params.Victim = Victim;
	params.RangedAttackIndex = RangedAttackIndex;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
