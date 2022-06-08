#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Stucture_FilterData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Stucture_FilterCollection.Stucture_FilterCollection
// 0x0010
struct FStucture_FilterCollection
{
	TArray<struct FStucture_FilterData>                Filters_20_B14FDBDF4B0CB0F16C92A0B658489894;              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
