// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_DragAndDrop_HighlightArea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DragAndDrop_HighlightArea_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.ExecuteUbergraph_WBP_DragAndDrop_HighlightArea
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DragAndDrop_HighlightArea_C::ExecuteUbergraph_WBP_DragAndDrop_HighlightArea(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.ExecuteUbergraph_WBP_DragAndDrop_HighlightArea"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
