// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_NotificationYesNo_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UNotificationYesNo_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_StartNotification
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BP_StartNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BP_StartNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__m_closeButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UNotificationYesNo_WBP_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UNotificationYesNo_WBP_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNotificationYesNo_WBP_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.ExecuteUbergraph_NotificationYesNo_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNotificationYesNo_WBP_C::ExecuteUbergraph_NotificationYesNo_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationYesNo_WBP.NotificationYesNo_WBP_C.ExecuteUbergraph_NotificationYesNo_WBP");

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
