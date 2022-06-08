#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TakeMovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TakeMovieScene.MovieSceneTakeSection
// 0x0380 (0x0470 - 0x00F0)
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel                   HoursCurve;                                               // 0x00F0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel                   MinutesCurve;                                             // 0x0180(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel                   SecondsCurve;                                             // 0x0210(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel                   FramesCurve;                                              // 0x02A0(0x0090) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     SubFramesCurve;                                           // 0x0330(0x00A0) (CPF_NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel                    Slate;                                                    // 0x03D0(0x00A0) (CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TakeMovieScene.MovieSceneTakeSection"));
		return ptr;
	}

};


// Class TakeMovieScene.MovieSceneTakeSettings
// 0x0060 (0x0090 - 0x0030)
class UMovieSceneTakeSettings : public UObject
{
public:
	struct FString                                     HoursName;                                                // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     MinutesName;                                              // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SecondsName;                                              // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     FramesName;                                               // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SubFramesName;                                            // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     SlateName;                                                // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TakeMovieScene.MovieSceneTakeSettings"));
		return ptr;
	}

};


// Class TakeMovieScene.MovieSceneTakeTrack
// 0x0010 (0x00A8 - 0x0098)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0098(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TakeMovieScene.MovieSceneTakeTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
