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

// UserDefinedStruct Structure_InputKeyNav.Structure_InputKeyNav
// 0x0041
struct FStructure_InputKeyNav
{
	struct FText                                       NavLabel_3_1D3030FF48F4B027C56D8885BC7ED0CF;              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       PCLabel_6_CB42A76C49016385686DDBA2B3B9382A;               // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FDataTableRowHandle                         InputBinding_10_56D77B2944E1FDD4F600E88178F6424B;         // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	bool                                               InfoOnly_12_27D855974032CC7E1BB229ABA8E16CB0;             // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
