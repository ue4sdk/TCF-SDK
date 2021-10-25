#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_AnnouncementIndicator_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C
// 0x0018 (0x0278 - 0x0260)
class UUI_AnnouncementIndicator_WBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UImage*                                      Image_Icon;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UObject*                                     AssociatedPlayerState;                                    // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_AnnouncementIndicator_WBP.UI_AnnouncementIndicator_WBP_C");
		return ptr;
	}


	void BP_OnAnnouncementStarted_Event_1(const struct FYVOAudioDatatableRow& voicelineData, const struct FYAnnouncementPlaybackOptions& playbackOptions, const struct FYVOLine& voiceLine);
	void InitializeAnnouncementIndicator(class UObject* AssociatedPlayerState);
	void Construct();
	void TriggerShowAndHide();
	void ExecuteUbergraph_UI_AnnouncementIndicator_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
