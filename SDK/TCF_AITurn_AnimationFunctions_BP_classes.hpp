#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AITurn_AnimationFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C
// 0x0000 (0x0028 - 0x0028)
class UAITurn_AnimationFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AITurn_AnimationFunctions_BP.AITurn_AnimationFunctions_BP_C");
		return ptr;
	}


	static void FindBestAngle(float DesiredAngle, class UObject* __WorldContext, struct FYAITurnAnimationsData* TurnAnimations, struct FYAITurnAnimation* TurnAnimation);
	static void DetermineTurnAnimation(const struct FDataTableRowHandle& rowHandle, class APawn* Pawn, float DesiredAngle, class UObject* __WorldContext, struct FYAIMontagePlayInfo* MontagePlayInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
