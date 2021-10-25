// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_CelebrationBacker_Panel_B_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ArrowAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CelebrationBacker_Panel_B_C::ArrowAnim(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ArrowAnim");

	struct
	{
		bool                           Condition;
	} params;

	params.Condition = Condition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_CelebrationBacker_Panel_B_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.BP_AnimateVisibility");

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CelebrationBacker_Panel_B_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CelebrationBacker_Panel_B_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ExecuteUbergraph_WBP_CelebrationBacker_Panel_B
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CelebrationBacker_Panel_B_C::ExecuteUbergraph_WBP_CelebrationBacker_Panel_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CelebrationBacker_Panel_B.WBP_CelebrationBacker_Panel_B_C.ExecuteUbergraph_WBP_CelebrationBacker_Panel_B");

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
