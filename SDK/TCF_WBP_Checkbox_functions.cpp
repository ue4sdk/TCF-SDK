// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Checkbox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Checkbox.WBP_Checkbox_C.SuccessAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Checkbox_C::SuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Checkbox.WBP_Checkbox_C.SuccessAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Checkbox.WBP_Checkbox_C.FailAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Checkbox_C::FailAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Checkbox.WBP_Checkbox_C.FailAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Checkbox.WBP_Checkbox_C.ClearAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Checkbox_C::ClearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Checkbox.WBP_Checkbox_C.ClearAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Checkbox.WBP_Checkbox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Checkbox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Checkbox.WBP_Checkbox_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Checkbox_C::ExecuteUbergraph_WBP_Checkbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Checkbox.WBP_Checkbox_C.ExecuteUbergraph_WBP_Checkbox");

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
