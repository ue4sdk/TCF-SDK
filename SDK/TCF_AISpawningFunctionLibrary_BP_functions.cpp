// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AISpawningFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.LogSpawnError
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 contextObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     OptionalDT                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FString                 contextString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAISpawningFunctionLibrary_BP_C::LogSpawnError(class UObject* contextObject, const struct FDataTableRowHandle& OptionalDT, const struct FString& contextString, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.LogSpawnError");

	struct
	{
		class UObject*                 contextObject;
		struct FDataTableRowHandle     OptionalDT;
		struct FString                 contextString;
		class UObject*                 __WorldContext;
	} params;

	params.contextObject = contextObject;
	params.OptionalDT = OptionalDT;
	params.contextString = contextString;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.GetAIsToSpawnFromDT
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FYSquadAIType>   Result                         (CPF_Parm, CPF_OutParm)

void UAISpawningFunctionLibrary_BP_C::GetAIsToSpawnFromDT(const struct FDataTableRowHandle& DataTableRowHandle, class UObject* Context, class UObject* __WorldContext, TArray<struct FYSquadAIType>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.GetAIsToSpawnFromDT");

	struct
	{
		struct FDataTableRowHandle     DataTableRowHandle;
		class UObject*                 Context;
		class UObject*                 __WorldContext;
		TArray<struct FYSquadAIType>   Result;
	} params;

	params.DataTableRowHandle = DataTableRowHandle;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadSpecificAIs
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAISquadSpawnDefinition m_spawnDefinition              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<struct FYSquadAIType>   SpawnAis                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAISpawningFunctionLibrary_BP_C::SpawnAISquadSpecificAIs(const struct FYAISquadSpawnDefinition& m_spawnDefinition, class UObject* __WorldContext, TArray<struct FYSquadAIType>* SpawnAis, class UYPersistentDataAISquad** PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadSpecificAIs");

	struct
	{
		struct FYAISquadSpawnDefinition m_spawnDefinition;
		TArray<struct FYSquadAIType>   SpawnAis;
		class UObject*                 __WorldContext;
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.m_spawnDefinition = m_spawnDefinition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SpawnAis != nullptr)
		*SpawnAis = params.SpawnAis;
	if (PersistentSquadObject != nullptr)
		*PersistentSquadObject = params.PersistentSquadObject;
}


// Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadFromDT
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAISquadSpawnDefinition SpawnDefinition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FDataTableRowHandle     AISquadRowHandle               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// class UObject*                 contextObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAISpawningFunctionLibrary_BP_C::SpawnAISquadFromDT(const struct FYAISquadSpawnDefinition& SpawnDefinition, const struct FDataTableRowHandle& AISquadRowHandle, class UObject* contextObject, class UObject* __WorldContext, class UYPersistentDataAISquad** PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadFromDT");

	struct
	{
		struct FYAISquadSpawnDefinition SpawnDefinition;
		struct FDataTableRowHandle     AISquadRowHandle;
		class UObject*                 contextObject;
		class UObject*                 __WorldContext;
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.SpawnDefinition = SpawnDefinition;
	params.AISquadRowHandle = AISquadRowHandle;
	params.contextObject = contextObject;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PersistentSquadObject != nullptr)
		*PersistentSquadObject = params.PersistentSquadObject;
}


// Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadGeneric
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAISquadSpawnDefinition SpawnDefinition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UYPersistentDataAISquad* PersistentSquadObject          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAISpawningFunctionLibrary_BP_C::SpawnAISquadGeneric(const struct FYAISquadSpawnDefinition& SpawnDefinition, class UObject* __WorldContext, class UYPersistentDataAISquad** PersistentSquadObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AISpawningFunctionLibrary_BP.AISpawningFunctionLibrary_BP_C.SpawnAISquadGeneric");

	struct
	{
		struct FYAISquadSpawnDefinition SpawnDefinition;
		class UObject*                 __WorldContext;
		class UYPersistentDataAISquad* PersistentSquadObject;
	} params;

	params.SpawnDefinition = SpawnDefinition;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PersistentSquadObject != nullptr)
		*PersistentSquadObject = params.PersistentSquadObject;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
