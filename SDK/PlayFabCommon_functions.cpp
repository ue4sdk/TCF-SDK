// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayFabCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InKey                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetPlayFabId(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId"));

	struct
	{
		struct FString                 InKey;
	} params = {};

	params.InKey = InKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InToken                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetEntityToken(const struct FString& InToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken"));

	struct
	{
		struct FString                 InToken;
	} params = {};

	params.InToken = InToken;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InKey                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetDeveloperSecretKey(const struct FString& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey"));

	struct
	{
		struct FString                 InKey;
	} params = {};

	params.InKey = InKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InTicket                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayFabAuthenticationContext::SetClientSessionTicket(const struct FString& InTicket)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket"));

	struct
	{
		struct FString                 InTicket;
	} params = {};

	params.InTicket = InTicket;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlayFabAuthenticationContext::GetPlayFabId()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlayFabAuthenticationContext::GetEntityToken()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlayFabAuthenticationContext::GetDeveloperSecretKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPlayFabAuthenticationContext::GetClientSessionTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPlayFabAuthenticationContext::ForgetAllCredentials()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UPlayFabAuthenticationContext::ClientAdminSecurityCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
