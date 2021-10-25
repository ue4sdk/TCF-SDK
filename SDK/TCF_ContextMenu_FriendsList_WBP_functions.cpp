// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ContextMenu_FriendsList_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.SetUpperTextOnEntry
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYTextBlock*             TextBlock                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UContextMenu_FriendsList_WBP_C::SetUpperTextOnEntry(const struct FText& Text, class UYTextBlock** TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.SetUpperTextOnEntry");

	struct
	{
		class UYTextBlock*             TextBlock;
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);

	if (TextBlock != nullptr)
		*TextBlock = params.TextBlock;
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UContextMenu_FriendsList_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__inviteToSquadYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__inviteToSquadYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__inviteToSquadYButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanInviteToSquad
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           canInvite                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isInvitePending                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanInviteToSquad(bool canInvite, bool isInvitePending)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanInviteToSquad");

	struct
	{
		bool                           canInvite;
		bool                           isInvitePending;
	} params;

	params.canInvite = canInvite;
	params.isInvitePending = isInvitePending;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_PlayerNameUpdate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   playerName                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UContextMenu_FriendsList_WBP_C::BP_PlayerNameUpdate(const struct FText& playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_PlayerNameUpdate");

	struct
	{
		struct FText                   playerName;
	} params;

	params.playerName = playerName;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__addFriendYButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__removeFriendYButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__blockUserYButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanAddFriend
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           canAdd                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isInvitePending                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanAddFriend(bool canAdd, bool isInvitePending)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanAddFriend");

	struct
	{
		bool                           canAdd;
		bool                           isInvitePending;
	} params;

	params.canAdd = canAdd;
	params.isInvitePending = isInvitePending;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanRemoveFriend
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           canRemove                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanRemoveFriend(bool canRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanRemoveFriend");

	struct
	{
		bool                           canRemove;
	} params;

	params.canRemove = canRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__closeMenuYButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__leaveSquadYButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__leaveSquadYButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__leaveSquadYButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanLeaveSquad
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           canLeave                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanLeaveSquad(bool canLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanLeaveSquad");

	struct
	{
		bool                           canLeave;
	} params;

	params.canLeave = canLeave;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanBlockUser
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           available                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           blockToggle                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanBlockUser(bool available, bool blockToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanBlockUser");

	struct
	{
		bool                           available;
		bool                           blockToggle;
	} params;

	params.available = available;
	params.blockToggle = blockToggle;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__voicechatMuteYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanReportUser
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           available                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanReportUser(bool available)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanReportUser");

	struct
	{
		bool                           available;
	} params;

	params.available = available;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteChat
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           available                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isChatMute                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanMuteChat(bool available, bool isChatMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteChat");

	struct
	{
		bool                           available;
		bool                           isChatMute;
	} params;

	params.available = available;
	params.isChatMute = isChatMute;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UContextMenu_FriendsList_WBP_C::BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BndEvt__chatMuteYButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteVoiceChat
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           available                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isVoicechatMute                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UContextMenu_FriendsList_WBP_C::BP_CanMuteVoiceChat(bool available, bool isVoicechatMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.BP_CanMuteVoiceChat");

	struct
	{
		bool                           available;
		bool                           isVoicechatMute;
	} params;

	params.available = available;
	params.isVoicechatMute = isVoicechatMute;

	UObject::ProcessEvent(fn, &params);
}


// Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.ExecuteUbergraph_ContextMenu_FriendsList_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UContextMenu_FriendsList_WBP_C::ExecuteUbergraph_ContextMenu_FriendsList_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextMenu_FriendsList_WBP.ContextMenu_FriendsList_WBP_C.ExecuteUbergraph_ContextMenu_FriendsList_WBP");

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
