// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YIdleDetectionComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.CheckForIdleness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::CheckForIdleness()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.CheckForIdleness");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ClientSendPlayerToOutpost
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ClientSendPlayerToOutpost()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ClientSendPlayerToOutpost");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnEnterDBNOEvent_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYIdleDetectionComponent_BP_C::OnEnterDBNOEvent_Event_2(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnEnterDBNOEvent_Event_2");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.SendPlayerToOutpost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::SendPlayerToOutpost()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.SendPlayerToOutpost");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowKickWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ShowKickWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowKickWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ResetWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ResetWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ResetWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_ShowIdleKickWarning
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::Client_ShowIdleKickWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_ShowIdleKickWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_HideIdleKickWarning
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::Client_HideIdleKickWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_HideIdleKickWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.KillPlayer
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::KillPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.KillPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnInitializationComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYIdleDetectionComponent_BP_C::OnInitializationComplete(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnInitializationComplete");

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnRequestIdleKick_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::OnRequestIdleKick_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnRequestIdleKick_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.TrigerIdleKickExecution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::TrigerIdleKickExecution()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.TrigerIdleKickExecution");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ExecuteUbergraph_YIdleDetectionComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYIdleDetectionComponent_BP_C::ExecuteUbergraph_YIdleDetectionComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ExecuteUbergraph_YIdleDetectionComponent_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.HideIdleKickWarning__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::HideIdleKickWarning__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.HideIdleKickWarning__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowIdleKickWarning__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ShowIdleKickWarning__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowIdleKickWarning__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
