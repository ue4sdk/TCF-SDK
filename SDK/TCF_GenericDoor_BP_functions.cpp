// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_GenericDoor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericDoor_BP.GenericDoor_BP_C.HideInteractionPanels
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           _bool                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericDoor_BP_C::HideInteractionPanels(bool _bool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.HideInteractionPanels"));

	struct
	{
		bool                           _bool;
	} params;

	params._bool = _bool;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.RotationDirectionBump
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericDoor_BP_C::RotationDirectionBump(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.RotationDirectionBump"));

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.RunUpAngleCheck
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AController*             Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AGenericDoor_BP_C::RunUpAngleCheck(class AController* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.RunUpAngleCheck"));

	struct
	{
		class AController*             Target;
		bool                           ReturnValue;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GenericDoor_BP.GenericDoor_BP_C.RunAgainstDoorCheck
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappingActor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericDoor_BP_C::RunAgainstDoorCheck(class AActor* OverlappingActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.RunAgainstDoorCheck"));

	struct
	{
		class AActor*                  OverlappingActor;
	} params;

	params.OverlappingActor = OverlappingActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.RotationDirection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericDoor_BP_C::RotationDirection(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.RotationDirection"));

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.SetColorofKeyPad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::SetColorofKeyPad()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.SetColorofKeyPad"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OnRep_IsOpeningOrClosing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::OnRep_IsOpeningOrClosing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OnRep_IsOpeningOrClosing"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OnRep_IsOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OnRep_IsOpen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OnRep_HasPower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::OnRep_HasPower()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OnRep_HasPower"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_TL__FinishedFunc
// (FUNC_BlueprintEvent)

void AGenericDoor_BP_C::OpenOrCloseDoor_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_TL__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_TL__UpdateFunc
// (FUNC_BlueprintEvent)

void AGenericDoor_BP_C::OpenOrCloseDoor_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_TL__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericDoor_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature"));

	struct
	{
		EYInteractionType              interactionType;
		class AYPlayerController_Match* interactingPlayer;
		bool                           perfectInteraction;
	} params;

	params.interactionType = interactionType;
	params.interactingPlayer = interactingPlayer;
	params.perfectInteraction = perfectInteraction;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_Play
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Open                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGenericDoor_BP_C::OpenOrCloseDoor_Play(bool Open)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.OpenOrCloseDoor_Play"));

	struct
	{
		bool                           Open;
	} params;

	params.Open = Open;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void AGenericDoor_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function GenericDoor_BP.GenericDoor_BP_C.SprintThroughDoor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerController*      PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericDoor_BP_C::SprintThroughDoor(class AYPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.SprintThroughDoor"));

	struct
	{
		class AYPlayerController*      PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.MUlticastSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGenericDoor_BP_C::MUlticastSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.MUlticastSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GenericDoor_BP.GenericDoor_BP_C.ExecuteUbergraph_GenericDoor_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGenericDoor_BP_C::ExecuteUbergraph_GenericDoor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GenericDoor_BP.GenericDoor_BP_C.ExecuteUbergraph_GenericDoor_BP"));

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
