#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LoadingScreen.LoadingScreenSettings
// 0x0530 (0x0570 - 0x0040)
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	bool                                               bShowFirstLoginVideo;                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FLoadingScreenDescription                   SpinupScreen;                                             // 0x0048(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   DefaultSpinupScreen;                                      // 0x00E8(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   SeamlessTravelScreen;                                     // 0x0188(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   TutorialLoadingScreen;                                    // 0x0228(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   StationMapLoadingScreen;                                  // 0x02C8(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   FirstMapLoadingScreen;                                    // 0x0368(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   SecondMapLoadingScreen;                                   // 0x0408(0x00A0) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              TipFont;                                                  // 0x04A8(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              LoadingFont;                                              // 0x0500(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TipWrapAt;                                                // 0x0558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<struct FText>                               Tips;                                                     // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LoadingScreen.LoadingScreenSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
