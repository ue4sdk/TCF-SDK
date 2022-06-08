// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerBIHookComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.GetPlayerDistanceTo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  actorContext                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBIHookComponent_BP_C::GetPlayerDistanceTo(class AActor* actorContext, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.GetPlayerDistanceTo"));

	struct
	{
		class AActor*                  actorContext;
		float                          Distance;
	} params = {};

	params.actorContext = actorContext;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.SendInteractedWIthLaserDrill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYLaserDrillActivityStats anyAnalyticsStruct             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class AActor*                  LaserDrill                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBIHookComponent_BP_C::SendInteractedWIthLaserDrill(const struct FYLaserDrillActivityStats& anyAnalyticsStruct, class AActor* LaserDrill)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.SendInteractedWIthLaserDrill"));

	struct
	{
		struct FYLaserDrillActivityStats anyAnalyticsStruct;
		class AActor*                  LaserDrill;
	} params = {};

	params.anyAnalyticsStruct = anyAnalyticsStruct;
	params.LaserDrill = LaserDrill;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.SendLaserDrillBiHookNow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerBIHookComponent_BP_C::SendLaserDrillBiHookNow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.SendLaserDrillBiHookNow"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBIHookComponent_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.OnTrySending
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerBIHookComponent_BP_C::OnTrySending()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.OnTrySending"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.RestartTrySendingTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBIHookComponent_BP_C::RestartTrySendingTimer(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.RestartTrySendingTimer"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.ExecuteUbergraph_PlayerBIHookComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerBIHookComponent_BP_C::ExecuteUbergraph_PlayerBIHookComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function PlayerBIHookComponent_BP.PlayerBIHookComponent_BP_C.ExecuteUbergraph_PlayerBIHookComponent_BP"));

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
