// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Station_Provider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleInventoryMenu
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Station_Provider_C::BP_ToggleInventoryMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_Provider.WBP_Station_Provider_C.BP_ToggleInventoryMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Station_Provider.WBP_Station_Provider_C.ExecuteUbergraph_WBP_Station_Provider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Station_Provider_C::ExecuteUbergraph_WBP_Station_Provider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Station_Provider.WBP_Station_Provider_C.ExecuteUbergraph_WBP_Station_Provider");

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
