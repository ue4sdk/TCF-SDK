// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BTService_ResetCheck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_ResetCheck.BTService_ResetCheck_C.DetermineBugItGoString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::DetermineBugItGoString(const struct FVector& Location, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.DetermineBugItGoString");

	struct
	{
		struct FVector                 Location;
		struct FString                 Result;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTService_ResetCheck.BTService_ResetCheck_C.Get BehaviorInfoStringFromCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ControlledActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::Get_BehaviorInfoStringFromCharacter(class AActor* ControlledActor, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.Get BehaviorInfoStringFromCharacter");

	struct
	{
		class AActor*                  ControlledActor;
		struct FString                 Result;
	} params;

	params.ControlledActor = ControlledActor;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTService_ResetCheck.BTService_ResetCheck_C.GetBlackboardInfoString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ControlledActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::GetBlackboardInfoString(class AActor* ControlledActor, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.GetBlackboardInfoString");

	struct
	{
		class AActor*                  ControlledActor;
		struct FString                 Result;
	} params;

	params.ControlledActor = ControlledActor;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BTService_ResetCheck.BTService_ResetCheck_C.DoResetCheck
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::DoResetCheck(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.DoResetCheck");

	struct
	{
		class UObject*                 Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_ResetCheck.BTService_ResetCheck_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BTService_ResetCheck.BTService_ResetCheck_C.ExecuteUbergraph_BTService_ResetCheck
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTService_ResetCheck_C::ExecuteUbergraph_BTService_ResetCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_ResetCheck.BTService_ResetCheck_C.ExecuteUbergraph_BTService_ResetCheck");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
