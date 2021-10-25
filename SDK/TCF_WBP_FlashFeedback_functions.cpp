// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_FlashFeedback_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_FlashFeedback.WBP_FlashFeedback_C.Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FlashFeedback_C::Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FlashFeedback.WBP_FlashFeedback_C.Color");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FlashFeedback.WBP_FlashFeedback_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_FlashFeedback_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FlashFeedback.WBP_FlashFeedback_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FlashFeedback.WBP_FlashFeedback_C.PlayFlashAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_FlashFeedback_C::PlayFlashAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FlashFeedback.WBP_FlashFeedback_C.PlayFlashAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_FlashFeedback.WBP_FlashFeedback_C.ExecuteUbergraph_WBP_FlashFeedback
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_FlashFeedback_C::ExecuteUbergraph_WBP_FlashFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FlashFeedback.WBP_FlashFeedback_C.ExecuteUbergraph_WBP_FlashFeedback");

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
