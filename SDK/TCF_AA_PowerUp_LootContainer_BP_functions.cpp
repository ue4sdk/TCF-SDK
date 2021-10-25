// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_PowerUp_LootContainer_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.RegisterWithLootRoom
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::RegisterWithLootRoom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.RegisterWithLootRoom"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.SetupLootContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::SetupLootContainer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.SetupLootContainer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ResetLoot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::ResetLoot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ResetLoot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::ResetPowerUpActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ResetPowerUpActor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootContainer_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params;

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::OnLootRoomPowered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnLootRoomPowered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_PowerUp_LootContainer_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_PowerUp_LootContainer_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params;

	params.TRUE = TRUE;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ExecuteUbergraph_AA_PowerUp_LootContainer_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_PowerUp_LootContainer_BP_C::ExecuteUbergraph_AA_PowerUp_LootContainer_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_PowerUp_LootContainer_BP.AA_PowerUp_LootContainer_BP_C.ExecuteUbergraph_AA_PowerUp_LootContainer_BP"));

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
