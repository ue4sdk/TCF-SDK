// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerCharacterEffortsComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateDropPodIntroStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::UpdateDropPodIntroStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateDropPodIntroStatus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnHealthDataChangedCallback
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYHealthDataTableRow    HealthData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UYPlayerCharacterEffortsComponent_BP_C::OnHealthDataChangedCallback(const struct FYHealthDataTableRow& HealthData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnHealthDataChangedCallback");

	struct
	{
		struct FYHealthDataTableRow    HealthData;
	} params;

	params.HealthData = HealthData;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentHealthChangedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::OnCurrentHealthChangedCallback(float CurrentHealth, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentHealthChangedCallback");

	struct
	{
		float                          CurrentHealth;
		class AActor*                  Instigator;
	} params;

	params.CurrentHealth = CurrentHealth;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupHealthBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::SetupHealthBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupHealthBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentStaminaChangedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentStamina                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::OnCurrentStaminaChangedCallback(float currentStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnCurrentStaminaChangedCallback");

	struct
	{
		float                          currentStamina;
	} params;

	params.currentStamina = currentStamina;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnMaxStaminaChangedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          maxStamina                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::OnMaxStaminaChangedCallback(float maxStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnMaxStaminaChangedCallback");

	struct
	{
		float                          maxStamina;
	} params;

	params.maxStamina = maxStamina;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupStaminaBindings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::SetupStaminaBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupStaminaBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnDeathCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYCharacterDeathComponent* deathComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::OnDeathCallback(class UYCharacterDeathComponent* deathComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnDeathCallback");

	struct
	{
		class UYCharacterDeathComponent* deathComponent;
	} params;

	params.deathComponent = deathComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDeathBinding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::SetupDeathBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDeathBinding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnTakeDamageCallback
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       IncomingDamageData             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYPlayerCharacterEffortsComponent_BP_C::OnTakeDamageCallback(const struct FYDealtDamageData& IncomingDamageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnTakeDamageCallback");

	struct
	{
		struct FYDealtDamageData       IncomingDamageData;
	} params;

	params.IncomingDamageData = IncomingDamageData;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDamageBinding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::SetupDamageBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupDamageBinding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteEffortsDataFromEnum
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_EffortTypes>    EffortType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NetMulticast                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerCharacterEffortsComponent_BP_C::ExecuteEffortsDataFromEnum(TEnumAsByte<EN_EffortTypes> EffortType, bool NetMulticast)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteEffortsDataFromEnum");

	struct
	{
		TEnumAsByte<EN_EffortTypes>    EffortType;
		bool                           NetMulticast;
	} params;

	params.EffortType = EffortType;
	params.NetMulticast = NetMulticast;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Execute Efforts Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FST_EffortData          EffortData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           NetMulticast                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerCharacterEffortsComponent_BP_C::Execute_Efforts_Data(const struct FST_EffortData& EffortData, bool NetMulticast)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Execute Efforts Data");

	struct
	{
		struct FST_EffortData          EffortData;
		bool                           NetMulticast;
	} params;

	params.EffortData = EffortData;
	params.NetMulticast = NetMulticast;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.FindCorrectEffortsRow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYActiveCustomizationData oldData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYActiveCustomizationData newData                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           forceRefresh                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYPlayerCharacterEffortsComponent_BP_C::FindCorrectEffortsRow(const struct FYActiveCustomizationData& oldData, const struct FYActiveCustomizationData& newData, bool forceRefresh)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.FindCorrectEffortsRow");

	struct
	{
		struct FYActiveCustomizationData oldData;
		struct FYActiveCustomizationData newData;
		bool                           forceRefresh;
	} params;

	params.oldData = oldData;
	params.newData = newData;
	params.forceRefresh = forceRefresh;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_LocallyControlledOnly
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::BindEffortEvents_LocallyControlledOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_LocallyControlledOnly");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnPlayerStateSetCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::OnPlayerStateSetCallback(class AYPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.OnPlayerStateSetCallback");

	struct
	{
		class AYPlayerState*           PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Server_ReplicateVOData
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FST_EffortData          InEffortData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::Server_ReplicateVOData(const struct FST_EffortData& InEffortData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.Server_ReplicateVOData");

	struct
	{
		struct FST_EffortData          InEffortData;
	} params;

	params.InEffortData = InEffortData;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.NetMulticast_VOData
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FST_EffortData          InEffortData                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::NetMulticast_VOData(const struct FST_EffortData& InEffortData)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.NetMulticast_VOData");

	struct
	{
		struct FST_EffortData          InEffortData;
	} params;

	params.InEffortData = InEffortData;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ToggleDebug
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::ToggleDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ToggleDebug");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_AllClients
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::BindEffortEvents_AllClients()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BindEffortEvents_AllClients");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateHeavyBreathing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::UpdateHeavyBreathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.UpdateHeavyBreathing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupIntroBindings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::SetupIntroBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.SetupIntroBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BP_OnIntroFinished_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerCharacterEffortsComponent_BP_C::BP_OnIntroFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.BP_OnIntroFinished_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerCharacterEffortsComponent_BP_C::ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerCharacterEffortsComponent_BP.YPlayerCharacterEffortsComponent_BP_C.ExecuteUbergraph_YPlayerCharacterEffortsComponent_BP");

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
