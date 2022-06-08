// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YIdleDetectionComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.CheckForIdleness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::CheckForIdleness()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.CheckForIdleness"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ClientSendPlayerToOutpost
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ClientSendPlayerToOutpost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ClientSendPlayerToOutpost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnEnterDBNOEvent_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYIdleDetectionComponent_BP_C::OnEnterDBNOEvent_Event_2(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnEnterDBNOEvent_Event_2"));

	struct
	{
		class AController*             Controller;
	} params = {};

	params.Controller = Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.SendPlayerToOutpost
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::SendPlayerToOutpost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.SendPlayerToOutpost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowKickWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ShowKickWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowKickWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ResetWarning
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ResetWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ResetWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_ShowIdleKickWarning
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::Client_ShowIdleKickWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_ShowIdleKickWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_HideIdleKickWarning
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::Client_HideIdleKickWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.Client_HideIdleKickWarning"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ServerKillPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ServerKillPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ServerKillPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnInitializationComplete
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYIdleDetectionComponent_BP_C::OnInitializationComplete(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnInitializationComplete"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnRequestIdleKick_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::OnRequestIdleKick_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.OnRequestIdleKick_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.TrigerIdleKickExecution
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::TrigerIdleKickExecution()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.TrigerIdleKickExecution"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ExecuteUbergraph_YIdleDetectionComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYIdleDetectionComponent_BP_C::ExecuteUbergraph_YIdleDetectionComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ExecuteUbergraph_YIdleDetectionComponent_BP"));

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


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.HideIdleKickWarning__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::HideIdleKickWarning__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.HideIdleKickWarning__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowIdleKickWarning__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYIdleDetectionComponent_BP_C::ShowIdleKickWarning__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YIdleDetectionComponent_BP.YIdleDetectionComponent_BP_C.ShowIdleKickWarning__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
