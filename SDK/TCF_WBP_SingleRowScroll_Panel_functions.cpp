// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_SingleRowScroll_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent__ENTRYPOINTWBP_SingleRowScroll_Panel_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SingleRowScroll_Panel_C::SequenceEvent__ENTRYPOINTWBP_SingleRowScroll_Panel_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent__ENTRYPOINTWBP_SingleRowScroll_Panel_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SingleRowScroll_Panel_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SequenceEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SingleRowScroll_Panel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SingleRowScroll_Panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SetHeadlineText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   HeadlineOverride               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SingleRowScroll_Panel_C::SetHeadlineText(const struct FText& HeadlineOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.SetHeadlineText");

	struct
	{
		struct FText                   HeadlineOverride;
	} params;

	params.HeadlineOverride = HeadlineOverride;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ScrollWidgetIntoView
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             RelevantWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SingleRowScroll_Panel_C::ScrollWidgetIntoView(class UUserWidget* RelevantWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ScrollWidgetIntoView");

	struct
	{
		class UUserWidget*             RelevantWidget;
	} params;

	params.RelevantWidget = RelevantWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ExecuteUbergraph_WBP_SingleRowScroll_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SingleRowScroll_Panel_C::ExecuteUbergraph_WBP_SingleRowScroll_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SingleRowScroll_Panel.WBP_SingleRowScroll_Panel_C.ExecuteUbergraph_WBP_SingleRowScroll_Panel");

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
