// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YEzProfile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YEzProfile.YEZProfileManager.StartEZProfile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 objCtx                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UYEZProfileManager*      Instance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FYEzProfileInitializationData initializationData             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UYEZProfileManager::StartEZProfile(class UObject* objCtx, class UYEZProfileManager* Instance, const struct FYEzProfileInitializationData& initializationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YEzProfile.YEZProfileManager.StartEZProfile"));

	struct
	{
		class UObject*                 objCtx;
		class UYEZProfileManager*      Instance;
		struct FYEzProfileInitializationData initializationData;
		bool                           ReturnValue;
	} params = {};

	params.objCtx = objCtx;
	params.Instance = Instance;
	params.initializationData = initializationData;

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
