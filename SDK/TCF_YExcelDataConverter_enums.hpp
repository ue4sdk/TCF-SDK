#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum YExcelDataConverter.EYMetaConverterTypes
enum class EYMetaConverterTypes : uint8_t
{
	EYMetaConverterTypes__None     = 0,
	EYMetaConverterTypes__ItemToGame = 1,
	EYMetaConverterTypes__Items    = 2,
	EYMetaConverterTypes__Upgrading = 3,
	EYMetaConverterTypes__Crafting = 4,
	EYMetaConverterTypes__Contracts = 5,
	EYMetaConverterTypes__PlayerQuarters = 6,
	EYMetaConverterTypes__UpgradeNodes = 7,
	EYMetaConverterTypes__KMarkGeneratorRate = 8,
	EYMetaConverterTypes__AurumGeneratorRate = 9,
	EYMetaConverterTypes__StashIncrease = 10,
	EYMetaConverterTypes__SafetyPockedIncrease = 11,
	EYMetaConverterTypes__WorkbenchTimeReduction = 12,
	EYMetaConverterTypes__All      = 13,
	EYMetaConverterTypes__EYMetaConverterTypes_MAX = 14
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
