// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MP_Map01_P_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MP_Map01_P.MP_Map01_P_C.CaptureServerPerf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMP_Map01_P_C::CaptureServerPerf()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.CaptureServerPerf"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.CaptureAutomationServerPerf
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMP_Map01_P_C::CaptureAutomationServerPerf()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.CaptureAutomationServerPerf"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.BndEvt__TriggerVolume5_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMP_Map01_P_C::BndEvt__TriggerVolume5_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.BndEvt__TriggerVolume5_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params = {};

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMP_Map01_P_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.ToggleEndOfMatchLevelVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMP_Map01_P_C::ToggleEndOfMatchLevelVisibility(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.ToggleEndOfMatchLevelVisibility"));

	struct
	{
		bool                           IsVisible;
	} params = {};

	params.IsVisible = IsVisible;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.CancelMatchEscapeSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYSpectateComponent*     spectateComponent              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMP_Map01_P_C::CancelMatchEscapeSequence(class UYSpectateComponent* spectateComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.CancelMatchEscapeSequence"));

	struct
	{
		class UYSpectateComponent*     spectateComponent;
	} params = {};

	params.spectateComponent = spectateComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.PlayMatchEscapeSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UYSpectateComponent*     spectateComponent              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMP_Map01_P_C::PlayMatchEscapeSequence(class UYSpectateComponent* spectateComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.PlayMatchEscapeSequence"));

	struct
	{
		class UYSpectateComponent*     spectateComponent;
	} params = {};

	params.spectateComponent = spectateComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MP_Map01_P.MP_Map01_P_C.ExecuteUbergraph_MP_Map01_P
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMP_Map01_P_C::ExecuteUbergraph_MP_Map01_P(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MP_Map01_P.MP_Map01_P_C.ExecuteUbergraph_MP_Map01_P"));

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
