#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Subtitles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Subtitles.WBP_Subtitles_C
// 0x0038 (0x02A8 - 0x0270)
class UWBP_Subtitles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Gfx_SubtitleBacker;                                       // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URichTextBlock*                              Txt_Rich_Subtitles;                                       // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       Speaker_Name_Text;                                        // 0x0288(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Subtitles.WBP_Subtitles_C"));
		return ptr;
	}


	void GetSpeakerNameToShow(class AYPlayerState* PlayerState, const struct FYVOSpeakerRow& YVOSpeakerRow, struct FText* SpeakerNameText);
	void SetTextSize();
	void ShowBacker();
	void HideSubtitle();
	void ShowSubtitle(const struct FText& Text);
	void OnInitialized();
	void OnAnnouncementStarted(const struct FYVOAudioDatatableRow& voicelineData, const struct FYAnnouncementPlaybackOptions& playbackOptions, const struct FYVOLine& voiceLine);
	void OnAnnouncementStopped(const struct FYAnnouncementPlayEntryData& voicelineData, bool cancelled);
	void OnPlayerInitializationFinished(const struct FYRuntimeInitializationContext& Result);
	void ExecuteUbergraph_WBP_Subtitles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
