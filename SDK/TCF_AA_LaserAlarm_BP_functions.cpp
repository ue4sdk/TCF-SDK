// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_LaserAlarm_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnRep_IsAlarmActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::OnRep_IsAlarmActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnRep_IsAlarmActive"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.IsLaserEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPowered                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_LaserAlarm_BP_C::IsLaserEnabled(bool* IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.IsLaserEnabled"));

	struct
	{
		bool                           IsPowered;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPowered != nullptr)
		*IsPowered = params.IsPowered;
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::OnTriggered_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::OnTriggered_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__ParticleFlipFlop__EventFunc
// (FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::OnTriggered_TL__ParticleFlipFlop__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnTriggered-TL__ParticleFlipFlop__EventFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_LaserAlarm_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.UpdateLaserAlarmStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::UpdateLaserAlarmStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.UpdateLaserAlarmStatus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__Collision_LaserAlarm_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAA_LaserAlarm_BP_C::BndEvt__Collision_LaserAlarm_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__Collision_LaserAlarm_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_LaserAlarm_BP_C::BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerStatusChanged__DelegateSignature"));

	struct
	{
		bool                           IsPowered;
	} params;

	params.IsPowered = IsPowered;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature
// (FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.BndEvt__AA_LaserAlarm_BP_PowerUpComponent_K2Node_ComponentBoundEvent_0_OnConfiguratorInitiated__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_LaserAlarm_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.FX-OnTriggered
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_LaserAlarm_BP_C::FX_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.FX-OnTriggered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ExecuteUbergraph_AA_LaserAlarm_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_LaserAlarm_BP_C::ExecuteUbergraph_AA_LaserAlarm_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_LaserAlarm_BP.AA_LaserAlarm_BP_C.ExecuteUbergraph_AA_LaserAlarm_BP"));

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
