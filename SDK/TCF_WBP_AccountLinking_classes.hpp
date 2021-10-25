#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_AccountLinking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_AccountLinking.WBP_AccountLinking_C
// 0x0070 (0x0330 - 0x02C0)
class UWBP_AccountLinking_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                CanvasPanel_1;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContentSwitcher;                                          // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Btn_C*                           WBP_Common_Btn_EGS;                                       // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Btn_C*                           WBP_Common_Btn_Steam;                                     // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        WBP_Generic_Modal_ChooseAccount;                          // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        WBP_Generic_Modal_ConfirmLink;                            // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        WBP_Generic_Modal_LinkAccounts;                           // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        WBP_Generic_Modal_LinkingInProgress;                      // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        WBP_Generic_Modal_Result;                                 // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UYTextBlock*                                 YTextBlock_ProcessingTime;                                // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FName                                       EGS_Platform_Selected;                                    // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       Steam_Platform_Selected;                                  // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       cachedPlatform;                                           // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_AccountLinking.WBP_AccountLinking_C");
		return ptr;
	}


	void SetTimoutThresholdText();
	void BindDelegates();
	void PlatformSetup();
	void OnAccountLinkingProcessUpdate(bool isInProcess);
	void OnAccountLinkingResult(EYAccountLinkingResultCode resultCode);
	void BndEvt__WBP_Generic_Modal_A_K2Node_ComponentBoundEvent_1_OnButtonPrimary__DelegateSignature();
	void BndEvt__WBP_Generic_Modal_B_K2Node_ComponentBoundEvent_4_OnButtonPrimary__DelegateSignature();
	void BndEvt__WBP_Common_Btn_EGS_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Common_Btn_Steam_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Generic_Modal_LinkAccounts_K2Node_ComponentBoundEvent_9_OnButtonSecondary__DelegateSignature();
	void BndEvt__WBP_Generic_Modal_ChooseAccount_K2Node_ComponentBoundEvent_10_OnButtonSecondary__DelegateSignature();
	void BndEvt__WBP_ConfirmLinkEGS_K2Node_ComponentBoundEvent_11_OnButtonSecondary__DelegateSignature();
	void Construct();
	void BndEvt__WBP_AccountLinking_WBP_Generic_Modal_Result_K2Node_ComponentBoundEvent_2_OnButtonPrimary__DelegateSignature();
	void ExecuteUbergraph_WBP_AccountLinking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
