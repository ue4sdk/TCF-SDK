#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "Prospect_classes.hpp"
#include "BackendModels_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Stucture_TabData.Stucture_TabData
// 0x0038
struct FStucture_TabData
{
	struct FText                                       TabLabel_5_B14FDBDF4B0CB0F16C92A0B658489894;              // 0x0000(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseIcon_7_1EBAB2534C0792B29A035696802C24FE;               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowNotification_10_87374DDB4C3DA819C5C811B8950F8058;     // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EYCustomizationMode                                CustomizationMode_13_473749A24D62878D244B9383A1ACDB65;    // 0x0022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYCustomizationCategory                            CustomizationCategory_17_08D2C6984F40B5E55A7DCC8149351C35;// 0x0023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowDecoration_19_982CD86E42C85676EDC9449045676187;       // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowSorting_21_A8A81A4F436E95F33E7AE698C5351C55;          // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FDataTableRowHandle                         HighlightID_24_DA9B988A49E198B3CCE26B88343FA3DE;          // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
