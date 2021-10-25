// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Headline_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Headline_Panel.WBP_Headline_Panel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Headline_Panel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Headline_Panel.WBP_Headline_Panel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Headline_Panel.WBP_Headline_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Headline_Panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Headline_Panel.WBP_Headline_Panel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Headline_Panel.WBP_Headline_Panel_C.ExecuteUbergraph_WBP_Headline_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Headline_Panel_C::ExecuteUbergraph_WBP_Headline_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Headline_Panel.WBP_Headline_Panel_C.ExecuteUbergraph_WBP_Headline_Panel");

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
