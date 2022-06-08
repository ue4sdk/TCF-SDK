// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AMB_SpawnComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AMB_SpawnComponent.AMB_SpawnComponent_C.CanPlaySound
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanPlaySound                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UAMB_SpawnComponent_C::CanPlaySound(bool* CanPlaySound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.CanPlaySound"));

	struct
	{
		bool                           CanPlaySound;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CanPlaySound != nullptr)
		*CanPlaySound = params.CanPlaySound;
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlayerEntered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerCharacter*       Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAMB_SpawnComponent_C::PlayerEntered(class AYPlayerCharacter* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlayerEntered"));

	struct
	{
		class AYPlayerCharacter*       Player;
	} params = {};

	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlaySound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAMB_SpawnComponent_C::PlaySound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlaySound"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlayerLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAMB_SpawnComponent_C::PlayerLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.PlayerLeft"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAMB_SpawnComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.OnReplicatedMatchPhaseDataUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMatchPhaseData        newMatchPhaseData              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UAMB_SpawnComponent_C::OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.OnReplicatedMatchPhaseDataUpdated_Event_1"));

	struct
	{
		struct FYMatchPhaseData        newMatchPhaseData;
	} params = {};

	params.newMatchPhaseData = newMatchPhaseData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AMB_SpawnComponent.AMB_SpawnComponent_C.ExecuteUbergraph_AMB_SpawnComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAMB_SpawnComponent_C::ExecuteUbergraph_AMB_SpawnComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AMB_SpawnComponent.AMB_SpawnComponent_C.ExecuteUbergraph_AMB_SpawnComponent"));

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
