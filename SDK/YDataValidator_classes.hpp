#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YDataValidator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YDataValidator.YAssetCheckerDataAsset
// 0x0078 (0x00B0 - 0x0038)
class UYAssetCheckerDataAsset : public UDataAsset
{
public:
	TMap<class UClass* /*UObject*/, struct FYAssetValidatorEntry> m_validationEntries;                                      // 0x0038(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataAsset>                   m_dataValidatorPath;                                      // 0x0088(0x0028) (CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YDataValidator.YAssetCheckerDataAsset"));
		return ptr;
	}

};


// Class YDataValidator.YAssetCheckerFunctions
// 0x0000 (0x0030 - 0x0030)
class UYAssetCheckerFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YDataValidator.YAssetCheckerFunctions"));
		return ptr;
	}


	static bool FindValidationEntryFromClass(class UClass* /*UObject*/ InClass, struct FYAssetValidatorEntry* outEntry);
	static class UYAssetCheckerDataAsset* FindDataValidationAsset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
