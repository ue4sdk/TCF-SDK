// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YTutorialComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialContracts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::SetupTutorialContracts()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialContracts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowTutorialEvacHint
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void UYTutorialComponent_BP_C::ShowTutorialEvacHint(const struct FTransform& Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowTutorialEvacHint");

	struct
	{
		struct FTransform              Transform;
	} params;

	params.Transform = Transform;

	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnShowEndOfMatch
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BP_OnShowEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnShowEndOfMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowFTUE_GetIntoShip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ShowFTUE_GetIntoShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ShowFTUE_GetIntoShip");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::SetupTutorialWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnReadyToStartTutorialIntro_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BP_OnReadyToStartTutorialIntro_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BP_OnReadyToStartTutorialIntro_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.BindToIntroTutorialStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::BindToIntroTutorialStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.BindToIntroTutorialStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ContinueWithIntro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::ContinueWithIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ContinueWithIntro");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialStepComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UYTutorialComponent_BP_C::SetupTutorialStepComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.SetupTutorialStepComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YTutorialComponent_BP.YTutorialComponent_BP_C.ExecuteUbergraph_YTutorialComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UYTutorialComponent_BP_C::ExecuteUbergraph_YTutorialComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YTutorialComponent_BP.YTutorialComponent_BP_C.ExecuteUbergraph_YTutorialComponent_BP");

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
