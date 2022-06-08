// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YLoadingScreenComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYLoadingScreenComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnIntroStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYLoadingScreenComponent_BP_C::OnIntroStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnIntroStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.RemoveLoadScreenWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYLoadingScreenComponent_BP_C::RemoveLoadScreenWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.RemoveLoadScreenWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnMeshInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYLoadingScreenComponent_BP_C::OnMeshInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnMeshInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnPawnStateChangedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   oldPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   newPawn                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYLoadingScreenComponent_BP_C::OnPawnStateChangedCallback(class APawn* oldPawn, class APawn* newPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.OnPawnStateChangedCallback"));

	struct
	{
		class APawn*                   oldPawn;
		class APawn*                   newPawn;
	} params = {};

	params.oldPawn = oldPawn;
	params.newPawn = newPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.ExecuteUbergraph_YLoadingScreenComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYLoadingScreenComponent_BP_C::ExecuteUbergraph_YLoadingScreenComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YLoadingScreenComponent_BP.YLoadingScreenComponent_BP_C.ExecuteUbergraph_YLoadingScreenComponent_BP"));

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
