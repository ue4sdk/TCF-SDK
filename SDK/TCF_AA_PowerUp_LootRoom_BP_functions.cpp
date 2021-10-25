// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_PowerUp_LootRoom_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.GetLootRoomActors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::GetLootRoomActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.GetLootRoomActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.DebugShowConnectedLoot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::DebugShowConnectedLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.DebugShowConnectedLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnRep_EnabledPedestals
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::OnRep_EnabledPedestals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnRep_EnabledPedestals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ResetLootActors
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUp_LootRoom_BP_C::ResetLootActors(bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ResetLootActors"));

	struct
	{
		bool                           SUCCESS;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootRoom_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootRoom_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUp_LootRoom_BP_C::BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature(bool IsPowered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_1_OnPowerStatusChanged__DelegateSignature"));

	struct
	{
		bool                           IsPowered;
	} params;

	params.IsPowered = IsPowered;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerSourceEnabled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootRoom_BP_C::BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerSourceEnabled__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_2_OnPowerSourceEnabled__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnPowerSourceDisabled__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootRoom_BP_C::BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnPowerSourceDisabled__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.BndEvt__AA_PowerUp_LootRoom_BP_PowerUpComponent_K2Node_ComponentBoundEvent_3_OnPowerSourceDisabled__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUp_LootRoom_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ExecuteUbergraph_AA_PowerUp_LootRoom_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootRoom_BP_C::ExecuteUbergraph_AA_PowerUp_LootRoom_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootRoom_BP.AA_PowerUp_LootRoom_BP_C.ExecuteUbergraph_AA_PowerUp_LootRoom_BP"));

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
