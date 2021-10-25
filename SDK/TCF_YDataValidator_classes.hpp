#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YDataValidator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YDataValidator.YAssetCheckerDataAsset
// 0x0078 (0x00A8 - 0x0030)
class UYAssetCheckerDataAsset : public UDataAsset
{
public:
	TMap<class UClass*, struct FYAssetValidatorEntry>  m_validationEntries;                                      // 0x0030(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataAsset>                   m_dataValidatorPath;                                      // 0x0080(0x0028) (CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YDataValidator.YAssetCheckerDataAsset");
		return ptr;
	}

};


// Class YDataValidator.YAssetCheckerFunctions
// 0x0000 (0x0028 - 0x0028)
class UYAssetCheckerFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class YDataValidator.YAssetCheckerFunctions");
		return ptr;
	}


	static bool FindValidationEntryFromClass(class UClass* InClass, struct FYAssetValidatorEntry* outEntry);
	static class UYAssetCheckerDataAsset* FindDataValidationAsset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
