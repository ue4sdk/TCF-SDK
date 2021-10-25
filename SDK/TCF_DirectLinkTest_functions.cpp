// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DirectLinkTest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DirectLinkTest.DirectLinkTestLibrary.TestParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::TestParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.TestParameters");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.StopSender
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::StopSender()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StopSender");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.StopReceiver
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::StopReceiver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StopReceiver");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.StartSender
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::StartSender()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StartSender");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.StartReceiver
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::StartReceiver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.StartReceiver");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.SetupSender
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::SetupSender()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SetupSender");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.SetupReceiver
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::SetupReceiver()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SetupReceiver");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.SendScene
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InFilePath                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::SendScene(const struct FString& InFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.SendScene");

	struct
	{
		struct FString                 InFilePath;
		bool                           ReturnValue;
	} params;

	params.InFilePath = InFilePath;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.MakeEndpoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 NiceName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bVerbose                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UDirectLinkTestLibrary::MakeEndpoint(const struct FString& NiceName, bool bVerbose)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.MakeEndpoint");

	struct
	{
		struct FString                 NiceName;
		bool                           bVerbose;
		int                            ReturnValue;
	} params;

	params.NiceName = NiceName;
	params.bVerbose = bVerbose;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.DumpReceivedScene
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::DumpReceivedScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DumpReceivedScene");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.DeleteEndpoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            EndpointId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::DeleteEndpoint(int EndpointId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DeleteEndpoint");

	struct
	{
		int                            EndpointId;
		bool                           ReturnValue;
	} params;

	params.EndpointId = EndpointId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.DeleteAllEndpoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::DeleteAllEndpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.DeleteAllEndpoint");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.AddPublicSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            EndpointId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 SourceName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::AddPublicSource(int EndpointId, const struct FString& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.AddPublicSource");

	struct
	{
		int                            EndpointId;
		struct FString                 SourceName;
		bool                           ReturnValue;
	} params;

	params.EndpointId = EndpointId;
	params.SourceName = SourceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DirectLinkTest.DirectLinkTestLibrary.AddPublicDestination
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            EndpointId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 DestName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDirectLinkTestLibrary::AddPublicDestination(int EndpointId, const struct FString& DestName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectLinkTest.DirectLinkTestLibrary.AddPublicDestination");

	struct
	{
		int                            EndpointId;
		struct FString                 DestName;
		bool                           ReturnValue;
	} params;

	params.EndpointId = EndpointId;
	params.DestName = DestName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
