#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_EndOfMatchFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C
// 0x0000 (0x0028 - 0x0028)
class UEndOfMatchFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EndOfMatchFunctions_BP.EndOfMatchFunctions_BP_C");
		return ptr;
	}


	static bool HasPlayerDied(class AActor* actorContext, class UObject* __WorldContext);
	static void TravelBackToStation(class UObject* playerContext, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
