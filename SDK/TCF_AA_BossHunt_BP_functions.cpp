// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_BossHunt_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_BossHunt_BP.AA_BossHunt_BP_C.AddDMGtakentoCurrentDMGTaken
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::AddDMGtakentoCurrentDMGTaken(float B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.AddDMGtakentoCurrentDMGTaken"));

	struct
	{
		float                          B;
	} params;

	params.B = B;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.ResetThreshold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::ResetThreshold()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.ResetThreshold"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.DropMaterialsOnDMG
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::DropMaterialsOnDMG()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.DropMaterialsOnDMG"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.IsOverDMGThreshold
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AAA_BossHunt_BP_C::IsOverDMGThreshold()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.IsOverDMGThreshold"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnRep_BossWasKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::OnRep_BossWasKilled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnRep_BossWasKilled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.GetPlayerLocationClosestToBoss
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           FoundPlayer                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::GetPlayerLocationClosestToBoss(const struct FVector& SpawnLocation, bool* FoundPlayer, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.GetPlayerLocationClosestToBoss"));

	struct
	{
		struct FVector                 SpawnLocation;
		bool                           FoundPlayer;
		struct FVector                 Location;
	} params;

	params.SpawnLocation = SpawnLocation;

	UObject::ProcessEvent(fn, &params);

	if (FoundPlayer != nullptr)
		*FoundPlayer = params.FoundPlayer;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnReinforcementSquad
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Spawn_Location_Override        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::SpawnReinforcementSquad(const struct FVector& Spawn_Location_Override, class UYPersistentDataAISquad** PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnReinforcementSquad"));

	struct
	{
		struct FVector                 Spawn_Location_Override;
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.Spawn_Location_Override = Spawn_Location_Override;

	UObject::ProcessEvent(fn, &params);

	if (PersistentSquadObject != nullptr)
		*PersistentSquadObject = params.PersistentSquadObject;
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.GetCurrentBossHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HEALTH                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::GetCurrentBossHealth(float* HEALTH)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.GetCurrentBossHealth"));

	struct
	{
		float                          HEALTH;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HEALTH != nullptr)
		*HEALTH = params.HEALTH;
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckEncounterOverForBI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::CheckEncounterOverForBI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckEncounterOverForBI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.RecordDamageEventForBI
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDamageToBoss                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ACharacter*              BossCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::RecordDamageEventForBI(bool IsDamageToBoss, float Damage, class APlayerController* Player, class ACharacter* BossCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.RecordDamageEventForBI"));

	struct
	{
		bool                           IsDamageToBoss;
		float                          Damage;
		class APlayerController*       Player;
		class ACharacter*              BossCharacter;
	} params;

	params.IsDamageToBoss = IsDamageToBoss;
	params.Damage = Damage;
	params.Player = Player;
	params.BossCharacter = BossCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnBossDied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           characterDied                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::OnBossDied(class AYAICharacter* characterDied, class AActor* killer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnBossDied"));

	struct
	{
		class AYAICharacter*           characterDied;
		class AActor*                  killer;
	} params;

	params.characterDied = characterDied;
	params.killer = killer;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDamageToBoss                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ACharacter*              BossCharacter                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::BossDamage(bool IsDamageToBoss, float DamageAmount, class APlayerController* Player, class ACharacter* BossCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossDamage"));

	struct
	{
		bool                           IsDamageToBoss;
		float                          DamageAmount;
		class APlayerController*       Player;
		class ACharacter*              BossCharacter;
	} params;

	params.IsDamageToBoss = IsDamageToBoss;
	params.DamageAmount = DamageAmount;
	params.Player = Player;
	params.BossCharacter = BossCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement01
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Boss_Reinforcement01()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement01"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement02
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Boss_Reinforcement02()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement02"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement03
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Boss_Reinforcement03()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Boss_Reinforcement03"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.ReinforcementsEQSDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::ReinforcementsEQSDone(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.ReinforcementsEQSDone"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnAISpawned_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           characterSpawned               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::OnAISpawned_Event_1(class AYAICharacter* characterSpawned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnAISpawned_Event_1"));

	struct
	{
		class AYAICharacter*           characterSpawned;
	} params;

	params.characterSpawned = characterSpawned;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnTakeDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_BossHunt_BP_C::OnTakeDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnTakeDamage_Event_1"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnDealDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_BossHunt_BP_C::OnDealDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnDealDamage_Event_1"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossTakesDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void AAA_BossHunt_BP_C::BossTakesDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossTakesDamage"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossDealsDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ContainsInstancedReference)

void AAA_BossHunt_BP_C::BossDealsDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossDealsDamage"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::CheckHealth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckHealth"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::CheckDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.CheckDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_HalfHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Ann_HalfHealth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_HalfHealth"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_FirstDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Ann_FirstDamage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_FirstDamage"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_BossKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Ann_BossKilled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Ann_BossKilled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossCharacterSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYAICharacter*           SpawnedBossCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::BossCharacterSpawned(class AYAICharacter* SpawnedBossCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossCharacterSpawned"));

	struct
	{
		class AYAICharacter*           SpawnedBossCharacter;
	} params;

	params.SpawnedBossCharacter = SpawnedBossCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossGotKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::BossGotKilled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BossGotKilled"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.CurrentHealthChangedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::CurrentHealthChangedDelegate_Event_1(float CurrentHealth, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.CurrentHealthChangedDelegate_Event_1"));

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params;

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnPrimaryReinforcements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::SpawnPrimaryReinforcements()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnPrimaryReinforcements"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SecondaryEQSFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::SecondaryEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SecondaryEQSFinished"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnSecondaryReinforcements
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::SpawnSecondaryReinforcements(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnSecondaryReinforcements"));

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.PrimarySquadDied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* squadDied                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::PrimarySquadDied(class UYPersistentDataAISquad* squadDied, class AActor* killer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.PrimarySquadDied"));

	struct
	{
		class UYPersistentDataAISquad* squadDied;
		class AActor*                  killer;
	} params;

	params.squadDied = squadDied;
	params.killer = killer;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SecondarySquadDied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* squadDied                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  killer                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::SecondarySquadDied(class UYPersistentDataAISquad* squadDied, class AActor* killer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SecondarySquadDied"));

	struct
	{
		class UYPersistentDataAISquad* squadDied;
		class AActor*                  killer;
	} params;

	params.squadDied = squadDied;
	params.killer = killer;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Force Spawn Boss_Hunt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::Force_Spawn_Boss_Hunt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Force Spawn Boss_Hunt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnBoss
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::SpawnBoss()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SpawnBoss"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.UpdateMapMarkerProgressUntilBossSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Current                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::UpdateMapMarkerProgressUntilBossSpawn(int Current, int Max)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.UpdateMapMarkerProgressUntilBossSpawn"));

	struct
	{
		int                            Current;
		int                            Max;
	} params;

	params.Current = Current;
	params.Max = Max;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.AnnounceBossRevealed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::AnnounceBossRevealed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.AnnounceBossRevealed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.AIStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYAIState                      oldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYAIState                      currentState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::AIStateChanged_Event_1(EYAIState oldState, EYAIState currentState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.AIStateChanged_Event_1"));

	struct
	{
		EYAIState                      oldState;
		EYAIState                      currentState;
	} params;

	params.oldState = oldState;
	params.currentState = currentState;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.SetHealthToLastKnownValue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::SetHealthToLastKnownValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.SetHealthToLastKnownValue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.Spawn via EQS
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::Spawn_via_EQS(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.Spawn via EQS"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.RunSpawningEQS
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::RunSpawningEQS()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.RunSpawningEQS"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_BossHunt_BP_C::BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.BndEvt__YActivityComponent_K2Node_ComponentBoundEvent_1_OnSetupComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.ExecuteUbergraph_AA_BossHunt_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::ExecuteUbergraph_AA_BossHunt_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.ExecuteUbergraph_AA_BossHunt_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnBossSquadSpawned__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_BossHunt_BP_C::OnBossSquadSpawned__DelegateSignature(class UYPersistentDataAISquad* PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_BossHunt_BP.AA_BossHunt_BP_C.OnBossSquadSpawned__DelegateSignature"));

	struct
	{
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.PersistentSquadObject = PersistentSquadObject;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
