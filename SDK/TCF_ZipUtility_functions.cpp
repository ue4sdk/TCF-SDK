// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ZipUtility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipUtility.ZipFileFunctionLibrary.ZipSameThread
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FileOrFolderPath               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EZipUtilityCompressionLevel> Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UZipFileFunctionLibrary::ZipSameThread(const struct FString& FileOrFolderPath, EZipUtilityCompressionFormat Format, TEnumAsByte<EZipUtilityCompressionLevel> Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.ZipSameThread");

	struct
	{
		struct FString                 FileOrFolderPath;
		EZipUtilityCompressionFormat   Format;
		TEnumAsByte<EZipUtilityCompressionLevel> Level;
		bool                           ReturnValue;
	} params;

	params.FileOrFolderPath = FileOrFolderPath;
	params.Format = Format;
	params.Level = Level;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Zip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FileOrFolderPath               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EZipUtilityCompressionLevel> Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UZipOperation*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UZipOperation* UZipFileFunctionLibrary::Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format, TEnumAsByte<EZipUtilityCompressionLevel> Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.Zip");

	struct
	{
		struct FString                 FileOrFolderPath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		TEnumAsByte<EZipUtilityCompressionLevel> Level;
		class UZipOperation*           ReturnValue;
	} params;

	params.FileOrFolderPath = FileOrFolderPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.Level = Level;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UZipOperation*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UZipOperation* UZipFileFunctionLibrary::UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipTo");

	struct
	{
		struct FString                 ArchivePath;
		struct FString                 destinationPath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		class UZipOperation*           ReturnValue;
	} params;

	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UZipOperation*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UZipOperation* UZipFileFunctionLibrary::UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo");

	struct
	{
		TArray<int>                    fileIndices;
		struct FString                 ArchivePath;
		struct FString                 destinationPath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		class UZipOperation*           ReturnValue;
	} params;

	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UZipOperation*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UZipOperation* UZipFileFunctionLibrary::UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles");

	struct
	{
		TArray<int>                    fileIndices;
		struct FString                 ArchivePath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		class UZipOperation*           ReturnValue;
	} params;

	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 destinationPath                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UZipFileFunctionLibrary::UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo");

	struct
	{
		struct FString                 ArchivePath;
		struct FString                 Name;
		struct FString                 destinationPath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		bool                           ReturnValue;
	} params;

	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UZipFileFunctionLibrary::UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed");

	struct
	{
		struct FString                 ArchivePath;
		struct FString                 Name;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		bool                           ReturnValue;
	} params;

	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Unzip
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UZipOperation*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UZipOperation* UZipFileFunctionLibrary::Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.Unzip");

	struct
	{
		struct FString                 ArchivePath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		class UZipOperation*           ReturnValue;
	} params;

	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 ZipUtilityInterfaceDelegate    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EZipUtilityCompressionFormat   Format                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UZipFileFunctionLibrary::ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, EZipUtilityCompressionFormat Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive");

	struct
	{
		struct FString                 ArchivePath;
		class UObject*                 ZipUtilityInterfaceDelegate;
		EZipUtilityCompressionFormat   Format;
		bool                           ReturnValue;
	} params;

	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ZipUtility.ZipOperation.StopOperation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UZipOperation::StopOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipOperation.StopOperation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ZipUtility.ZipUtilityInterface.OnStartProcess
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UZipUtilityInterface::OnStartProcess(const struct FString& archive, int Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnStartProcess");

	struct
	{
		struct FString                 archive;
		int                            Bytes;
	} params;

	params.archive = archive;
	params.Bytes = Bytes;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipUtility.ZipUtilityInterface.OnProgress
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          percentage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UZipUtilityInterface::OnProgress(const struct FString& archive, float percentage, int Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnProgress");

	struct
	{
		struct FString                 archive;
		float                          percentage;
		int                            Bytes;
	} params;

	params.archive = archive;
	params.percentage = percentage;
	params.Bytes = Bytes;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipUtility.ZipUtilityInterface.OnFileFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 File                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UZipUtilityInterface::OnFileFound(const struct FString& archive, const struct FString& File, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnFileFound");

	struct
	{
		struct FString                 archive;
		struct FString                 File;
		int                            Size;
	} params;

	params.archive = archive;
	params.File = File;
	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipUtility.ZipUtilityInterface.OnFileDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 File                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UZipUtilityInterface::OnFileDone(const struct FString& archive, const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnFileDone");

	struct
	{
		struct FString                 archive;
		struct FString                 File;
	} params;

	params.archive = archive;
	params.File = File;

	UObject::ProcessEvent(fn, &params);
}


// Function ZipUtility.ZipUtilityInterface.OnDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 archive                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UZipUtilityInterface::OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnDone");

	struct
	{
		struct FString                 archive;
		TEnumAsByte<EZipUtilityCompletionState> CompletionState;
	} params;

	params.archive = archive;
	params.CompletionState = CompletionState;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
