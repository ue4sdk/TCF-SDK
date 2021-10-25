// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AC_EvacShip_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCoreUObject_FColor     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FCoreUObject_FColor AAC_EvacShip_BP_C::GetDrawDebugLineColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineColor");

	struct
	{
		struct FCoreUObject_FColor     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineTo
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector AAC_EvacShip_BP_C::GetDrawDebugLineTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDrawDebugLineTo");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDebugDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FString AAC_EvacShip_BP_C::GetDebugDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetDebugDescription");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdateCollisionSettings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::UpdateCollisionSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdateCollisionSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EvacShipState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::SetShipState(TEnumAsByte<EAC_EscapeShip_State> EvacShipState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipState");

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EvacShipState;
	} params;

	params.EvacShipState = EvacShipState;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetCollisionDebugString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

struct FString AAC_EvacShip_BP_C::GetCollisionDebugString(class UPrimitiveComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.GetCollisionDebugString");

	struct
	{
		class UPrimitiveComponent*     Target;
		struct FString                 ReturnValue;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitVariables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::InitVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitVariables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopClientEscapeProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StopClientEscapeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopClientEscapeProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StartClientEscapeProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StartClientEscapeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StartClientEscapeProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdatePlayersEscapeTimeLeft
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AYPlayerCharacter*> EscapingPlayers                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void AAC_EvacShip_BP_C::UpdatePlayersEscapeTimeLeft(TArray<class AYPlayerCharacter*>* EscapingPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.UpdatePlayersEscapeTimeLeft");

	struct
	{
		TArray<class AYPlayerCharacter*> EscapingPlayers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (EscapingPlayers != nullptr)
		*EscapingPlayers = params.EscapingPlayers;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.FindEscapingPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerCharacter*       EscapingPlayer                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::FindEscapingPlayer(class UObject* Object, class AYPlayerCharacter** EscapingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.FindEscapingPlayer");

	struct
	{
		class UObject*                 Object;
		class AYPlayerCharacter*       EscapingPlayer;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);

	if (EscapingPlayer != nullptr)
		*EscapingPlayer = params.EscapingPlayer;
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::PlayerEscapes(class AYPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapes");

	struct
	{
		class AYPlayerState*           PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_EvacShipState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnRep_EvacShipState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnRep_EvacShipState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipFlight_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipFlight_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipFlight_TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipTakeOff_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipTakeOff_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipTakeOff_TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DepartureAlarm_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DepartureAlarm_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DepartureAlarm_TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipLanding_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DropShipLanding_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DropShipLanding_TL__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayArrivingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayArrivingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayArrivingAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartingAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartureAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLeaving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToLeaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLeaving");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLanded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToLanded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__EscapeCollision_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapeUpdater
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayerEscapeUpdater()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayerEscapeUpdater");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipToLanding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetShipToLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetShipToLanding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayLandingAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayLandingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayLandingAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateDestruction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::InitiateDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.InitiateDestruction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::EnableEscapeCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapeCollision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopDepartureAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::StopDepartureAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.StopDepartureAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToArriving
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToArriving()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToArriving");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToPreparingTakeOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::SetStateToPreparingTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.SetStateToPreparingTakeOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapeCollision
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DisableEscapeCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapeCollision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.FadeOutAndHideShip
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::FadeOutAndHideShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.FadeOutAndHideShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapePromptCollision
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::EnableEscapePromptCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.EnableEscapePromptCollision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapePromptCollision
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::DisableEscapePromptCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.DisableEscapePromptCollision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_EscapePromptCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.TryPlayFTUE
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::TryPlayFTUE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.TryPlayFTUE");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AAC_EvacShip_BP_C::BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.BndEvt__AC_EvacShip_BP_KillCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.ExecuteUbergraph_AC_EvacShip_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::ExecuteUbergraph_AC_EvacShip_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.ExecuteUbergraph_AC_EvacShip_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnStateChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EscapeShipState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAC_EvacShip_BP_C::OnStateChange__DelegateSignature(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnStateChange__DelegateSignature");

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EscapeShipState;
	} params;

	params.EscapeShipState = EscapeShipState;

	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLanded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnShipLanded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLanded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarmOnTerminal__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::PlayDepartureAlarmOnTerminal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.PlayDepartureAlarmOnTerminal__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLeaving__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAC_EvacShip_BP_C::OnShipLeaving__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AC_EvacShip_BP.AC_EvacShip_BP_C.OnShipLeaving__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
