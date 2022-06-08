#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "OpenXRHandTracking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
// 0x0010 (0x0040 - 0x0030)
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory"));
		return ptr;
	}

};


// Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
// 0x0058 (0x0088 - 0x0030)
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	bool                                               bHasMetacarpals;                                          // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bRetargetRotationOnly;                                    // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                                  SwizzleX;                                                 // 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                                  SwizzleY;                                                 // 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                                  SwizzleZ;                                                 // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                                  SwizzleW;                                                 // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	TMap<struct FName, struct FName>                   HandTrackingBoneNameMap;                                  // 0x0038(0x0050) (CPF_Edit, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
