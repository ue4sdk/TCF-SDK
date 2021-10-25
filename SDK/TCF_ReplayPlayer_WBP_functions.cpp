// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ReplayPlayer_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.JumpToNextMarker
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::JumpToNextMarker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.JumpToNextMarker"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UReplayPlayer_WBP_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GetVisibility_1"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Get_YButton_OneStepForwad_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReplayPlayer_WBP_C::Get_YButton_OneStepForwad_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Get_YButton_OneStepForwad_bIsEnabled_1"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Get_TextBlock_3_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UReplayPlayer_WBP_C::Get_TextBlock_3_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Get_TextBlock_3_Text_1"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GetSliderValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UReplayPlayer_WBP_C::GetSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GetSliderValue"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.MaxTimeToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UReplayPlayer_WBP_C::MaxTimeToText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.MaxTimeToText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.CurrentTimeToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UReplayPlayer_WBP_C::CurrentTimeToText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.CurrentTimeToText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplayPlayer_WBP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_NextPlayer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_NextPlayer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_NextPlayer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_PreviousPlayer_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_PreviousPlayer_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_PreviousPlayer_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_FreeFlyMode_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_FreeFlyMode_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_FreeFlyMode_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_Pause_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_Pause_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_Pause_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_SpeedUpTime_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_SpeedUpTime_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_SpeedUpTime_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_SlowDownTime_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_SlowDownTime_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_SlowDownTime_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Replay_ToggleHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::Replay_ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.Replay_ToggleHUD"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_BackToStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_BackToStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_BackToStart_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_50_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_50_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_50_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__Slider_100_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_9_OnMouseCaptureEndEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__Slider_100_K2Node_ComponentBoundEvent_9_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_9_OnMouseCaptureEndEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplayPlayer_WBP_C::BndEvt__Slider_100_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Slider_100_K2Node_ComponentBoundEvent_10_OnFloatValueChangedEvent__DelegateSignature"));

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_AddMarker_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__Button_AddMarker_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_AddMarker_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.RefreshMarkers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::RefreshMarkers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.RefreshMarkers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GenerateNewMarkerName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::GenerateNewMarkerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.GenerateNewMarkerName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_OneStepForwad_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_OneStepForwad_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_OneStepForwad_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_OneStepBackward_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__YButton_OneStepBackward_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__YButton_OneStepBackward_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_NextMarker_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__Button_NextMarker_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_NextMarker_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.FindMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           findNextMarker                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReplayPlayer_WBP_C::FindMarker(bool findNextMarker)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.FindMarker"));

	struct
	{
		bool                           findNextMarker;
	} params;

	params.findNextMarker = findNextMarker;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_PrevMarker_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UReplayPlayer_WBP_C::BndEvt__Button_PrevMarker_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.BndEvt__Button_PrevMarker_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.ExecuteUbergraph_ReplayPlayer_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReplayPlayer_WBP_C::ExecuteUbergraph_ReplayPlayer_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplayPlayer_WBP.ReplayPlayer_WBP_C.ExecuteUbergraph_ReplayPlayer_WBP"));

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
