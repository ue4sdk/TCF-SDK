// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_MasterBackButton_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_MasterBackButton_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.OnStackDataChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYInputUIStackType             Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_MasterBackButton_WBP_C::OnStackDataChanged_Event_1(EYInputUIStackType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.OnStackDataChanged_Event_1");

	struct
	{
		EYInputUIStackType             Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_MasterBackButton_WBP_C::BndEvt__Button_61_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.BndEvt__Button_61_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.ExecuteUbergraph_UI_MasterBackButton_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_MasterBackButton_WBP_C::ExecuteUbergraph_UI_MasterBackButton_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterBackButton_WBP.UI_MasterBackButton_WBP_C.ExecuteUbergraph_UI_MasterBackButton_WBP");

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
