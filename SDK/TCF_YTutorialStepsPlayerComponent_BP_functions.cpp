// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YTutorialStepsPlayerComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.UpdateEvacMarkerLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Dimension_1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::UpdateEvacMarkerLocation(int Dimension_1, TArray<struct FVector>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.UpdateEvacMarkerLocation");

	struct
	{
		TArray<struct FVector>         Array;
		int                            Dimension_1;
	} params;

	params.Dimension_1 = Dimension_1;

	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsMineralObject
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYInventoryItem         YInventoryItem                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_UObjectWrapper)
// bool                           TRUE                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::IsMineralObject(const struct FYInventoryItem& YInventoryItem, bool* TRUE)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.IsMineralObject");

	struct
	{
		struct FYInventoryItem         YInventoryItem;
		bool                           TRUE;
	} params;

	params.YInventoryItem = YInventoryItem;

	UObject::ProcessEvent(fn, &params);

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestMineralLoc
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::FindClosestMineralLoc(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindClosestMineralLoc");

	struct
	{
		struct FVector                 Location;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SwitchToCorrectItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 CorrectItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::SwitchToCorrectItem(const struct FString& CorrectItem, bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.SwitchToCorrectItem");

	struct
	{
		struct FString                 CorrectItem;
		bool                           SUCCESS;
	} params;

	params.CorrectItem = CorrectItem;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.KilledAStrider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYDealtDamageData       YDealtDamageData               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::KilledAStrider(const struct FYDealtDamageData& YDealtDamageData, bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.KilledAStrider");

	struct
	{
		struct FYDealtDamageData       YDealtDamageData;
		bool                           SUCCESS;
	} params;

	params.YDealtDamageData = YDealtDamageData;

	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAI
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SUCCESS                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::FindAI(bool* SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAI");

	struct
	{
		bool                           SUCCESS;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SUCCESS != nullptr)
		*SUCCESS = params.SUCCESS;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.AddMissionLineStepsToWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::AddMissionLineStepsToWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.AddMissionLineStepsToWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindWidgetProvider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidgetProvider_Missions* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidgetProvider_Missions* UYTutorialStepsPlayerComponent_BP_C::FindWidgetProvider()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindWidgetProvider");

	struct
	{
		class UYWidgetProvider_Missions* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FirstStepInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::FirstStepInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FirstStepInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepTwoInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepTwoInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepTwoInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepThreeInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepThreeInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepThreeInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToAIUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToAIUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToAIUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerDealsDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialStepsPlayerComponent_BP_C::OnPlayerDealsDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnPlayerDealsDamage");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DamageTrackingInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DamageTrackingInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DamageTrackingInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnToolSwap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnToolSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnToolSwap");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolSwapTrackingInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::ToolSwapTrackingInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolSwapTrackingInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFourInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepFourInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFourInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnSuccessScan
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> Location                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UYTutorialStepsPlayerComponent_BP_C::OnSuccessScan(TArray<class UActorComponent*> Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnSuccessScan");

	struct
	{
		TArray<class UActorComponent*> Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToMineralUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToMineralUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToMineralUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFiveInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepFiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepFiveInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartMineralDistanceCheck
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StartMineralDistanceCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StartMineralDistanceCheck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSixInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepSixInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSixInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnItemPickedUp
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnItemPickedUp(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnItemPickedUp");

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
		EYPlayerSetType                equippedSetType;
	} params;

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;
	params.equippedSetType = equippedSetType;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToEvacUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::DistanceToEvacUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.DistanceToEvacUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSevenInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepSevenInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepSevenInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APRO_PlayerController_C* Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnEvacCalled(class APRO_PlayerController_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacCalled");

	struct
	{
		class APRO_PlayerController_C* Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepEightInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepEightInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepEightInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacShipStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EAC_EscapeShip_State> EscapeShipState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::OnEvacShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnEvacShipStateChange");

	struct
	{
		TEnumAsByte<EAC_EscapeShip_State> EscapeShipState;
	} params;

	params.EscapeShipState = EscapeShipState;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepNineInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::StepNineInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.StepNineInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.WelcomeStepInit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::WelcomeStepInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.WelcomeStepInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnIntroFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.OnIntroFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitializeTutorial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::InitializeTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.InitializeTutorial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.Step10Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::Step10Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.Step10Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAiAttempt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialStepsPlayerComponent_BP_C::FindAiAttempt()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.FindAiAttempt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ExecuteUbergraph_YTutorialStepsPlayerComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialStepsPlayerComponent_BP_C::ExecuteUbergraph_YTutorialStepsPlayerComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ExecuteUbergraph_YTutorialStepsPlayerComponent_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolButtonHighlightUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHighlight                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialStepsPlayerComponent_BP_C::ToolButtonHighlightUpdate__DelegateSignature(bool ShouldHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialStepsPlayerComponent_BP.YTutorialStepsPlayerComponent_BP_C.ToolButtonHighlightUpdate__DelegateSignature");

	struct
	{
		bool                           ShouldHighlight;
	} params;

	params.ShouldHighlight = ShouldHighlight;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
