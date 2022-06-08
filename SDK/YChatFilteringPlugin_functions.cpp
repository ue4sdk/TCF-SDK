// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YChatFilteringPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YChatFilteringPlugin.YChatFilterExternalFunctions.ContainsProfanity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UYChatFilterDataObject*  Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 outString                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYChatFilterExternalFunctions::ContainsProfanity(class UYChatFilterDataObject* Data, const struct FString& inString, struct FString* outString)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YChatFilteringPlugin.YChatFilterExternalFunctions.ContainsProfanity"));

	struct
	{
		class UYChatFilterDataObject*  Data;
		struct FString                 inString;
		struct FString                 outString;
		bool                           ReturnValue;
	} params = {};

	params.Data = Data;
	params.inString = inString;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (outString != nullptr)
		*outString = params.outString;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
