// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SocialToggle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SocialToggle.WBP_SocialToggle_C.Get_SocialButton_ToolTipWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidget* UWBP_SocialToggle_C::Get_SocialButton_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.Get_SocialButton_ToolTipWidget");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SocialToggle_C::BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SocialToggle_C::BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfOnlineFriends
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            numOfOnlineFriends             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialToggle_C::BP_SetNumberOfOnlineFriends(int numOfOnlineFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfOnlineFriends");

	struct
	{
		int                            numOfOnlineFriends;
	} params;

	params.numOfOnlineFriends = numOfOnlineFriends;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_SocialToggle_C::BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.BndEvt__SquadToggleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfInvites
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            numOfInvites                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialToggle_C::BP_SetNumberOfInvites(int numOfInvites)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.BP_SetNumberOfInvites");

	struct
	{
		int                            numOfInvites;
	} params;

	params.numOfInvites = numOfInvites;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.ExecuteUbergraph_WBP_SocialToggle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SocialToggle_C::ExecuteUbergraph_WBP_SocialToggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.ExecuteUbergraph_WBP_SocialToggle");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SocialToggle.WBP_SocialToggle_C.OnSocialToggleClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SocialToggle_C::OnSocialToggleClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SocialToggle.WBP_SocialToggle_C.OnSocialToggleClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
