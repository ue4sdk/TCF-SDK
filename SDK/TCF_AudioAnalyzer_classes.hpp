#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AudioAnalyzer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioAnalyzer.AudioAnalyzerAsset
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AudioAnalyzer.AudioAnalyzerAsset");
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// 0x0000 (0x0028 - 0x0028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AudioAnalyzer.AudioAnalyzerNRTSettings");
		return ptr;
	}

};


// Class AudioAnalyzer.AudioAnalyzerNRT
// 0x0050 (0x0078 - 0x0028)
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
public:
	class USoundWave*                                  Sound;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              DurationInSeconds;                                        // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0034(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AudioAnalyzer.AudioAnalyzerNRT");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
