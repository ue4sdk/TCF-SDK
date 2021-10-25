#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIBehaviorFunctionLibraryBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIBehaviorFunctionLibraryBP.AIBehaviorFunctionLibraryBP_C
// 0x0000 (0x0028 - 0x0028)
class UAIBehaviorFunctionLibraryBP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIBehaviorFunctionLibraryBP.AIBehaviorFunctionLibraryBP_C");
		return ptr;
	}


	static void EvalRootMotionMontage(class AYAICharacter* CharacterAI, class UAnimMontage* Montage, class UObject* __WorldContext, bool* SUCCESS);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
