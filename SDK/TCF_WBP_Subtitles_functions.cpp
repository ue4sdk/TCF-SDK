// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Subtitles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Subtitles.WBP_Subtitles_C.HideSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.HideSubtitle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Subtitles.WBP_Subtitles_C.ShowSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Subtitles_C::ShowSubtitle(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.ShowSubtitle");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYVOAudioDatatableRow   voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYAnnouncementPlaybackOptions playbackOptions                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYVOLine                voiceLine                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Subtitles_C::OnAnnouncementStarted(const struct FYVOAudioDatatableRow& voicelineData, const struct FYAnnouncementPlaybackOptions& playbackOptions, const struct FYVOLine& voiceLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStarted");

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


// Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAnnouncementPlayEntryData voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Subtitles_C::OnAnnouncementStopped(const struct FYAnnouncementPlayEntryData& voicelineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStopped");

	struct
	{
		struct FYAnnouncementPlayEntryData voicelineData;
	} params;

	params.voicelineData = voicelineData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Subtitles.WBP_Subtitles_C.ExecuteUbergraph_WBP_Subtitles
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Subtitles_C::ExecuteUbergraph_WBP_Subtitles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitles.WBP_Subtitles_C.ExecuteUbergraph_WBP_Subtitles");

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
