// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_Headline_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Headline_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Headline_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ScreenInAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Headline_C::ScreenInAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ScreenInAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ScreenOutAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Headline_C::ScreenOutAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ScreenOutAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ExecuteUbergraph_WBP_EndOfMatch_Headline
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Headline_C::ExecuteUbergraph_WBP_EndOfMatch_Headline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Headline.WBP_EndOfMatch_Headline_C.ExecuteUbergraph_WBP_EndOfMatch_Headline"));

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
