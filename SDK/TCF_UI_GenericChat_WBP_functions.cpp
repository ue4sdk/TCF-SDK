// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_UI_GenericChat_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UUI_GenericChat_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ScrollToBottom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::ScrollToBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ScrollToBottom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetDummyData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::SetDummyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetDummyData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetSkin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYChatWindowStyles      Skin                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GenericChat_WBP_C::SetSkin(const struct FYChatWindowStyles& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.SetSkin");

	struct
	{
		struct FYChatWindowStyles      Skin;
	} params;

	params.Skin = Skin;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GenericChat_WBP_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UUI_GenericChat_WBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_ChatMessageReceived
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::BP_ChatMessageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_ChatMessageReceived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.CreateTestMessages
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::CreateTestMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.CreateTestMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_GenericChat_WBP_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.BP_OnWidgetShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ExecuteUbergraph_UI_GenericChat_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UUI_GenericChat_WBP_C::ExecuteUbergraph_UI_GenericChat_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GenericChat_WBP.UI_GenericChat_WBP_C.ExecuteUbergraph_UI_GenericChat_WBP");

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
