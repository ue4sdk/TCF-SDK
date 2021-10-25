// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Dropdown_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Dropdown_Btn_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_Dropdown_Btn_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.BndEvt__m_comboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Dropdown_Btn_C::BndEvt__m_comboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.BndEvt__m_comboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.ExecuteUbergraph_WBP_Dropdown_Btn
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Dropdown_Btn_C::ExecuteUbergraph_WBP_Dropdown_Btn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Dropdown_Btn.WBP_Dropdown_Btn_C.ExecuteUbergraph_WBP_Dropdown_Btn");

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
