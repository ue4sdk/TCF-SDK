// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_EndOfMatchScreen_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.SendBIEventForStage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatchScreen_Base_C::SendBIEventForStage(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.SendBIEventForStage"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.OnStageUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatchScreen_Base_C::OnStageUpdated(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.OnStageUpdated"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.SetStage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            stage                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatchScreen_Base_C::SetStage(int stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.SetStage"));

	struct
	{
		int                            stage;
	} params = {};

	params.stage = stage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.Skip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatchScreen_Base_C::Skip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.Skip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.IsAnyAnimPlaying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isAnimPlaying                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatchScreen_Base_C::IsAnyAnimPlaying(bool* isAnimPlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.IsAnyAnimPlaying"));

	struct
	{
		bool                           isAnimPlaying;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isAnimPlaying != nullptr)
		*isAnimPlaying = params.isAnimPlaying;
}


// Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.PlayAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             widgetToPlayOn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           clearCurrentPlayingAnims       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatchScreen_Base_C::PlayAnim(class UUserWidget* widgetToPlayOn, class UWidgetAnimation* Animation, bool clearCurrentPlayingAnims)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatchScreen_Base.WBP_EndOfMatchScreen_Base_C.PlayAnim"));

	struct
	{
		class UUserWidget*             widgetToPlayOn;
		class UWidgetAnimation*        Animation;
		bool                           clearCurrentPlayingAnims;
	} params = {};

	params.widgetToPlayOn = widgetToPlayOn;
	params.Animation = Animation;
	params.clearCurrentPlayingAnims = clearCurrentPlayingAnims;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
