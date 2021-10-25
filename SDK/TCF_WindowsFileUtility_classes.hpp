#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WindowsFileUtility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WindowsFileUtility.WFUFileListInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFileListInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class WindowsFileUtility.WFUFileListInterface");
		return ptr;
	}


	void OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath);
	void OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders);
	void OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath);
};


// Class WindowsFileUtility.WFUFileListLambdaDelegate
// 0x0048 (0x0070 - 0x0028)
class UWFUFileListLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class WindowsFileUtility.WFUFileListLambdaDelegate");
		return ptr;
	}

};


// Class WindowsFileUtility.WFUFolderWatchInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFolderWatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class WindowsFileUtility.WFUFolderWatchInterface");
		return ptr;
	}


	void OnFileChanged(const struct FString& Filename, const struct FString& FilePath);
	void OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath);
};


// Class WindowsFileUtility.WFUFolderWatchLambdaDelegate
// 0x0048 (0x0070 - 0x0028)
class UWFUFolderWatchLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class WindowsFileUtility.WFUFolderWatchLambdaDelegate");
		return ptr;
	}

};


// Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWindowsFileUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary");
		return ptr;
	}


	static void WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	static void StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	static bool MoveFileTo(const struct FString& from, const struct FString& to);
	static void ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate);
	static bool DoesFileExist(const struct FString& FullPath);
	static bool DeleteFolderRecursively(const struct FString& FullPath);
	static bool DeleteFileAt(const struct FString& FullPath);
	static bool DeleteEmptyFolder(const struct FString& FullPath);
	static bool CreateDirectoryAt(const struct FString& FullPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
