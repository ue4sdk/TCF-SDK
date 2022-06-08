#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UMatchPhaseFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C"));
		return ptr;
	}


	static void GetVisualRowHandleFromVariations(int VariationIndex, class UObject* __WorldContext, TArray<struct FYMatchPhaseVisualVariation>* Variations, struct FDataTableRowHandle* Visual_Definition, bool* Result);
	static void GetCurrentMatchPhaseVisualRow(class UObject* WorldContextObject, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result);
	static void GetVisualRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, int VariationIndex, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result);
	static void GetVisualRowFromDefinitionRow(const struct FYMatchPhaseDefinitionRow& DefinitionRow, int VariationIndex, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result);
	static void GetVisualRowHandleFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, int visualVariationIndex, class UObject* __WorldContext, struct FDataTableRowHandle* VisualRowHandle, bool* Result);
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
