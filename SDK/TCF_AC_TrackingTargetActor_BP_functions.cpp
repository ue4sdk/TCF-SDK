// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_TrackingTargetActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.GetInstigatorInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   Instigator                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatorController           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingTargetActor_BP_C::GetInstigatorInfo(class APawn** Instigator, class AController** InstigatorController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.GetInstigatorInfo"));

	struct
	{
		class APawn*                   Instigator;
		class AController*             InstigatorController;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Instigator != nullptr)
		*Instigator = params.Instigator;
	if (InstigatorController != nullptr)
		*InstigatorController = params.InstigatorController;
}


// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_TrackingTargetActor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.OnPlayerPickedUpLoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPickupActor*           pickup                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingTargetActor_BP_C::OnPlayerPickedUpLoot(class AController* Instigator, class AYPickupActor* pickup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.OnPlayerPickedUpLoot"));

	struct
	{
		class AController*             Instigator;
		class AYPickupActor*           pickup;
	} params;

	params.Instigator = Instigator;
	params.pickup = pickup;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.SFX_NestPickedUp
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController_Match* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingTargetActor_BP_C::SFX_NestPickedUp(class AYPlayerController_Match* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.SFX_NestPickedUp"));

	struct
	{
		class AYPlayerController_Match* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.ExecuteUbergraph_AC_TrackingTargetActor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingTargetActor_BP_C::ExecuteUbergraph_AC_TrackingTargetActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.ExecuteUbergraph_AC_TrackingTargetActor_BP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.OnPickupCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             PickUpController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_TrackingTargetActor_BP_C::OnPickupCompleted__DelegateSignature(class AController* PickUpController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AC_TrackingTargetActor_BP.AC_TrackingTargetActor_BP_C.OnPickupCompleted__DelegateSignature"));

	struct
	{
		class AController*             PickUpController;
	} params;

	params.PickUpController = PickUpController;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
