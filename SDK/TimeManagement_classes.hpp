#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TimeManagement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0038 - 0x0030)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.TimeSynchronizationSource"));
		return ptr;
	}

};


// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0000 (0x0030 - 0x0030)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.FixedFrameRateCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedCustomTimeStep
// 0x0000 (0x0030 - 0x0030)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.GenlockedCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// 0x0020 (0x0050 - 0x0030)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                                  FrameRate;                                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.GenlockedFixedRateCustomTimeStep"));
		return ptr;
	}

};


// Class TimeManagement.GenlockedTimecodeProvider
// 0x0028 (0x0060 - 0x0038)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                               bUseGenlockToCount;                                       // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0039(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.GenlockedTimecodeProvider"));
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TimeManagement.TimeManagementBlueprintLibrary"));
		return ptr;
	}


	static struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
	static struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	static struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	static struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	static bool IsValid_Framerate(const struct FFrameRate& InFrameRate);
	static struct FFrameRate GetTimecodeFrameRate();
	static struct FTimecode GetTimecode();
	static struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	static int Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	static struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
