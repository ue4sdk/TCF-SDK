#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_STR_AutoAimPresetDesc_classes.hpp"
#include "TCF_STR_MagnetismPresetDesc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_AimAssistWPNPresetDesc.STR_AimAssistWPNPresetDesc
// 0x0048
struct FSTR_AimAssistWPNPresetDesc
{
	struct FSTR_AutoAimPresetDesc                      AutoAimInBlindState_5_847152EE4ED5926D0330ADBAE7B3B297;   // 0x0000(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_AutoAimPresetDesc                      AutoAimInAimState_7_A47B617849A62A40601C0BB7A423A5B9;     // 0x0014(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_MagnetismPresetDesc                    MagnetismInBlindState_10_28A0FF9D47605D61C42402BB59B42F43;// 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_MagnetismPresetDesc                    MagnetismInAimState_12_F755CE754395431A1BDE94B2FC3E2842;  // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
