// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_TeamInfo_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.InitFromPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPlayerState*           PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_TeamInfo_WBP_C::InitFromPlayerState(class AYPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.InitFromPlayerState");

	struct
	{
		class AYPlayerState*           PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnSquadMembersChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamInfo_WBP_C::OnSquadMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnSquadMembersChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.ExecuteUbergraph_UI_TeamInfo_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_TeamInfo_WBP_C::ExecuteUbergraph_UI_TeamInfo_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.ExecuteUbergraph_UI_TeamInfo_WBP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnTeamInfoInitialized__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           SUCCESS                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_TeamInfo_WBP_C::OnTeamInfoInitialized__DelegateSignature(bool SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo_WBP.UI_TeamInfo_WBP_C.OnTeamInfoInitialized__DelegateSignature");

	struct
	{
		bool                           SUCCESS;
	} params;

	params.SUCCESS = SUCCESS;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
