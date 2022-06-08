// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "YPlayerEscapeComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.CanUpdateEscapeProgress
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UYPlayerEscapeComponent_BP_C::CanUpdateEscapeProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.CanUpdateEscapeProgress"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.SetCanEscape
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanEscape                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerEscapeComponent_BP_C::SetCanEscape(bool CanEscape)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.SetCanEscape"));

	struct
	{
		bool                           CanEscape;
	} params = {};

	params.CanEscape = CanEscape;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.EscapeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::EscapeStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.EscapeStatusChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEnterDBNOEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnEnterDBNOEvent_Event_1(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEnterDBNOEvent_Event_1"));

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


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRecoveredDBNO_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnRecoveredDBNO_Event_1(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRecoveredDBNO_Event_1"));

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


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRevived_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnRevived_Event_1(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRevived_Event_1"));

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


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.StoppedDBNO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::StoppedDBNO()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.StoppedDBNO"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.TryShowingNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::TryShowingNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.TryShowingNotification"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEscapeStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::OnEscapeStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEscapeStateChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ExecuteUbergraph_YPlayerEscapeComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::ExecuteUbergraph_YPlayerEscapeComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ExecuteUbergraph_YPlayerEscapeComponent_BP"));

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
