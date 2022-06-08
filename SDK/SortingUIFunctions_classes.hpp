#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SortingUIFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SortingUIFunctions.SortingUIFunctions_C
// 0x0000 (0x0030 - 0x0030)
class USortingUIFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SortingUIFunctions.SortingUIFunctions_C"));
		return ptr;
	}


	static void SortingModeChanged(class UWBP_InputKeyNavigation_C* Target, class UObject* __WorldContext);
	static void HandleUIInputSorting(const struct FName& InputName, class UObject* WorldContext, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
