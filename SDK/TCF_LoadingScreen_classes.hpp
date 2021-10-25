#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_LoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LoadingScreen.LoadingScreenSettings
// 0x0460 (0x0498 - 0x0038)
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	bool                                               bShowFirstLoginVideo;                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FLoadingScreenDescription                   SpinupScreen;                                             // 0x0040(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   DefaultSpinupScreen;                                      // 0x00D8(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   SeamlessTravelScreen;                                     // 0x0170(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   TutorialLoadingScreen;                                    // 0x0208(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   FirstMapLoadingScreen;                                    // 0x02A0(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription                   SecondMapLoadingScreen;                                   // 0x0338(0x0098) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              TipFont;                                                  // 0x03D0(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              LoadingFont;                                              // 0x0428(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TipWrapAt;                                                // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<struct FText>                               Tips;                                                     // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LoadingScreen.LoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
