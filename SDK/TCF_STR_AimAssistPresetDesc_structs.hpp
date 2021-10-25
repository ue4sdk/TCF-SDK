#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_STR_MagnetismSettingsDesc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STR_AimAssistPresetDesc.STR_AimAssistPresetDesc
// 0x0030
struct FSTR_AimAssistPresetDesc
{
	struct FString                                     PresetName_2_D4E25D0B43133DE51189979C1C8A65F0;            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	float                                              HoldTargetTime_5_81BDCDCC4E08ABFB4E0D8ABE65FDCC7C;        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ApplyAutoAim_8_92D63579442B59F48DF4E2BA76E80C93;          // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               AutoAimWithGamepadOnly_10_6DE4FD204C2E283D7EBCC4ACD1C7CEB0;// 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ApplyMagnetism_12_CD725E92491B8D32DD9FE28444D50F08;       // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class UCurveFloat*                                 MagnetismInputSense_27_3D16323E4B722D7ED5E407AE82AB8207;  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_MagnetismSettingsDesc                  MagnetismSettingsInBlindState_18_1CAD4B1F4963283BF5CC40A6C997333B;// 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSTR_MagnetismSettingsDesc                  MagnetismSettingsInAimState_19_DD72A238482DEB2C6FCF5D8DE8F517FC;// 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
