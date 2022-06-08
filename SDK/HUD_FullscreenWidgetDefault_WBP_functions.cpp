// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "HUD_FullscreenWidgetDefault_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.Offset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_FullscreenWidgetDefault_WBP_C::Offset(const struct FVector2D& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.Offset"));

	struct
	{
		struct FVector2D               Offset;
	} params = {};

	params.Offset = Offset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UHUD_FullscreenWidgetDefault_WBP_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.OnLoaded_87AD17FA4E685BFD0F40F6876AD13AE5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_FullscreenWidgetDefault_WBP_C::OnLoaded_87AD17FA4E685BFD0F40F6876AD13AE5(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.OnLoaded_87AD17FA4E685BFD0F40F6876AD13AE5"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_FullscreenWidgetDefault_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHUD_FullscreenWidgetDefault_WBP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHUD_FullscreenWidgetDefault_WBP_C::ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function HUD_FullscreenWidgetDefault_WBP.HUD_FullscreenWidgetDefault_WBP_C.ExecuteUbergraph_HUD_FullscreenWidgetDefault_WBP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
