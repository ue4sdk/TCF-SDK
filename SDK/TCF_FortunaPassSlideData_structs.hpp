#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_FortunaPassItemData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FortunaPassSlideData.FortunaPassSlideData
// 0x0030
struct FFortunaPassSlideData
{
	struct FText                                       Title_10_596F7848458F061E7454FEA4090CD9A0;                // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Paid_5_CA6C95144D0FB956D6DE41918D664252;                  // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<struct FFortunaPassItemData>                Items_9_C76FC3E9441F7E17B5321A8E2F0903A8;                 // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
