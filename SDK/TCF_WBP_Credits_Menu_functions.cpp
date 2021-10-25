// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Credits_Menu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_HandleBackKey
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Credits_Menu_C::BP_HandleBackKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_HandleBackKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_Credits_Menu_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Credits_Menu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Credits_Menu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.IntroAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Credits_Menu_C::IntroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.IntroAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Credits_Menu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetStartShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Credits_Menu_C::BP_OnWidgetStartShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetStartShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Credits_Menu_C::BP_OnWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.BP_OnWidgetHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.BndEvt__WBP_Credits_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ButtonBase_Btn_C*   InputKey                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     InputActionRowHandle           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_Credits_Menu_C::BndEvt__WBP_Credits_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* InputKey, int Index, const struct FDataTableRowHandle& InputActionRowHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.BndEvt__WBP_Credits_Menu_WBP_InputKeyNavigation_K2Node_ComponentBoundEvent_0_OnInputKeyClicked__DelegateSignature");

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


// Function WBP_Credits_Menu.WBP_Credits_Menu_C.ExecuteUbergraph_WBP_Credits_Menu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Credits_Menu_C::ExecuteUbergraph_WBP_Credits_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Credits_Menu.WBP_Credits_Menu_C.ExecuteUbergraph_WBP_Credits_Menu");

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
