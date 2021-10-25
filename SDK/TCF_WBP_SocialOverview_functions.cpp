// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SocialOverview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SocialOverview.WBP_SocialOverview_C.OnFriendSearchResult
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         userIds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialOverview_C::OnFriendSearchResult(TArray<struct FString>* userIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.OnFriendSearchResult");

	struct
	{
		TArray<struct FString>         userIds;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (userIds != nullptr)
		*userIds = params.userIds;
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.OnUserSearchResult
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           hasFound                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYOutpostFriendInfo     foundUser                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialOverview_C::OnUserSearchResult(bool hasFound, struct FYOutpostFriendInfo* foundUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.OnUserSearchResult");

	struct
	{
		bool                           hasFound;
		struct FYOutpostFriendInfo     foundUser;
	} params;

	params.hasFound = hasFound;

	UObject::ProcessEvent(fn, &params);

	if (foundUser != nullptr)
		*foundUser = params.foundUser;
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForSearchResults
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SocialOverview_C::ResetContentDataForSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForSearchResults");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForFriends
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SocialOverview_C::ResetContentDataForFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentDataForFriends");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentData
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SocialOverview_C::ResetContentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.ResetContentData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_TabNavigation_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_TabElementBase_TabElem_C* TabElement                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_WBP_TabNavigation_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature(int Index, class UWBP_TabElementBase_TabElem_C* TabElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_TabNavigation_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature");

	struct
	{
		int                            Index;
		class UWBP_TabElementBase_TabElem_C* TabElement;
	} params;

	params.Index = Index;
	params.TabElement = TabElement;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Search_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_WBP_Search_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Search_Btn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnUserSearchResult
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// bool                           hasFound                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FYOutpostFriendInfo     foundUser                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialOverview_C::BP_OnUserSearchResult(bool hasFound, const struct FYOutpostFriendInfo& foundUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnUserSearchResult");

	struct
	{
		bool                           hasFound;
		struct FYOutpostFriendInfo     foundUser;
	} params;

	params.hasFound = hasFound;
	params.foundUser = foundUser;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnFriendSearchResponse
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         foundUserIds                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialOverview_C::BP_OnFriendSearchResponse(TArray<struct FString> foundUserIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnFriendSearchResponse");

	struct
	{
		TArray<struct FString>         foundUserIds;
	} params;

	params.foundUserIds = foundUserIds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_SearchClear_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_WBP_SearchClear_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_SearchClear_Btn_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SocialOverview_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_EditTxtSingle_UserName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SocialOverview_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Close_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::BndEvt__WBP_SocialOverview_WBP_Close_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.BndEvt__WBP_SocialOverview_WBP_Close_Btn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
		class UWBP_ButtonBase_Btn_C*   Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialOverview.WBP_SocialOverview_C.ExecuteUbergraph_WBP_SocialOverview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialOverview_C::ExecuteUbergraph_WBP_SocialOverview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialOverview.WBP_SocialOverview_C.ExecuteUbergraph_WBP_SocialOverview");

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
