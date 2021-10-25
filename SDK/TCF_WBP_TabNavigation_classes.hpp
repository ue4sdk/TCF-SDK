#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_TabNavigation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TabNavigation.WBP_TabNavigation_C
// 0x0039 (0x0329 - 0x02F0)
class UWBP_TabNavigation_C : public UWBP_TabNavigationBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            WidgetIn_Anim;                                            // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              TabHolder_hBox;                                           // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKey_C*                             WBP_InputKey_TabL;                                        // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKey_C*                             WBP_InputKey_TabR;                                        // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FStucture_TabData>                   Tabs;                                                     // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsInitialized;                                            // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_TabNavigation.WBP_TabNavigation_C");
		return ptr;
	}


	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void ClearTabs();
	void CreateTab(const struct FStucture_TabData& Content, int Index, class UWBP_Tab_Btn_C** Tab_Button);
	void OnInitialized();
	void Destruct();
	void OnTabPrevious();
	void OnTabNext();
	void BP_OnWidgetShown();
	void SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct);
	void RefreshInput();
	void BP_OnWidgetHidden();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void ExecuteUbergraph_WBP_TabNavigation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
