#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_En_FilterCategoryCollection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Stucture_FilterData.Stucture_FilterData
// 0x0050
struct FStucture_FilterData
{
	TEnumAsByte<En_FilterCategoryCollection>           GenericCollectionType_28_48E7D0BF4620B1D1AA9F50AA355DFAE6;// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               UseIcon_7_1EBAB2534C0792B29A035696802C24FE;               // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ShowNotification_10_3663EE804DFDF8C1D6D6D8BE6DE0C94A;     // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     ChildNavigationCategory_34_12AD8247457DC0F49294F0AB04F88084;// 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FText                                       OverridenLabel_30_B14FDBDF4B0CB0F16C92A0B658489894;       // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EYCustomizationCategory>                    AdditionalCustomizationCategories_31_94F7337740B74FDDFC233C9D0ED26C4B;// 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EYItemType>                                 AdditionalItemTypes_32_B7F48F2F48A17C6862BBE9AF8344367F;  // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
