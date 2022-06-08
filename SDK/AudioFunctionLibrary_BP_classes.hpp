#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AudioFunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UAudioFunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AudioFunctionLibrary_BP.AudioFunctionLibrary_BP_C"));
		return ptr;
	}


	static void PlayAudioByTag(class UObject* contextObject, const struct FGameplayTag& AudioTag, class UObject* __WorldContext);
	static bool IsHandleForAnnouncementData(const struct FYAnnouncementPlayEntryData& AnnouncementData, const struct FDataTableRowHandle& rowHandle, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
