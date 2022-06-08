// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Activity_FunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.SetNavMeshRelevantForActor
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsNavMeshRelevant              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::SetNavMeshRelevantForActor(class AActor* Actor, bool IsNavMeshRelevant, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.SetNavMeshRelevantForActor"));

	struct
	{
		class AActor*                  Actor;
		bool                           IsNavMeshRelevant;
		class UObject*                 __WorldContext;
	} params = {};

	params.Actor = Actor;
	params.IsNavMeshRelevant = IsNavMeshRelevant;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetRotationAtIncrement
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Increment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxIncrement                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Rotation                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::GetRotationAtIncrement(int Increment, int MaxIncrement, class UObject* __WorldContext, float* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetRotationAtIncrement"));

	struct
	{
		int                            Increment;
		int                            MaxIncrement;
		class UObject*                 __WorldContext;
		float                          Rotation;
	} params = {};

	params.Increment = Increment;
	params.MaxIncrement = MaxIncrement;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindFloorLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          traceExtent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NavMeshSearchExtent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 optionalContextObject          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivity_FunctionLibrary_BP_C::FindFloorLocation(const struct FVector& StartLocation, float traceExtent, const struct FVector& NavMeshSearchExtent, class UObject* optionalContextObject, class UObject* __WorldContext, bool* Result, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindFloorLocation"));

	struct
	{
		struct FVector                 StartLocation;
		float                          traceExtent;
		struct FVector                 NavMeshSearchExtent;
		class UObject*                 optionalContextObject;
		class UObject*                 __WorldContext;
		bool                           Result;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
	} params = {};

	params.StartLocation = StartLocation;
	params.traceExtent = traceExtent;
	params.NavMeshSearchExtent = NavMeshSearchExtent;
	params.optionalContextObject = optionalContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Result != nullptr)
		*Result = params.Result;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
}


// Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetActivityByType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYActivityType                 activityType                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYActivityActorManager*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AYActivityActorManager* UActivity_FunctionLibrary_BP_C::GetActivityByType(EYActivityType activityType, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetActivityByType"));

	struct
	{
		EYActivityType                 activityType;
		class UObject*                 __WorldContext;
		class AYActivityActorManager*  ReturnValue;
	} params = {};

	params.activityType = activityType;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

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
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GenerateBugItGoStringForActor"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		struct FString                 BugItGoString;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

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
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.FindDropLocation"));

	struct
	{
		class AYPlayerCharacter*       Pawn;
		class UObject*                 __WorldContext;
		struct FVector                 Location;
	} params = {};

	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

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
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C.GetGenericActivityBIData"));

	struct
	{
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		int                            PositionX;
		int                            PositionY;
		int                            TimeSinceMatchStart;
	} params = {};

	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

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
