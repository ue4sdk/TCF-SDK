// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_InputKeyGamepad_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyGamepad_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.SetBrightness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isLight                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InputKeyGamepad_C::SetBrightness(bool isLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.SetBrightness");

	struct
	{
		bool                           isLight;
	} params;

	params.isLight = isLight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.ExecuteUbergraph_WBP_InputKeyGamepad
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InputKeyGamepad_C::ExecuteUbergraph_WBP_InputKeyGamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeyGamepad.WBP_InputKeyGamepad_C.ExecuteUbergraph_WBP_InputKeyGamepad");

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
