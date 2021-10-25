#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ZipUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZipUtility.ZipFileFunctionInternalCallback
// 0x0048 (0x0070 - 0x0028)
class UZipFileFunctionInternalCallback : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EZipUtilityCompressionFormat                       CompressionFormat;                                        // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     File;                                                     // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FString                                     DestinationFolder;                                        // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	int                                                FileIndex;                                                // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UObject*                                     Callback;                                                 // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bSingleFile;                                              // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bFileFound;                                               // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	bool                                               bUnzipto;                                                 // 0x006A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x5];                                       // 0x006B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ZipUtility.ZipFileFunctionInternalCallback");
		return ptr;
	}

};


// Class ZipUtility.ZipFileFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UZipFileFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ZipUtility.ZipFileFunctionLibrary");
		return ptr;
	}


	static bool ZipSameThread(const struct FString& FileOrFolderPath, EZipUtilityCompressionFormat Format, TEnumAsByte<EZipUtilityCompressionLevel> Level);
	static class UZipOperation* Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format, TEnumAsByte<EZipUtilityCompressionLevel> Level);
	static class UZipOperation* UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static class UZipOperation* UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static class UZipOperation* UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static bool UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static bool UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static class UZipOperation* Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
	static bool ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format);
};


// Class ZipUtility.ZipOperation
// 0x0010 (0x0038 - 0x0028)
class UZipOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ZipUtility.ZipOperation");
		return ptr;
	}


	void StopOperation();
};


// Class ZipUtility.ZipUtilityInterface
// 0x0000 (0x0028 - 0x0028)
class UZipUtilityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ZipUtility.ZipUtilityInterface");
		return ptr;
	}


	void OnStartProcess(const struct FString& archive, int Bytes);
	void OnProgress(const struct FString& archive, float percentage, int Bytes);
	void OnFileFound(const struct FString& archive, const struct FString& File, int Size);
	void OnFileDone(const struct FString& archive, const struct FString& File);
	void OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState);
};


// Class ZipUtility.ZULambdaDelegate
// 0x0088 (0x00B0 - 0x0028)
class UZULambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ZipUtility.ZULambdaDelegate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
