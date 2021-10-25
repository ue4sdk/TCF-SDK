#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Social_User_Entry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Social_User_Entry.WBP_Social_User_Entry_C
// 0x0128 (0x0468 - 0x0340)
class UWBP_Social_User_Entry_C : public UYWidget_SocialUserEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            WidgetOut_Anim;                                           // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_Backer;                                               // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_Gradient;                                             // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_OnlineStatus;                                         // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_ChatMute;                                             // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_Friend;                                               // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_Profile;                                              // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_SquadState;                                           // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Icn_VoiceMute;                                            // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              OnlineStatus;                                             // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    SquadOverlay;                                             // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              SquadStatus;                                              // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_OnlineStatus;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_SeparatorState;                                       // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_SquadMembers;                                         // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_UserName;                                             // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Txt_UserState;                                            // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_Accept_Btn;                                           // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Empty_Btn_C*                     WBP_ChatMute_Btn;                                         // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_Decline_Btn;                                          // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_Report_Btn;                                           // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_Social_Btn;                                           // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_Squad_Btn;                                            // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_SquadLeave_Btn;                                       // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Common_Simple_Btn_C*                    WBP_VoiceMute_Btn;                                        // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               HideOnlineStatus;                                         // 0x0410(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               HideSquadStatus;                                          // 0x0411(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowInviteButtons;                                     // 0x0412(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowSocialButton;                                      // 0x0413(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowSquadButton;                                       // 0x0414(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowChatMuteButton;                                    // 0x0415(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowVoiceMuteButton;                                   // 0x0416(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowReportButton;                                      // 0x0417(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowBlockButton;                                       // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowInviteButtons;                                   // 0x0419(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowSocialButton;                                    // 0x041A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowSquadButton;                                     // 0x041B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowChatMuteButton;                                  // 0x041C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowVoiceMuteButton;                                 // 0x041D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowReportButton;                                    // 0x041E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DebugShowBlockButton;                                     // 0x041F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               CanShowOnlineStatusButton;                                // 0x0420(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UWBP_Generic_ToolTip_C*                      TooltipAccept;                                            // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipDecline;                                           // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipSquad;                                             // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipFriend;                                            // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipMuteVoice;                                         // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipMuteChat;                                          // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipReport;                                            // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_Generic_ToolTip_C*                      TooltipLeaveSquad;                                        // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Social_User_Entry.WBP_Social_User_Entry_C");
		return ptr;
	}


	class UWidget* Get_WBP_Social_Btn_Alt_1_ToolTipWidget_1();
	class UWidget* Get_WBP_Report_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_VoiceMute_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_SquadLeave_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_Squad_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_Decline_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_Accept_Btn_Alt_ToolTipWidget_1();
	class UWidget* Get_WBP_LeaveSquad_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_Report_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_ChatMute_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_VoiceMute_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_Social_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_Squad_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_Decline_Btn_ToolTipWidget_1();
	class UWidget* Get_WBP_Accept_Btn_ToolTipWidget_1();
	void OnSquadInfoUpdated(TArray<struct FYOutpostFriendInfo> squadMemberInfos);
	void SetUserData();
	void SetTooltips();
	void SetActionButtonReport(bool IsDesignTime);
	void SetActionButtonVoiceMute(bool IsDesignTime, const struct FString& UserId);
	void SetActionButtonChatMute(bool IsDesignTime, const struct FString& UserId);
	void SetActionButtonSquad(bool IsDesignTime, const struct FString& UserId);
	void SetActionButtonSocial(bool IsDesignTime, const struct FString& UserId);
	void SetActionButtonInvites(bool IsDesignTime, const struct FString& UserId);
	void SetAllActionButtons(bool IsDesignTime);
	void SetSquadData();
	void Construct();
	void BP_CanShowChatMuteButton(bool isAllowed);
	void BP_CanShowReportButton(bool isAllowed);
	void BP_CanShowSocialButton(bool isAllowed);
	void BP_CanShowSquadButton(bool isAllowed);
	void BP_CanShowVoiceMuteButton(bool isAllowed);
	void BP_CanShowBlockButton(bool isAllowed);
	void BP_CanShowInviteButtons(bool isAllowed);
	void BndEvt__WBP_Social_User_Entry_WBP_ChatMute_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BP_OnDataSet(const struct FYOutpostFriendInfo& friendInfo);
	void BP_SetToDefault();
	void BndEvt__WBP_Social_User_Entry_WBP_Accept_Btn_Alt_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_Decline_Btn_Alt_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_Squad_Btn_Alt_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_SquadLeave_Btn_Alt_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_VoiceMute_Btn_Alt_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_Report_Btn_Alt_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void BndEvt__WBP_Social_User_Entry_WBP_Social_Btn_Alt_1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Social_User_Entry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
