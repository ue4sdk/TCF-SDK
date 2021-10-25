// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WindowsFileUtility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ByteCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWFUFileListInterface::OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListFileFound");

	struct
	{
		struct FString                 Filename;
		int                            ByteCount;
		struct FString                 FilePath;
	} params;

	params.Filename = Filename;
	params.ByteCount = ByteCount;
	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Files                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FString>         Folders                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UWFUFileListInterface::OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListDone");

	struct
	{
		struct FString                 DirectoryPath;
		TArray<struct FString>         Files;
		TArray<struct FString>         Folders;
	} params;

	params.DirectoryPath = DirectoryPath;
	params.Files = Files;
	params.Folders = Folders;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWFUFileListInterface::OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound");

	struct
	{
		struct FString                 DirectoryName;
		struct FString                 FilePath;
	} params;

	params.DirectoryName = DirectoryName;
	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWFUFolderWatchInterface::OnFileChanged(const struct FString& Filename, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged");

	struct
	{
		struct FString                 Filename;
		struct FString                 FilePath;
	} params;

	params.Filename = Filename;
	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWFUFolderWatchInterface::OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged");

	struct
	{
		struct FString                 DirectoryName;
		struct FString                 DirectoryPath;
	} params;

	params.DirectoryName = DirectoryName;
	params.DirectoryPath = DirectoryPath;

	UObject::ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWindowsFileUtilityFunctionLibrary::WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder");

	struct
	{
		struct FString                 FullPath;
		class UObject*                 WatcherDelegate;
	} params;

	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWindowsFileUtilityFunctionLibrary::StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder");

	struct
	{
		struct FString                 FullPath;
		class UObject*                 WatcherDelegate;
	} params;

	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 from                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 to                             (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::MoveFileTo(const struct FString& from, const struct FString& to)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo");

	struct
	{
		struct FString                 from;
		struct FString                 to;
		bool                           ReturnValue;
	} params;

	params.from = from;
	params.to = to;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ListDelegate                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UWindowsFileUtilityFunctionLibrary::ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder");

	struct
	{
		struct FString                 FullPath;
		class UObject*                 ListDelegate;
	} params;

	params.FullPath = FullPath;
	params.ListDelegate = ListDelegate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DoesFileExist
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::DoesFileExist(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DoesFileExist");

	struct
	{
		struct FString                 FullPath;
		bool                           ReturnValue;
	} params;

	params.FullPath = FullPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::DeleteFolderRecursively(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively");

	struct
	{
		struct FString                 FullPath;
		bool                           ReturnValue;
	} params;

	params.FullPath = FullPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::DeleteFileAt(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt");

	struct
	{
		struct FString                 FullPath;
		bool                           ReturnValue;
	} params;

	params.FullPath = FullPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::DeleteEmptyFolder(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder");

	struct
	{
		struct FString                 FullPath;
		bool                           ReturnValue;
	} params;

	params.FullPath = FullPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UWindowsFileUtilityFunctionLibrary::CreateDirectoryAt(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt");

	struct
	{
		struct FString                 FullPath;
		bool                           ReturnValue;
	} params;

	params.FullPath = FullPath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
