// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Toast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Toast.WBP_Toast_C.SetShowSecondaryLabel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toast_C::SetShowSecondaryLabel(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast.WBP_Toast_C.SetShowSecondaryLabel");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast.WBP_Toast_C.Show
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PrimaryText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   SecondaryText                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           SUCCESS                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toast_C::Show(const struct FText& PrimaryText, const struct FText& SecondaryText, bool SUCCESS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast.WBP_Toast_C.Show");

	struct
	{
		struct FText                   PrimaryText;
		struct FText                   SecondaryText;
		bool                           SUCCESS;
	} params;

	params.PrimaryText = PrimaryText;
	params.SecondaryText = SecondaryText;
	params.SUCCESS = SUCCESS;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast.WBP_Toast_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toast_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast.WBP_Toast_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast.WBP_Toast_C.ExecuteUbergraph_WBP_Toast
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Toast_C::ExecuteUbergraph_WBP_Toast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast.WBP_Toast_C.ExecuteUbergraph_WBP_Toast");

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
