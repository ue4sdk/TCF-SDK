// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_AnnouncementEvac_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_AnnouncementEvac_HUD_Panel_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.UpdateInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AnnouncementEvac_HUD_Panel_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.UpdateInfo"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnUpdateAnnouncementCategory
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYHUDInfoPriorityCategory      cateogry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYHUDInfoMessageState          messageState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_AnnouncementEvac_HUD_Panel_C::OnUpdateAnnouncementCategory(EYHUDInfoPriorityCategory cateogry, EYHUDInfoMessageState messageState, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnUpdateAnnouncementCategory"));

	struct
	{
		EYHUDInfoPriorityCategory      cateogry;
		EYHUDInfoMessageState          messageState;
		struct FText                   Text;
	} params;

	params.cateogry = cateogry;
	params.messageState = messageState;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.UpdateState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYHUDInfoMessageState          messageState                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AnnouncementEvac_HUD_Panel_C::UpdateState(EYHUDInfoMessageState messageState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.UpdateState"));

	struct
	{
		EYHUDInfoMessageState          messageState;
	} params;

	params.messageState = messageState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AnnouncementEvac_HUD_Panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnCompleteInitialization
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_AnnouncementEvac_HUD_Panel_C::OnCompleteInitialization(const struct FYRuntimeInitializationContext& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnCompleteInitialization"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnUpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYHUDInfoPriorityCategory      cateogry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          currentTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AnnouncementEvac_HUD_Panel_C::OnUpdateProgress(EYHUDInfoPriorityCategory cateogry, float Duration, float currentTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.OnUpdateProgress"));

	struct
	{
		EYHUDInfoPriorityCategory      cateogry;
		float                          Duration;
		float                          currentTime;
	} params;

	params.cateogry = cateogry;
	params.Duration = Duration;
	params.currentTime = currentTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.ExecuteUbergraph_WBP_AnnouncementEvac_HUD_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AnnouncementEvac_HUD_Panel_C::ExecuteUbergraph_WBP_AnnouncementEvac_HUD_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AnnouncementEvac_HUD_Panel.WBP_AnnouncementEvac_HUD_Panel_C.ExecuteUbergraph_WBP_AnnouncementEvac_HUD_Panel"));

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
