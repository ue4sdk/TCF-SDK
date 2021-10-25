// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Activity_FunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetActivityByType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYActivityType                 activityType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYActivityActorManager*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AYActivityActorManager* UActivity_FunctionLibrary_BP_C::GetActivityByType(EYActivityType activityType, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetActivityByType");

	struct
	{
		EYActivityType                 activityType;
		class UObject*                 __WorldContext;
		class AYActivityActorManager*  ReturnValue;
	} params;

	params.activityType = activityType;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GenerateBugItGoStringForActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 BugItGoString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::GenerateBugItGoStringForActor(class AActor* Actor, class UObject* __WorldContext, struct FString* BugItGoString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GenerateBugItGoStringForActor");

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		struct FString                 BugItGoString;
	} params;

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (BugItGoString != nullptr)
		*BugItGoString = params.BugItGoString;
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindDropLocation
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::FindDropLocation(class AYPlayerCharacter* Pawn, class UObject* __WorldContext, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindDropLocation");

	struct
	{
		class AYPlayerCharacter*       Pawn;
		class UObject*                 __WorldContext;
		struct FVector                 Location;
	} params;

	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetGenericActivityBIData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PositionX                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            PositionY                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TimeSinceMatchStart            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::GetGenericActivityBIData(class AActor* Actor, class UObject* __WorldContext, int* PositionX, int* PositionY, int* TimeSinceMatchStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetGenericActivityBIData");

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		int                            PositionX;
		int                            PositionY;
		int                            TimeSinceMatchStart;
	} params;

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PositionX != nullptr)
		*PositionX = params.PositionX;
	if (PositionY != nullptr)
		*PositionY = params.PositionY;
	if (TimeSinceMatchStart != nullptr)
		*TimeSinceMatchStart = params.TimeSinceMatchStart;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
