#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct FCodexRow.FCodexRow
// 0x0078
struct FFCodexRow
{
	struct FText                                       Header_2_38F4917944A719B8A792DA83AE4F87A2;                // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description_4_7250F03B40EC6EC1FDFED8A28716F5C4;           // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 List_8_14D813B944F31427CB452D9C511A4DB5;                  // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   Image_12_0D967B0C4ACCB9459C2CA38825A7BE3A;                // 0x0050(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
