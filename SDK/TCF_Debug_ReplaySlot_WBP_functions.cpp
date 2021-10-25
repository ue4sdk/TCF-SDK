// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Debug_ReplaySlot_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebug_ReplaySlot_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplaySlot_WBP_C::BndEvt__ReplayButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__DeleteReplayButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UDebug_ReplaySlot_WBP_C::BndEvt__DeleteReplayButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__DeleteReplayButton_K2Node_ComponentBoundEvent_252_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayNameTextBox_K2Node_ComponentBoundEvent_271_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebug_ReplaySlot_WBP_C::BndEvt__ReplayNameTextBox_K2Node_ComponentBoundEvent_271_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.BndEvt__ReplayNameTextBox_K2Node_ComponentBoundEvent_271_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebug_ReplaySlot_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.ExecuteUbergraph_Debug_ReplaySlot_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebug_ReplaySlot_WBP_C::ExecuteUbergraph_Debug_ReplaySlot_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_ReplaySlot_WBP.Debug_ReplaySlot_WBP_C.ExecuteUbergraph_Debug_ReplaySlot_WBP");

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
