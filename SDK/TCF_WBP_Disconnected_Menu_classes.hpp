#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Disconnected_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Disconnected_Menu.WBP_Disconnected_Menu_C
// 0x0030 (0x0310 - 0x02E0)
class UWBP_Disconnected_Menu_C : public UYWidget_Disconnected
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Common_Empty_Btn_C*                     Btn_GiveFeedback;                                         // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Empty_Btn_C*                     Btn_JoinCommunity;                                        // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Empty_Btn_C*                     Btn_VisitWebsite;                                         // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Btn_C*                           WBP_ExitGame;                                             // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                UpdateSecondsLeftTimer;                                   // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Disconnected_Menu.WBP_Disconnected_Menu_C");
		return ptr;
	}


	void Refresh();
	void UpdateRetryTimer(const struct FTimerHandle& logTimerHandle);
	void OnUnrecoverableError();
	void BndEvt__Btn_VisitWebsite_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__Btn_GiveFeedback_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__Btn_JoinCommunity_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Common_Btn_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void ExecuteUbergraph_WBP_Disconnected_Menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
