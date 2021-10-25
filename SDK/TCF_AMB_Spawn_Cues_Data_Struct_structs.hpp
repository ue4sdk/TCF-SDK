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

// UserDefinedStruct AMB_Spawn_Cues_Data_Struct.AMB_Spawn_Cues_Data_Struct
// 0x0024
struct FAMB_Spawn_Cues_Data_Struct
{
	struct FDataTableRowHandle                         Sound_2_11CC8B0D4E2DDC47875919AA2DD4579C;                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	float                                              MinSpawnTime_5_B4107DD04913B0509CF5DBA081BECF18;          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxSpawnTime_7_98911C664C8D939837B5E99924EB7D8B;          // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinDistance_12_658E32E04E41214A494767AB25D55300;          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxDistance_11_0D69489440EFFB01B9C17DAFA1FDE148;          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Volume_15_7D81496D4D9A5FB5D6BBBF85F46CEA95;               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
