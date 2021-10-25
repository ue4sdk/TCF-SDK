// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_DragAndDrop_HighlightArea_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DragAndDrop_HighlightArea_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.ExecuteUbergraph_WBP_DragAndDrop_HighlightArea
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DragAndDrop_HighlightArea_C::ExecuteUbergraph_WBP_DragAndDrop_HighlightArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DragAndDrop_HighlightArea.WBP_DragAndDrop_HighlightArea_C.ExecuteUbergraph_WBP_DragAndDrop_HighlightArea");

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
