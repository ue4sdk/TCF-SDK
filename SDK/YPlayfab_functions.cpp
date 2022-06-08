// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayfab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction YPlayfab.YPlayfabInstance.YOnPlayfabMessageProcessedSuccesfully__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UYPlayfabInstance::YOnPlayfabMessageProcessedSuccesfully__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YPlayfab.YPlayfabInstance.YOnPlayfabMessageProcessedSuccesfully__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction YPlayfab.YPlayfabInstance.YOnPlayfabMessageError__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            httpErrorCode                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 httpErrorMessage               (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::YOnPlayfabMessageError__DelegateSignature(int httpErrorCode, const struct FString& httpErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction YPlayfab.YPlayfabInstance.YOnPlayfabMessageError__DelegateSignature"));

	struct
	{
		int                            httpErrorCode;
		struct FString                 httpErrorMessage;
	} params = {};

	params.httpErrorCode = httpErrorCode;
	params.httpErrorMessage = httpErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnRequestPendingMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EYPlayfabMessageExecutionType  Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnRequestPendingMessage(const struct FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnRequestPendingMessage"));

	struct
	{
		struct FYPlayfabMessage        Message;
		EYPlayfabMessageExecutionType  Type;
	} params = {};

	params.Message = Message;
	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnRequestMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnRequestMessage(const struct FYPlayfabMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnRequestMessage"));

	struct
	{
		struct FYPlayfabMessage        Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnPendingMessageRequestCompleted
// (FUNC_Native, FUNC_Protected)
// Parameters:
// int                            RequestID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnPendingMessageRequestCompleted(int RequestID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnPendingMessageRequestCompleted"));

	struct
	{
		int                            RequestID;
	} params = {};

	params.RequestID = RequestID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnNotifyMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnNotifyMessage(const struct FYPlayfabMessage& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnNotifyMessage"));

	struct
	{
		struct FYPlayfabMessage        Message;
	} params = {};

	params.Message = Message;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnMessageProcessedSuccessfullyCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UYPlayfabInstance::OnMessageProcessedSuccessfullyCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnMessageProcessedSuccessfullyCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayfab.YPlayfabInstance.OnMessageErrorCallback
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            httpErrorCode                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 errorMessage                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnMessageErrorCallback(int httpErrorCode, const struct FString& errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayfab.YPlayfabInstance.OnMessageErrorCallback"));

	struct
	{
		int                            httpErrorCode;
		struct FString                 errorMessage;
	} params = {};

	params.httpErrorCode = httpErrorCode;
	params.errorMessage = errorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
