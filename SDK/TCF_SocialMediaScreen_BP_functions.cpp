// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SocialMediaScreen_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.CalculateText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ASocialMediaScreen_BP_C::CalculateText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.CalculateText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASocialMediaScreen_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASocialMediaScreen_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionCompleted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// EYInteractionType              interactionType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AYPlayerController_Match* interactingPlayer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           perfectInteraction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ASocialMediaScreen_BP_C::BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer, bool perfectInteraction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_1_OnPlayerInteractionCompleted__DelegateSignature"));

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


// Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.ExecuteUbergraph_SocialMediaScreen_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASocialMediaScreen_BP_C::ExecuteUbergraph_SocialMediaScreen_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SocialMediaScreen_BP.SocialMediaScreen_BP_C.ExecuteUbergraph_SocialMediaScreen_BP"));

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
