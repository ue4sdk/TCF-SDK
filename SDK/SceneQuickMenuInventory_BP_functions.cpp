// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SceneQuickMenuInventory_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C.BP_OnFinishedLoadingWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASceneQuickMenuInventory_BP_C::BP_OnFinishedLoadingWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C.BP_OnFinishedLoadingWidget"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C.ExecuteUbergraph_SceneQuickMenuInventory_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASceneQuickMenuInventory_BP_C::ExecuteUbergraph_SceneQuickMenuInventory_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SceneQuickMenuInventory_BP.SceneQuickMenuInventory_BP_C.ExecuteUbergraph_SceneQuickMenuInventory_BP"));

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
