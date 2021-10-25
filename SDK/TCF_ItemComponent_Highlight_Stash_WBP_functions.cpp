// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ItemComponent_Highlight_Stash_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.IsProspectorToolOrGadget
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsToolOrGadget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Highlight_Stash_WBP_C::IsProspectorToolOrGadget(bool* IsToolOrGadget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.IsProspectorToolOrGadget");

	struct
	{
		bool                           IsToolOrGadget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsToolOrGadget != nullptr)
		*IsToolOrGadget = params.IsToolOrGadget;
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.TryHighlightTypeDueToOnboarding
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper)

bool UItemComponent_Highlight_Stash_WBP_C::TryHighlightTypeDueToOnboarding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.TryHighlightTypeDueToOnboarding");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemComponent_Highlight_Stash_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ShouldShowHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShowHighlight            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UItemComponent_Highlight_Stash_WBP_C::ShouldShowHighlight(bool ShouldShowHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ShouldShowHighlight");

	struct
	{
		bool                           ShouldShowHighlight;
	} params;

	params.ShouldShowHighlight = ShouldShowHighlight;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnMissionStepStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYMissionRuntimeData    uiMissionLineStepInfo          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItemComponent_Highlight_Stash_WBP_C::OnMissionStepStarted(const struct FYMissionRuntimeData& uiMissionLineStepInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnMissionStepStarted");

	struct
	{
		struct FYMissionRuntimeData    uiMissionLineStepInfo;
	} params;

	params.uiMissionLineStepInfo = uiMissionLineStepInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnItemSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemComponent_Highlight_Stash_WBP_C::OnItemSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.OnItemSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItemComponent_Highlight_Stash_WBP_C::ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemComponent_Highlight_Stash_WBP.ItemComponent_Highlight_Stash_WBP_C.ExecuteUbergraph_ItemComponent_Highlight_Stash_WBP");

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
