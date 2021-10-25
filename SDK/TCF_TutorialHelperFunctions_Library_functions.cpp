// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_TutorialHelperFunctions_Library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C.SendTutorialTncBIEvent
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            step                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTutorialHelperFunctions_Library_C::SendTutorialTncBIEvent(const struct FString& Action, int step, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C.SendTutorialTncBIEvent");

	struct
	{
		struct FString                 Action;
		int                            step;
		class UObject*                 __WorldContext;
	} params;

	params.Action = Action;
	params.step = step;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C.isTutorial
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isTutorial                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTutorialHelperFunctions_Library_C::isTutorial(class UObject* WorldContextObject, class UObject* __WorldContext, bool* isTutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialHelperFunctions_Library.TutorialHelperFunctions_Library_C.isTutorial");

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 __WorldContext;
		bool                           isTutorial;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (isTutorial != nullptr)
		*isTutorial = params.isTutorial;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
