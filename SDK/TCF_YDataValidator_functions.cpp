// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YDataValidator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YDataValidator.YAssetCheckerFunctions.FindValidationEntryFromClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  InClass                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FYAssetValidatorEntry   outEntry                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYAssetCheckerFunctions::FindValidationEntryFromClass(class UClass* InClass, struct FYAssetValidatorEntry* outEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function YDataValidator.YAssetCheckerFunctions.FindValidationEntryFromClass");

	struct
	{
		class UClass*                  InClass;
		struct FYAssetValidatorEntry   outEntry;
		bool                           ReturnValue;
	} params;

	params.InClass = InClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (outEntry != nullptr)
		*outEntry = params.outEntry;

	return params.ReturnValue;
}


// Function YDataValidator.YAssetCheckerFunctions.FindDataValidationAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UYAssetCheckerDataAsset* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UYAssetCheckerDataAsset* UYAssetCheckerFunctions::FindDataValidationAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function YDataValidator.YAssetCheckerFunctions.FindDataValidationAsset");

	struct
	{
		class UYAssetCheckerDataAsset* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
