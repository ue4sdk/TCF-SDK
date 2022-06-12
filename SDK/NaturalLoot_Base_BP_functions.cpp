// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "NaturalLoot_Base_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANaturalLoot_Base_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.RespawnLoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANaturalLoot_Base_BP_C::RespawnLoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.RespawnLoot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.BP_OnCollectedByPlayer_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPickupActor*           pickUpActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isCollectedSuccessfully        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANaturalLoot_Base_BP_C::BP_OnCollectedByPlayer_Event_1(class AYPickupActor* pickUpActor, class AYPlayerController* PlayerController, bool isCollectedSuccessfully)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.BP_OnCollectedByPlayer_Event_1"));

	struct
	{
		class AYPickupActor*           pickUpActor;
		class AYPlayerController*      PlayerController;
		bool                           isCollectedSuccessfully;
	} params = {};

	params.pickUpActor = pickUpActor;
	params.PlayerController = PlayerController;
	params.isCollectedSuccessfully = isCollectedSuccessfully;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.TriggerRespawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANaturalLoot_Base_BP_C::TriggerRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.TriggerRespawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.ExecuteUbergraph_NaturalLoot_Base_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANaturalLoot_Base_BP_C::ExecuteUbergraph_NaturalLoot_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function NaturalLoot_Base_BP.NaturalLoot_Base_BP_C.ExecuteUbergraph_NaturalLoot_Base_BP"));

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
