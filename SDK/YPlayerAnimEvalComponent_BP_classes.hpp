#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerAnimEvalComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass YPlayerAnimEvalComponent_BP.YPlayerAnimEvalComponent_BP_C
// 0x0000 (0x00B8 - 0x00B8)
class UYPlayerAnimEvalComponent_BP_C : public UYPlayerAnimEvalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass YPlayerAnimEvalComponent_BP.YPlayerAnimEvalComponent_BP_C"));
		return ptr;
	}


	struct FGameplayTagContainer GetAnimationDeathTags();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
