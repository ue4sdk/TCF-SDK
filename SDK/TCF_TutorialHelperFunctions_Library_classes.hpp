#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_TutorialHelperFunctions_Library_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C
// 0x0000 (0x0028 - 0x0028)
class UTutorialHelperFunctions_Library_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C");
		return ptr;
	}


	static void SendTutorialTncBIEvent(const struct FString& Action, int step, class UObject* __WorldContext);
	static void isTutorial(class UObject* WorldContextObject, class UObject* __WorldContext, bool* isTutorial);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
