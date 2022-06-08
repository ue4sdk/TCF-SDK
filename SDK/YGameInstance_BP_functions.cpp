// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YGameInstance_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YGameInstance_BP.YGameInstance_BP_C.BP_OnInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::BP_OnInit(class UWorld* World)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameInstance_BP.YGameInstance_BP_C.BP_OnInit"));

	struct
	{
		class UWorld*                  World;
	} params = {};

	params.World = World;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameInstance_BP.YGameInstance_BP_C.HandleNetworkError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENetworkFailure>   FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsServer                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYGameInstance_BP_C::HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameInstance_BP.YGameInstance_BP_C.HandleNetworkError"));

	struct
	{
		TEnumAsByte<ENetworkFailure>   FailureType;
		bool                           bIsServer;
	} params = {};

	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameInstance_BP.YGameInstance_BP_C.HandleTravelError
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ETravelFailure>    FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::HandleTravelError(TEnumAsByte<ETravelFailure> FailureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameInstance_BP.YGameInstance_BP_C.HandleTravelError"));

	struct
	{
		TEnumAsByte<ETravelFailure>    FailureType;
	} params = {};

	params.FailureType = FailureType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameInstance_BP.YGameInstance_BP_C.logError
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 errorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::logError(const struct FString& errorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameInstance_BP.YGameInstance_BP_C.logError"));

	struct
	{
		struct FString                 errorMessage;
	} params = {};

	params.errorMessage = errorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YGameInstance_BP.YGameInstance_BP_C.ExecuteUbergraph_YGameInstance_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYGameInstance_BP_C::ExecuteUbergraph_YGameInstance_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YGameInstance_BP.YGameInstance_BP_C.ExecuteUbergraph_YGameInstance_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
