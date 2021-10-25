// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Weight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Weight.WBP_Weight_C.SetRelativeWeightText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Current                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Weight_C::SetRelativeWeightText(const struct FText& Current, const struct FText& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Weight.WBP_Weight_C.SetRelativeWeightText");

	struct
	{
		struct FText                   Current;
		struct FText                   Max;
	} params;

	params.Current = Current;
	params.Max = Max;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weight.WBP_Weight_C.SetWeightText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   weight                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Weight_C::SetWeightText(const struct FText& weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Weight.WBP_Weight_C.SetWeightText");

	struct
	{
		struct FText                   weight;
	} params;

	params.weight = weight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weight.WBP_Weight_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Weight_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Weight.WBP_Weight_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Weight.WBP_Weight_C.ExecuteUbergraph_WBP_Weight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Weight_C::ExecuteUbergraph_WBP_Weight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Weight.WBP_Weight_C.ExecuteUbergraph_WBP_Weight");

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
