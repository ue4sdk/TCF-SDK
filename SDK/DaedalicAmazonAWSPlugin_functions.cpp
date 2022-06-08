// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DaedalicAmazonAWSPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper.StringToBytes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<unsigned char>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<unsigned char> UDaeAmazonAWSHelper::StringToBytes(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DaedalicAmazonAWSPlugin.DaeAmazonAWSHelper.StringToBytes"));

	struct
	{
		struct FString                 S;
		TArray<unsigned char>          ReturnValue;
	} params = {};

	params.S = S;

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
