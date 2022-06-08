// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SocialUserList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SocialUserList.WBP_SocialUserList_C.ResetEntriesVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SocialUserList_C::ResetEntriesVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.ResetEntriesVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.SetEntriesVisibilityByUserId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         userIds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_SocialUserList_C::SetEntriesVisibilityByUserId(TArray<struct FString>* userIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.SetEntriesVisibilityByUserId"));

	struct
	{
		TArray<struct FString>         userIds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (userIds != nullptr)
		*userIds = params.userIds;
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.SetEntryActionButtons
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Social_User_Entry_C* socialUserEntryWBP             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialUserList_C::SetEntryActionButtons(class UWBP_Social_User_Entry_C** socialUserEntryWBP)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.SetEntryActionButtons"));

	struct
	{
		class UWBP_Social_User_Entry_C* socialUserEntryWBP;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (socialUserEntryWBP != nullptr)
		*socialUserEntryWBP = params.socialUserEntryWBP;
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.BP_CreateAndAddEntry
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYOutpostFriendInfo     friendInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UYWidget_SocialUserEntry* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UYWidget_SocialUserEntry* UWBP_SocialUserList_C::BP_CreateAndAddEntry(const struct FYOutpostFriendInfo& friendInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.BP_CreateAndAddEntry"));

	struct
	{
		struct FYOutpostFriendInfo     friendInfo;
		class UYWidget_SocialUserEntry* ReturnValue;
	} params = {};

	params.friendInfo = friendInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SocialUserList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SocialUserList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.BP_SetNumberOfVisibleEntries
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            numOfVisibleEntries            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialUserList_C::BP_SetNumberOfVisibleEntries(int numOfVisibleEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.BP_SetNumberOfVisibleEntries"));

	struct
	{
		int                            numOfVisibleEntries;
	} params = {};

	params.numOfVisibleEntries = numOfVisibleEntries;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SocialUserList.WBP_SocialUserList_C.ExecuteUbergraph_WBP_SocialUserList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialUserList_C::ExecuteUbergraph_WBP_SocialUserList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SocialUserList.WBP_SocialUserList_C.ExecuteUbergraph_WBP_SocialUserList"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
