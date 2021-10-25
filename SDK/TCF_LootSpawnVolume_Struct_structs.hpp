#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct LootSpawnVolume_Struct.LootSpawnVolume_Struct
// 0x0014
struct FLootSpawnVolume_Struct
{
	struct FDataTableRowHandle                         LootItem_6_A19338914E4C3CB9AF91639FE74C0AF1;              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	float                                              SpawnWeight_5_3FB5E80140161AA700469E99EEE3E709;           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
