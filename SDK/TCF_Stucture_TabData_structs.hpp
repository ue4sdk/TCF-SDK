#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_Prospect_classes.hpp"
#include "TCF_BackendModels_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Stucture_TabData.Stucture_TabData
// 0x001C
struct FStucture_TabData
{
	struct FText                                       TabLabel_5_B14FDBDF4B0CB0F16C92A0B658489894;              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseIcon_7_1EBAB2534C0792B29A035696802C24FE;               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowNotification_10_87374DDB4C3DA819C5C811B8950F8058;     // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EYCustomizationMode                                CustomizationMode_13_473749A24D62878D244B9383A1ACDB65;    // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYCustomizationCategory                            CustomizationCategory_17_08D2C6984F40B5E55A7DCC8149351C35;// 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
