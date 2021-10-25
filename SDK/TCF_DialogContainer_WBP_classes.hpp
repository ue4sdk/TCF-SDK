#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DialogContainer_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DialogContainer_WBP.DialogContainer_WBP_C
// 0x0038 (0x0358 - 0x0320)
class UDialogContainer_WBP_C : public UYDialogContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Form_Menu_C*                            CustomerSupportForm;                                      // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        ExitGameConfirmationModal;                                // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        ExitGameSurveyConfirmationModal;                          // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Generic_Modal_C*                        OkCancelConfirmationModal;                                // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_LoadingOverlay_C*                       WBP_LoadingOverlay;                                       // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StartupMessagesContainer_C*             WBP_StartupMessagesContainer;                             // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass DialogContainer_WBP.DialogContainer_WBP_C");
		return ptr;
	}


	class UYWidget_ConfirmationModal* BP_GetDialogOKAndCancelModal();
	class UYWidget_ConfirmationModal* BP_RequestDialogOKAndCancel(const struct FText& headline, const struct FText& Message, const struct FText& okButtonText, const struct FText& cancelButtonText);
	void OnOkCancelModalIntermittentCollapseFinished();
	bool BP_CloseDialogContainers();
	class UYWidget_ConfirmationModal* BP_RequestDialogExitGameAlternative();
	void BP_ShowCustomerSupportWidget(const struct FYPlayerSupportReportRequestData& Data);
	void BndEvt__ExitGameSurveyConfirmationModal_K2Node_ComponentBoundEvent_0_OnButtonPrimary__DelegateSignature();
	void BP_ShowWelcomeModal();
	void BP_ShowLoadingOverlay(const struct FText& Message);
	void BP_HideLoadingOverlay();
	void ExecuteUbergraph_DialogContainer_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
