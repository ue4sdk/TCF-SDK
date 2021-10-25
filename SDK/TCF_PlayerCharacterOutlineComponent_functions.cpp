// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_PlayerCharacterOutlineComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.GetDamageOutlineDuration
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Damage_Outline_Hostile_Players_Duration (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::GetDamageOutlineDuration(float* Damage_Outline_Hostile_Players_Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.GetDamageOutlineDuration");

	struct
	{
		float                          Damage_Outline_Hostile_Players_Duration;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Damage_Outline_Hostile_Players_Duration != nullptr)
		*Damage_Outline_Hostile_Players_Duration = params.Damage_Outline_Hostile_Players_Duration;
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.DetermineStencilValueForSquad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StencilValue                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::DetermineStencilValueForSquad(int* StencilValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.DetermineStencilValueForSquad");

	struct
	{
		int                            StencilValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StencilValue != nullptr)
		*StencilValue = params.StencilValue;
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.YOnPlayerStateSet_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::YOnPlayerStateSet_Event(class AYPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.YOnPlayerStateSet_Event");

	struct
	{
		class AYPlayerState*           PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.UpdateOutline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::UpdateOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.UpdateOutline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.SetStencilValueOnAllRelevantMeshes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StencilValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           RenderInStencil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPlayerCharacterOutlineComponent_C::SetStencilValueOnAllRelevantMeshes(int StencilValue, bool RenderInStencil)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.SetStencilValueOnAllRelevantMeshes");

	struct
	{
		int                            StencilValue;
		bool                           RenderInStencil;
	} params;

	params.StencilValue = StencilValue;
	params.RenderInStencil = RenderInStencil;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshInitializedDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::OnMeshInitializedDelegate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshInitializedDelegate_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.HealthEmptyDelegate_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYHealthComponent*       healthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::HealthEmptyDelegate_Event_1(class UYHealthComponent* healthComponent, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.HealthEmptyDelegate_Event_1");

	struct
	{
		class UYHealthComponent*       healthComponent;
		class AActor*                  Instigator;
	} params;

	params.healthComponent = healthComponent;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::BindingToPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::BindingToPlayerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.BindingToPlayerCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshViewStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYMeshViewState                newViewState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::OnMeshViewStateChanged_Event_1(EYMeshViewState newViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnMeshViewStateChanged_Event_1");

	struct
	{
		EYMeshViewState                newViewState;
	} params;

	params.newViewState = newViewState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnDamageTimerFInished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::OnDamageTimerFInished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnDamageTimerFInished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnTakeDamage_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UPlayerCharacterOutlineComponent_C::OnTakeDamage_Event_1(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnTakeDamage_Event_1");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.TriggerRedOutline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::TriggerRedOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.TriggerRedOutline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnSquadInfoUpdated_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYOutpostFriendInfo> squadMemberInfos               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayerCharacterOutlineComponent_C::OnSquadInfoUpdated_Event_1(TArray<struct FYOutpostFriendInfo> squadMemberInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnSquadInfoUpdated_Event_1");

	struct
	{
		TArray<struct FYOutpostFriendInfo> squadMemberInfos;
	} params;

	params.squadMemberInfos = squadMemberInfos;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnBagMeshChangedEvent_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerCharacterOutlineComponent_C::OnBagMeshChangedEvent_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.OnBagMeshChangedEvent_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ExecuteUbergraph_PlayerCharacterOutlineComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerCharacterOutlineComponent_C::ExecuteUbergraph_PlayerCharacterOutlineComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacterOutlineComponent.PlayerCharacterOutlineComponent_C.ExecuteUbergraph_PlayerCharacterOutlineComponent");

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
