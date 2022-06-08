#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoundUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SoundUtilities.SoundSimple
// 0x0018 (0x0190 - 0x0178)
class USoundSimple : public USoundBase
{
public:
	TArray<struct FSoundVariation>                     Variations;                                               // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                // 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SoundUtilities.SoundSimple"));
		return ptr;
	}

};


// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SoundUtilities.SoundUtilitiesBPFunctionLibrary"));
		return ptr;
	}


	static float GetQFromBandwidth(float InBandwidth);
	static float GetPitchScaleFromMIDIPitch(int BaseMidiNote, int TargetMidiNote);
	static int GetMIDIPitchFromFrequency(float Frequency);
	static float GetLogFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
	static float GetLinearFrequencyClamped(float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
	static float GetGainFromMidiVelocity(int InVelocity);
	static float GetFrequencyMultiplierFromSemitones(float InPitchSemitones);
	static float GetFrequencyFromMIDIPitch(int MidiNote);
	static float GetBeatTempo(float BeatsPerMinute, int BeatMultiplier, int DivisionsOfWholeNote);
	static float GetBandwidthFromQ(float InQ);
	static float ConvertLinearToDecibels(float InLinear, float InFloor);
	static float ConvertDecibelsToLinear(float InDecibels);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
