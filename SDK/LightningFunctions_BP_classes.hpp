#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LightningFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightningFunctions_BP.LightningFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class ULightningFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LightningFunctions_BP.LightningFunctions_BP_C"));
		return ptr;
	}


	static void IsStormLightningDebugEnabled(class UObject* __WorldContext, int* DebugLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
