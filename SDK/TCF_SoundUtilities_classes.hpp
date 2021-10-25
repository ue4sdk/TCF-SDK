#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SoundUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SoundUtilities.SoundSimple
// 0x0018 (0x01D0 - 0x01B8)
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                               // 0x01B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                // 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SoundUtilities.SoundSimple");
		return ptr;
	}

};


// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary");
		return ptr;
	}


	static float GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	static int GetMIDIPitchFromFrequency(float Frequency);
	static float GetFrequencyFromMIDIPitch(int MidiNote);
	static float GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
