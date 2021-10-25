// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WidgetSamplerSource_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.SetUpWidgetSampling
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWidgetSamplerSource_WBP_C::SetUpWidgetSampling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.SetUpWidgetSampling"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.CheckRenderTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWidgetSamplerSource_WBP_C::CheckRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.CheckRenderTarget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWidgetSamplerSource_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.ExecuteUbergraph_WidgetSamplerSource_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWidgetSamplerSource_WBP_C::ExecuteUbergraph_WidgetSamplerSource_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WidgetSamplerSource_WBP.WidgetSamplerSource_WBP_C.ExecuteUbergraph_WidgetSamplerSource_WBP"));

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
