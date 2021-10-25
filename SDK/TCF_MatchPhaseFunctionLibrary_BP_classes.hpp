#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_MatchPhaseFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C
// 0x0000 (0x0028 - 0x0028)
class UMatchPhaseFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C");
		return ptr;
	}


	static void GetCurrentMatchPhaseVisualRow(class UObject* WorldContextObject, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VIsualRow, bool* Result);
	static void GetVisualRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VIsualRow, bool* Result);
	static void GetVisualRowFromDefinitionRow(const struct FYMatchPhaseDefinitionRow& DefinitionRow, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VIsualRow, bool* Result);
	static void GetVisualRowHandleFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FDataTableRowHandle* VisualRowHandle, bool* Result);
	static void GetCurrentMatchPhaseGameplayData(class UObject* WorldContextObject, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result);
	static void GetGameplayRowFromDefinitionRow(const struct FYMatchPhaseDefinitionRow& DefintionRow, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result);
	static void GetGameplayRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result);
	static void GetDefinitionRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FYMatchPhaseDefinitionRow* DefinitionRow, bool* Result);
	static void GetMatchPhaseDirectorComponent(class UObject* WorldContextObject, class UObject* __WorldContext, class UMatchPhaseDirectorComponent_BP_C** MatchPhaseDirector);
	static void IsUsingNewMatchPhaseFlow(class UObject* WorldContextObject, class UObject* __WorldContext, bool* IsUsingNewMatchPhaseFlow);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
