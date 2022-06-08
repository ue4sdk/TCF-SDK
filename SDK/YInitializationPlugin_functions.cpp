// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YInitializationPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YInitializationPlugin.YInitializationManager.RequestCompleteInitializationCallbackBlueprint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  actorContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           outSuccess                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EYInitializationRequestSettingTypes Type                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UYInitializationManager::RequestCompleteInitializationCallbackBlueprint(class AActor* actorContext, const struct FScriptDelegate& Delegate, EYInitializationRequestSettingTypes Type, bool* outSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YInitializationPlugin.YInitializationManager.RequestCompleteInitializationCallbackBlueprint"));

	struct
	{
		class AActor*                  actorContext;
		struct FScriptDelegate         Delegate;
		bool                           outSuccess;
		EYInitializationRequestSettingTypes Type;
		int                            ReturnValue;
	} params = {};

	params.actorContext = actorContext;
	params.Delegate = Delegate;
	params.Type = Type;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (outSuccess != nullptr)
		*outSuccess = params.outSuccess;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
