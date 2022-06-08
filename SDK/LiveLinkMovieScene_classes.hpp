#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "LiveLinkMovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// 0x0140 (0x0230 - 0x00F0)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                      SubjectPreset;                                            // 0x00F0(0x0038) (CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       ChannelMask;                                              // 0x0128(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*>       SubSections;                                              // 0x0138(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET
	struct FName                                       SubjectName;                                              // 0x0158(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                          TemplateToPush;                                           // 0x0160(0x0090) (CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x01F0(0x0020) (CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                               // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>             PropertyFloatChannels;                                    // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_Deprecated, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkSection"));
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// 0x0028 (0x0058 - 0x0030)
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData                     SubSectionData;                                           // 0x0030(0x0010) (CPF_NativeAccessSpecifierPublic)
	class UClass* /*ULiveLinkRole*/                    SubjectRole;                                              // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection"));
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation"));
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole"));
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties"));
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// 0x0010 (0x00D8 - 0x00C8)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClass* /*ULiveLinkRole*/                    TrackRole;                                                // 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LiveLinkMovieScene.MovieSceneLiveLinkTrack"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
