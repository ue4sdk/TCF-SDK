// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Splitter_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Splitter_BP.AA_Splitter_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Splitter_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Splitter_BP.AA_Splitter_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Splitter_BP_C::ResetPowerUpActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.ResetPowerUpActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Splitter_BP.AA_Splitter_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Splitter_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params = {};

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Splitter_BP.AA_Splitter_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Splitter_BP_C::OnLootRoomPowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.OnLootRoomPowered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Splitter_BP.AA_Splitter_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Splitter_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Splitter_BP.AA_Splitter_BP_C.ExecuteUbergraph_AA_Splitter_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Splitter_BP_C::ExecuteUbergraph_AA_Splitter_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Splitter_BP.AA_Splitter_BP_C.ExecuteUbergraph_AA_Splitter_BP"));

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
