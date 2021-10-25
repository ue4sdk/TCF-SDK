// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_TurretPlate_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TurretPlate_WBP.TurretPlate_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTurretPlate_WBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TurretPlate_WBP.TurretPlate_WBP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TurretPlate_WBP.TurretPlate_WBP_C.BP_InitializeFor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTurretPlate_WBP_C::BP_InitializeFor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TurretPlate_WBP.TurretPlate_WBP_C.BP_InitializeFor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TurretPlate_WBP.TurretPlate_WBP_C.ExecuteUbergraph_TurretPlate_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTurretPlate_WBP_C::ExecuteUbergraph_TurretPlate_WBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TurretPlate_WBP.TurretPlate_WBP_C.ExecuteUbergraph_TurretPlate_WBP"));

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
