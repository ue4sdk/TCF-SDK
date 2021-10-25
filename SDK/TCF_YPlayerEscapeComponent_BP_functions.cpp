// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerEscapeComponent_BP_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.CanUpdateEscapeProgress");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.SetCanEscape
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanEscape                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerEscapeComponent_BP_C::SetCanEscape(bool CanEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.SetCanEscape");

	struct
	{
		bool                           CanEscape;
	} params;

	params.CanEscape = CanEscape;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.EscapeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::EscapeStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.EscapeStatusChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEnterDBNOEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnEnterDBNOEvent_Event_1(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEnterDBNOEvent_Event_1");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRecoveredDBNO_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnRecoveredDBNO_Event_1(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRecoveredDBNO_Event_1");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRevived_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::OnRevived_Event_1(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnRevived_Event_1");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.StoppedDBNO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::StoppedDBNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.StoppedDBNO");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.TryShowingNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::TryShowingNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.TryShowingNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEscapeStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerEscapeComponent_BP_C::OnEscapeStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.OnEscapeStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ExecuteUbergraph_YPlayerEscapeComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerEscapeComponent_BP_C::ExecuteUbergraph_YPlayerEscapeComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerEscapeComponent_BP.YPlayerEscapeComponent_BP_C.ExecuteUbergraph_YPlayerEscapeComponent_BP");

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
