// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Backend_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Backend.YBackendInstance.OnPlayfabServerLogin
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           succeded                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 playfabTitleId                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UYBackendInstance::OnPlayfabServerLogin(bool succeded, const struct FString& playfabTitleId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Backend.YBackendInstance.OnPlayfabServerLogin"));

	struct
	{
		bool                           succeded;
		struct FString                 playfabTitleId;
	} params = {};

	params.succeded = succeded;
	params.playfabTitleId = playfabTitleId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Backend.YBackendInstance.IsUsingExperimentalBackendLogin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYBackendInstance::IsUsingExperimentalBackendLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Backend.YBackendInstance.IsUsingExperimentalBackendLogin"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
