// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Subtitles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Subtitles.WBP_Subtitles_C.GetSpeakerNameToShow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYVOSpeakerRow          YVOSpeakerRow                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   SpeakerNameText                (CPF_Parm, CPF_OutParm)

void UWBP_Subtitles_C::GetSpeakerNameToShow(class AYPlayerState* PlayerState, const struct FYVOSpeakerRow& YVOSpeakerRow, struct FText* SpeakerNameText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.GetSpeakerNameToShow"));

	struct
	{
		class AYPlayerState*           PlayerState;
		struct FYVOSpeakerRow          YVOSpeakerRow;
		struct FText                   SpeakerNameText;
	} params = {};

	params.PlayerState = PlayerState;
	params.YVOSpeakerRow = YVOSpeakerRow;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpeakerNameText != nullptr)
		*SpeakerNameText = params.SpeakerNameText;
}


// Function WBP_Subtitles.WBP_Subtitles_C.SetTextSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::SetTextSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.SetTextSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.ShowBacker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::ShowBacker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.ShowBacker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.HideSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::HideSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.HideSubtitle"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.ShowSubtitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Subtitles_C::ShowSubtitle(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.ShowSubtitle"));

	struct
	{
		struct FText                   Text;
	} params = {};

	params.Text = Text;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Subtitles_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYVOAudioDatatableRow   voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FYAnnouncementPlaybackOptions playbackOptions                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FYVOLine                voiceLine                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Subtitles_C::OnAnnouncementStarted(const struct FYVOAudioDatatableRow& voicelineData, const struct FYAnnouncementPlaybackOptions& playbackOptions, const struct FYVOLine& voiceLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStarted"));

	struct
	{
		struct FYVOAudioDatatableRow   voicelineData;
		struct FYAnnouncementPlaybackOptions playbackOptions;
		struct FYVOLine                voiceLine;
	} params = {};

	params.voicelineData = voicelineData;
	params.playbackOptions = playbackOptions;
	params.voiceLine = voiceLine;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStopped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYAnnouncementPlayEntryData voicelineData                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           cancelled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Subtitles_C::OnAnnouncementStopped(const struct FYAnnouncementPlayEntryData& voicelineData, bool cancelled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.OnAnnouncementStopped"));

	struct
	{
		struct FYAnnouncementPlayEntryData voicelineData;
		bool                           cancelled;
	} params = {};

	params.voicelineData = voicelineData;
	params.cancelled = cancelled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.OnPlayerInitializationFinished
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYRuntimeInitializationContext Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Subtitles_C::OnPlayerInitializationFinished(const struct FYRuntimeInitializationContext& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.OnPlayerInitializationFinished"));

	struct
	{
		struct FYRuntimeInitializationContext Result;
	} params = {};

	params.Result = Result;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Subtitles.WBP_Subtitles_C.ExecuteUbergraph_WBP_Subtitles
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Subtitles_C::ExecuteUbergraph_WBP_Subtitles(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Subtitles.WBP_Subtitles_C.ExecuteUbergraph_WBP_Subtitles"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
