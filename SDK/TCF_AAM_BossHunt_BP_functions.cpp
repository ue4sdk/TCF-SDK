// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AAM_BossHunt_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.Ann_BossSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAAM_BossHunt_BP_C::Ann_BossSpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.Ann_BossSpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.TriggerBossEncounter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAL_Generic_BP_C*        activityLocation               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::TriggerBossEncounter(class AAL_Generic_BP_C* activityLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.TriggerBossEncounter"));

	struct
	{
		class AAL_Generic_BP_C*        activityLocation;
	} params;

	params.activityLocation = activityLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.BossSquadSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::BossSquadSpawned(class UYPersistentDataAISquad* PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.BossSquadSpawned"));

	struct
	{
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.PersistentSquadObject = PersistentSquadObject;

	UObject::ProcessEvent(fn, &params);
}


// Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.ExecuteUbergraph_AAM_BossHunt_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAAM_BossHunt_BP_C::ExecuteUbergraph_AAM_BossHunt_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AAM_BossHunt_BP.AAM_BossHunt_BP_C.ExecuteUbergraph_AAM_BossHunt_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
