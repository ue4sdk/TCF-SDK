// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCharacterCombatAwarenessComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.GetOwningPlayerControllerAwarenesComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UYPlayerControllerAwarenessComponent* awarenessComp                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterCombatAwarenessComponent_BP_C::GetOwningPlayerControllerAwarenesComponent(class UYPlayerControllerAwarenessComponent** awarenessComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.GetOwningPlayerControllerAwarenesComponent");

	struct
	{
		class UYPlayerControllerAwarenessComponent* awarenessComp;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (awarenessComp != nullptr)
		*awarenessComp = params.awarenessComp;
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.TryGetLocalPlayerControllerAwarenessComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYPlayerControllerAwarenessComponent* Component                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterCombatAwarenessComponent_BP_C::TryGetLocalPlayerControllerAwarenessComponent(class UYPlayerControllerAwarenessComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.TryGetLocalPlayerControllerAwarenessComponent");

	struct
	{
		class UYPlayerControllerAwarenessComponent* Component;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Component != nullptr)
		*Component = params.Component;
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerCharacterCombatAwarenessComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnTakeDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UPlayerCharacterCombatAwarenessComponent_BP_C::OnTakeDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnTakeDamage_Event_1");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnEnterDBNOEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterCombatAwarenessComponent_BP_C::OnEnterDBNOEvent_Event_1(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnEnterDBNOEvent_Event_1");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnDealDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UPlayerCharacterCombatAwarenessComponent_BP_C::OnDealDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.OnDealDamage");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.CurrentShieldChangedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentShield                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterCombatAwarenessComponent_BP_C::CurrentShieldChangedDelegate_Event_1(float CurrentShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.CurrentShieldChangedDelegate_Event_1");

	struct
	{
		float                          CurrentShield;
	} params;

	params.CurrentShield = CurrentShield;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterCombatAwarenessComponent_BP_C::ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterCombatAwarenessComponent_BP.PlayerCharacterCombatAwarenessComponent_BP_C.ExecuteUbergraph_PlayerCharacterCombatAwarenessComponent_BP");

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
