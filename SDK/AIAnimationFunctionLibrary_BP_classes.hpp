#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIAnimationFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAnimationFunctionLibrary_BP.AIAnimationFunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UAIAnimationFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AIAnimationFunctionLibrary_BP.AIAnimationFunctionLibrary_BP_C"));
		return ptr;
	}


	static void GetDeathAnimationTypeFromBoneName(class AActor* Character, const struct FName& BoneName, class UObject* __WorldContext, EYAIWeakSpotDeathAnimType* DeathAnimType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
