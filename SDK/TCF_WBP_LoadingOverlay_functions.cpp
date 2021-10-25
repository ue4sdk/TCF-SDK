// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_LoadingOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Hide Loading Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadingOverlay_C::Hide_Loading_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Hide Loading Icon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Loading Icon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLoadingIconTextVisible       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)
// struct FText                   LoadingIconText                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_LoadingOverlay_C::Show_Loading_Icon(bool IsLoadingIconTextVisible, const struct FText& LoadingIconText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.Show Loading Icon");

	struct
	{
		bool                           IsLoadingIconTextVisible;
		struct FText                   LoadingIconText;
	} params;

	params.IsLoadingIconTextVisible = IsLoadingIconTextVisible;
	params.LoadingIconText = LoadingIconText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadingOverlay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.ExecuteUbergraph_WBP_LoadingOverlay
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadingOverlay_C::ExecuteUbergraph_WBP_LoadingOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadingOverlay.WBP_LoadingOverlay_C.ExecuteUbergraph_WBP_LoadingOverlay");

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
