// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_AnnouncementIndicator_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.BP_OnAnnouncementStarted_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYVOAudioDatatableRow   voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYAnnouncementPlaybackOptions playbackOptions                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYVOLine                voiceLine                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_AnnouncementIndicator_WBP_C::BP_OnAnnouncementStarted_Event_1(const struct FYVOAudioDatatableRow& voicelineData, const struct FYAnnouncementPlaybackOptions& playbackOptions, const struct FYVOLine& voiceLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.BP_OnAnnouncementStarted_Event_1");

	struct
	{
		struct FYVOAudioDatatableRow   voicelineData;
		struct FYAnnouncementPlaybackOptions playbackOptions;
		struct FYVOLine                voiceLine;
	} params;

	params.voicelineData = voicelineData;
	params.playbackOptions = playbackOptions;
	params.voiceLine = voiceLine;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.InitializeAnnouncementIndicator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 AssociatedPlayerState          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_AnnouncementIndicator_WBP_C::InitializeAnnouncementIndicator(class UObject* AssociatedPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.InitializeAnnouncementIndicator");

	struct
	{
		class UObject*                 AssociatedPlayerState;
	} params;

	params.AssociatedPlayerState = AssociatedPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_AnnouncementIndicator_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.TriggerShowAndHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_AnnouncementIndicator_WBP_C::TriggerShowAndHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.TriggerShowAndHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.ExecuteUbergraph_UI_AnnouncementIndicator_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_AnnouncementIndicator_WBP_C::ExecuteUbergraph_UI_AnnouncementIndicator_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C.ExecuteUbergraph_UI_AnnouncementIndicator_WBP");

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
