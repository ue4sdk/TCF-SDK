// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YPlayerTriggerAISenseComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReportAISenseInternal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     SenseTrigegrRowHandle          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UYPlayerTriggerAISenseComponent_BP_C::ReportAISenseInternal(const struct FDataTableRowHandle& SenseTrigegrRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReportAISenseInternal");

	struct
	{
		struct FDataTableRowHandle     SenseTrigegrRowHandle;
	} params;

	params.SenseTrigegrRowHandle = SenseTrigegrRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYPlayerTriggerAISenseComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TriggerSmell
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerTriggerAISenseComponent_BP_C::TriggerSmell()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TriggerSmell");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.OnWeaponFired_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerTriggerAISenseComponent_BP_C::OnWeaponFired_Event_1(class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.OnWeaponFired_Event_1");

	struct
	{
		class UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent;
	} params;

	params.weaponPlayerControllerRuntimeComponent = weaponPlayerControllerRuntimeComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnControllerChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerTriggerAISenseComponent_BP_C::BP_OnControllerChanged_Event(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnControllerChanged_Event");

	struct
	{
		class AController*             Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TryTriggerFootstep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYPlayerTriggerAISenseComponent_BP_C::TryTriggerFootstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.TryTriggerFootstep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnLanding_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYLandingEventInfo      landingInfo                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UYPlayerTriggerAISenseComponent_BP_C::BP_OnLanding_Event_1(const struct FYLandingEventInfo& landingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.BP_OnLanding_Event_1");

	struct
	{
		struct FYLandingEventInfo      landingInfo;
	} params;

	params.landingInfo = landingInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYPlayerTriggerAISenseComponent_BP_C::ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YPlayerTriggerAISenseComponent_BP.YPlayerTriggerAISenseComponent_BP_C.ExecuteUbergraph_YPlayerTriggerAISenseComponent_BP");

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
