#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "ST_EffortData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_EffortDataTableRow.ST_EffortDataTableRow
// 0x0050
struct FST_EffortDataTableRow
{
	TMap<TEnumAsByte<EN_EffortTypes>, struct FST_EffortData> Efforts_8_70D960094B9CBF7FE719299E4CCEDE62;               // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
