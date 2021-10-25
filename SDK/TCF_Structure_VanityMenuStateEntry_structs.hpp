#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Structure_VanityMenuStateEntry.Structure_VanityMenuStateEntry
// 0x0029
struct FStructure_VanityMenuStateEntry
{
	struct FText                                       ButtonLabel_4_4E5E68224F1BD105BC7B2FAB1E253742;           // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     FilterSetting_6_13CCA11A4003AB55827D2BB5666FDCAF;         // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               CancelButtonActive_9_E18A680348B09B950F88A690372B75AF;    // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
