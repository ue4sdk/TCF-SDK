// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_QuickMatchInfo_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_QuickMatchInfo_HUD_C::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_HandleBackKey"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_QuickMatchInfo_HUD_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_QuickMatchInfo_HUD_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_QuickMatchInfo_HUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnMouseButtonDown"));

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


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.SetMouseCursorToPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::SetMouseCursorToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.SetMouseCursorToPlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickMatchInfo_HUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tutorial_ZoomIn_ScoreWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::Tutorial_ZoomIn_ScoreWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tutorial_ZoomIn_ScoreWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tutorial_Restore_ScoreWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::Tutorial_Restore_ScoreWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.Tutorial_Restore_ScoreWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickMatchInfo_HUD_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_OnWidgetShown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::BP_OnWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_OnWidgetShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnInventoryActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::OnInventoryActivated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.OnInventoryActivated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_OnToggleQuickMatchInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickMatchInfo_HUD_C::BP_OnToggleQuickMatchInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BP_OnToggleQuickMatchInfo"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BndEvt__WBP_QuickMatchInfo_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_QuickMatchInfo_HUD_C::BndEvt__WBP_QuickMatchInfo_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BndEvt__WBP_QuickMatchInfo_HUD_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature"));

	struct
	{
		class UWBP_ButtonBase_Btn_C*   InputKey;
		int                            Index;
		struct FDataTableRowHandle     InputActionRowHandle;
	} params;

	params.InputKey = InputKey;
	params.Index = Index;
	params.InputActionRowHandle = InputActionRowHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BndEvt__WBP_QuickMatchInfo_HUD_WBP_MissionMiniWidget_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickMatchInfo_HUD_C::BndEvt__WBP_QuickMatchInfo_HUD_WBP_MissionMiniWidget_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.BndEvt__WBP_QuickMatchInfo_HUD_WBP_MissionMiniWidget_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.ExecuteUbergraph_WBP_QuickMatchInfo_HUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickMatchInfo_HUD_C::ExecuteUbergraph_WBP_QuickMatchInfo_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickMatchInfo_HUD.WBP_QuickMatchInfo_HUD_C.ExecuteUbergraph_WBP_QuickMatchInfo_HUD"));

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
