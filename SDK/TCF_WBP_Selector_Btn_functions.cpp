// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Selector_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromMouse
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Selector_Btn_C::UpdateValueFromMouse(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromMouse");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Selector_Btn_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonUp");

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


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromPercent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::UpdateValueFromPercent(float percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateValueFromPercent");

	struct
	{
		float                          percent;
	} params;

	params.percent = percent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Selector_Btn_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseMove");

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


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Selector_Btn_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnMouseButtonDown");

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


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.IncreaseValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::IncreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.IncreaseValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.DecreaseValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::DecreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.DecreaseValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.HasPredefinedData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasPredefinedData              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Selector_Btn_C::HasPredefinedData(bool* HasPredefinedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.HasPredefinedData");

	struct
	{
		bool                           HasPredefinedData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasPredefinedData != nullptr)
		*HasPredefinedData = params.HasPredefinedData;
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::UpdateDisplay(const struct FStructure_SelectorData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateDisplay");

	struct
	{
		struct FStructure_SelectorData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateProgressBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FStructure_SelectorData Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::UpdateProgressBar(const struct FStructure_SelectorData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.UpdateProgressBar");

	struct
	{
		struct FStructure_SelectorData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::SetValueByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByName");

	struct
	{
		struct FName                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByFloat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::SetValueByFloat(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByFloat");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::SetValueByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.SetValueByIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Selector_Btn_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputLeft_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Selector_Btn_C::BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.BndEvt__Btn_InputRight_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.ExecuteUbergraph_WBP_Selector_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::ExecuteUbergraph_WBP_Selector_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.ExecuteUbergraph_WBP_Selector_Btn");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_Selector_Btn_C::OnValueChanged__DelegateSignature(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Selector_Btn.WBP_Selector_Btn_C.OnValueChanged__DelegateSignature");

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params;

	params.selector = selector;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
