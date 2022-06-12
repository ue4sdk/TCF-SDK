// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AAM_BossHunt_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.Ann_BossSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_BossHunt_BP_C::Ann_BossSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.Ann_BossSpawned"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.TriggerBossEncounter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYActivityLocation*      activityLocation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::TriggerBossEncounter(class AYActivityLocation* activityLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.TriggerBossEncounter"));

	struct
	{
		class AYActivityLocation*      activityLocation;
	} params = {};

	params.activityLocation = activityLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.BossSquadSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::BossSquadSpawned(class UYPersistentDataAISquad* PersistentSquadObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.BossSquadSpawned"));

	struct
	{
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params = {};

	params.PersistentSquadObject = PersistentSquadObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.ExecuteUbergraph_AAM_BossHunt_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::ExecuteUbergraph_AAM_BossHunt_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.ExecuteUbergraph_AAM_BossHunt_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
