// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_FriendUserEntry_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ToggleEntryActive
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SetActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UFriendUserEntry_WBP_C::ToggleEntryActive(bool SetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ToggleEntryActive");

	struct
	{
		bool                           SetActive;
	} params;

	params.SetActive = SetActive;

	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.Update
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYOutpostFriendInfo     UserInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFriendUserEntry_WBP_C::Update(struct FYOutpostFriendInfo* UserInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.Update");

	struct
	{
		struct FYOutpostFriendInfo     UserInfo;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (UserInfo != nullptr)
		*UserInfo = params.UserInfo;
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_SetToDefault
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFriendUserEntry_WBP_C::BP_SetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_SetToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYOutpostFriendInfo     friendInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFriendUserEntry_WBP_C::BP_OnUpdate(const struct FYOutpostFriendInfo& friendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnUpdate");

	struct
	{
		struct FYOutpostFriendInfo     friendInfo;
	} params;

	params.friendInfo = friendInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnDataSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYOutpostFriendInfo     friendInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UFriendUserEntry_WBP_C::BP_OnDataSet(const struct FYOutpostFriendInfo& friendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BP_OnDataSet");

	struct
	{
		struct FYOutpostFriendInfo     friendInfo;
	} params;

	params.friendInfo = friendInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BndEvt__contextMenuYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UFriendUserEntry_WBP_C::BndEvt__contextMenuYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.BndEvt__contextMenuYButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ExecuteUbergraph_FriendUserEntry_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFriendUserEntry_WBP_C::ExecuteUbergraph_FriendUserEntry_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.ExecuteUbergraph_FriendUserEntry_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.OpenContextMenu__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFriendUserEntry_WBP_C*  Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFriendUserEntry_WBP_C::OpenContextMenu__DelegateSignature(class UFriendUserEntry_WBP_C* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendUserEntry_WBP.FriendUserEntry_WBP_C.OpenContextMenu__DelegateSignature");

	struct
	{
		class UFriendUserEntry_WBP_C*  Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
