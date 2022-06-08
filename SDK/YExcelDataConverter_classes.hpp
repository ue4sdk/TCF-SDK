#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YExcelDataConverter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class YExcelDataConverter.YExcelConverterFunctions
// 0x0000 (0x0030 - 0x0030)
class UYExcelConverterFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YExcelDataConverter.YExcelConverterFunctions"));
		return ptr;
	}

};


// Class YExcelDataConverter.YExcelConverterDataAsset
// 0x0078 (0x00B0 - 0x0038)
class UYExcelConverterDataAsset : public UDataAsset
{
public:
	TMap<EYMetaConverterTypes, struct FYCSVMetaDataEntry> m_data;                                                   // 0x0038(0x0050) (CPF_Edit, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataAsset>                   m_excelDataConverterPath;                                 // 0x0088(0x0028) (CPF_Config, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class YExcelDataConverter.YExcelConverterDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
