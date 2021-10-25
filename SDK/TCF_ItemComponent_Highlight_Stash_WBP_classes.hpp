#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Highlight_Stash_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C
// 0x0018 (0x0318 - 0x0300)
class UItemComponent_Highlight_Stash_WBP_C : public UYWidget_ItemComponentImageBackground
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Anim_Highlight;                                           // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BackgroundImage;                                          // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C");
		return ptr;
	}


	void IsProspectorToolOrGadget(bool* IsToolOrGadget);
	bool TryHighlightTypeDueToOnboarding();
	void Construct();
	void ShouldShowHighlight(bool ShouldShowHighlight);
	void OnMissionStepStarted(const struct FYMissionRuntimeData& uiMissionLineStepInfo);
	void OnItemSet();
	void ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
