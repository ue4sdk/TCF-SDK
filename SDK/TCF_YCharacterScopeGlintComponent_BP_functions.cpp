// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YCharacterScopeGlintComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetCameraDistanceToGlint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UYCharacterScopeGlintComponent_BP_C::GetCameraDistanceToGlint()
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetCameraDistanceToGlint");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.CalculateCameraToScopeDot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UYCharacterScopeGlintComponent_BP_C::CalculateCameraToScopeDot()
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.CalculateCameraToScopeDot");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetOwningPawnViewPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ViewLocation                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                ViewRotation                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYCharacterScopeGlintComponent_BP_C::GetOwningPawnViewPoint(struct FVector* ViewLocation, struct FRotator* ViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.GetOwningPawnViewPoint");

	struct
	{
		struct FVector                 ViewLocation;
		struct FRotator                ViewRotation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ViewLocation != nullptr)
		*ViewLocation = params.ViewLocation;
	if (ViewRotation != nullptr)
		*ViewRotation = params.ViewRotation;
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYCharacterScopeGlintComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnEnterTargeting
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldCreateGlint              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYCharacterScopeGlintComponent_BP_C::BP_OnEnterTargeting(bool ShouldCreateGlint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnEnterTargeting");

	struct
	{
		bool                           ShouldCreateGlint;
	} params;

	params.ShouldCreateGlint = ShouldCreateGlint;

	UObject::ProcessEvent(fn, &params);
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnLeaveTargeting
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldCreateGlint              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYCharacterScopeGlintComponent_BP_C::BP_OnLeaveTargeting(bool ShouldCreateGlint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.BP_OnLeaveTargeting");

	struct
	{
		bool                           ShouldCreateGlint;
	} params;

	params.ShouldCreateGlint = ShouldCreateGlint;

	UObject::ProcessEvent(fn, &params);
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYCharacterScopeGlintComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ExecuteUbergraph_YCharacterScopeGlintComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYCharacterScopeGlintComponent_BP_C::ExecuteUbergraph_YCharacterScopeGlintComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YCharacterScopeGlintComponent_BP.YCharacterScopeGlintComponent_BP_C.ExecuteUbergraph_YCharacterScopeGlintComponent_BP");

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
