// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_RadialSelection_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RadialSelection_Panel_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnMouseButtonDown");

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


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_RadialSelection_Panel_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetWheelTitle
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EYWheelType                    wheelType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Panel_C::BP_SetWheelTitle(EYWheelType wheelType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetWheelTitle");

	struct
	{
		EYWheelType                    wheelType;
	} params;

	params.wheelType = wheelType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialSelection_Panel_C::OnInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.OnInteract");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetPlayerData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Panel_C::BP_SetPlayerData(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_SetPlayerData");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_OnActiveWheelChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RadialSelection_Panel_C::BP_OnActiveWheelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.BP_OnActiveWheelChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.ExecuteUbergraph_WBP_RadialSelection_Panel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelection_Panel_C::ExecuteUbergraph_WBP_RadialSelection_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelection_Panel.WBP_RadialSelection_Panel_C.ExecuteUbergraph_WBP_RadialSelection_Panel");

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
