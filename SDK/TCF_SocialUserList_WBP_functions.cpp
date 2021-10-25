// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_SocialUserList_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SocialUserList_WBP.SocialUserList_WBP_C.ResetEntriesVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USocialUserList_WBP_C::ResetEntriesVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.ResetEntriesVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntriesVisibilityByUserId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         userIds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USocialUserList_WBP_C::SetEntriesVisibilityByUserId(TArray<struct FString>* userIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntriesVisibilityByUserId");

	struct
	{
		TArray<struct FString>         userIds;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (userIds != nullptr)
		*userIds = params.userIds;
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntryActionButtons
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Social_User_Entry_C* socialUserEntryWBP             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialUserList_WBP_C::SetEntryActionButtons(class UWBP_Social_User_Entry_C** socialUserEntryWBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.SetEntryActionButtons");

	struct
	{
		class UWBP_Social_User_Entry_C* socialUserEntryWBP;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (socialUserEntryWBP != nullptr)
		*socialUserEntryWBP = params.socialUserEntryWBP;
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.BP_CreateAndAddEntry
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYOutpostFriendInfo     friendInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYWidget_SocialUserEntry* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_SocialUserEntry* USocialUserList_WBP_C::BP_CreateAndAddEntry(const struct FYOutpostFriendInfo& friendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.BP_CreateAndAddEntry");

	struct
	{
		struct FYOutpostFriendInfo     friendInfo;
		class UYWidget_SocialUserEntry* ReturnValue;
	} params;

	params.friendInfo = friendInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USocialUserList_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USocialUserList_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.BP_SetNumberOfVisibleEntries
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            numOfVisibleEntries            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialUserList_WBP_C::BP_SetNumberOfVisibleEntries(int numOfVisibleEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.BP_SetNumberOfVisibleEntries");

	struct
	{
		int                            numOfVisibleEntries;
	} params;

	params.numOfVisibleEntries = numOfVisibleEntries;

	UObject::ProcessEvent(fn, &params);
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.ExecuteUbergraph_SocialUserList_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USocialUserList_WBP_C::ExecuteUbergraph_SocialUserList_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.ExecuteUbergraph_SocialUserList_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function SocialUserList_WBP.SocialUserList_WBP_C.ContextMenuOpened__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USocialUserList_WBP_C::ContextMenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUserList_WBP.SocialUserList_WBP_C.ContextMenuOpened__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
