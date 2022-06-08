#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ActivityBIHookFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActivityBIHookFunctions_BP.ActivityBIHookFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class UActivityBIHookFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ActivityBIHookFunctions_BP.ActivityBIHookFunctions_BP_C"));
		return ptr;
	}


	void SendPlayerEscapeBIHook(EYEscapeBIHookStep step, class AActor* playerContext, const struct FString& escapeShipId, const struct FString& EvacID, class AActor* ReferenceActor, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
