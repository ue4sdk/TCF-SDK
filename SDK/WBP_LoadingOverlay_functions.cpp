// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_LoadingOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Opaque Background
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadingOverlay_C::Show_Opaque_Background(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Opaque Background"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Hide Loading Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadingOverlay_C::Hide_Loading_Icon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Hide Loading Icon"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Loading Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLoadingIconTextVisible       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   LoadingIconText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_LoadingOverlay_C::Show_Loading_Icon(bool IsLoadingIconTextVisible, const struct FText& LoadingIconText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Loading Icon"));

	struct
	{
		bool                           IsLoadingIconTextVisible;
		struct FText                   LoadingIconText;
	} params = {};

	params.IsLoadingIconTextVisible = IsLoadingIconTextVisible;
	params.LoadingIconText = LoadingIconText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadingOverlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.PreConstruct"));

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


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Unused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadingOverlay_C::Unused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Unused"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.ExecuteUbergraph_WBP_LoadingOverlay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadingOverlay_C::ExecuteUbergraph_WBP_LoadingOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.ExecuteUbergraph_WBP_LoadingOverlay"));

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
