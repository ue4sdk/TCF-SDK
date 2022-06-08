#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "BackendModels_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct InventoryOnboarding_ST.InventoryOnboarding_ST
// 0x0014
struct FInventoryOnboarding_ST
{
	TArray<EYPlayerSetType>                            PlayerSetType_4_DF62AE37481D51ADBAD7E2AE9D8728E7;         // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	EYItemType                                         ItemType_6_DD97073647CFC11CC5BFE58D88DC1B6B;              // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RequiresTools_8_9810ED0047891CB88D72EDA78EACE954;         // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CheckSpecificEquippedType_14_CC1D35464840C5305204FEA5EB5AC3FE;// 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HighlightPlayerBag_17_724F8303483E11F3316CA8B18F420501;   // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
