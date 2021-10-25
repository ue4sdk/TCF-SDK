// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YGameInstance_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGameInstance_BP.YGameInstance_BP_C.BP_OnFindReplaysComplete
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FS_ReplayInfo>   AllReplays                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYGameInstance_BP_C::BP_OnFindReplaysComplete(TArray<struct FS_ReplayInfo> AllReplays)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.BP_OnFindReplaysComplete");

	struct
	{
		TArray<struct FS_ReplayInfo>   AllReplays;
	} params;

	params.AllReplays = AllReplays;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameInstance_BP.YGameInstance_BP_C.BP_OnInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::BP_OnInit(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.BP_OnInit");

	struct
	{
		class UWorld*                  World;
	} params;

	params.World = World;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameInstance_BP.YGameInstance_BP_C.HandleNetworkError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsServer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYGameInstance_BP_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.HandleNetworkError");

	struct
	{
		TEnumAsByte<ENetworkFailure>   FailureType;
		bool                           bIsServer;
	} params;

	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameInstance_BP.YGameInstance_BP_C.HandleTravelError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>    FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::HandleTravelError(TEnumAsByte<ETravelFailure> FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.HandleTravelError");

	struct
	{
		TEnumAsByte<ETravelFailure>    FailureType;
	} params;

	params.FailureType = FailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameInstance_BP.YGameInstance_BP_C.logError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::logError(const struct FString& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.logError");

	struct
	{
		struct FString                 ErrorMessage;
	} params;

	params.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function YGameInstance_BP.YGameInstance_BP_C.ExecuteUbergraph_YGameInstance_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::ExecuteUbergraph_YGameInstance_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YGameInstance_BP.YGameInstance_BP_C.ExecuteUbergraph_YGameInstance_BP");

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
