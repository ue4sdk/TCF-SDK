// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayfab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayfab.YPlayfabInstance.OnRequestPendingMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EYPlayfabMessageExecutionType  Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnRequestPendingMessage(const struct FYPlayfabMessage& Message, EYPlayfabMessageExecutionType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayfab.YPlayfabInstance.OnRequestPendingMessage");

	struct
	{
		struct FYPlayfabMessage        Message;
		EYPlayfabMessageExecutionType  Type;
	} params;

	params.Message = Message;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayfab.YPlayfabInstance.OnRequestMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnRequestMessage(const struct FYPlayfabMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayfab.YPlayfabInstance.OnRequestMessage");

	struct
	{
		struct FYPlayfabMessage        Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayfab.YPlayfabInstance.OnPendingMessageRequestCompleted
// (FUNC_Native, FUNC_Protected)
// Parameters:
// int                            RequestID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnPendingMessageRequestCompleted(int RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayfab.YPlayfabInstance.OnPendingMessageRequestCompleted");

	struct
	{
		int                            RequestID;
	} params;

	params.RequestID = RequestID;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayfab.YPlayfabInstance.OnNotifyMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FYPlayfabMessage        Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UYPlayfabInstance::OnNotifyMessage(const struct FYPlayfabMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayfab.YPlayfabInstance.OnNotifyMessage");

	struct
	{
		struct FYPlayfabMessage        Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
