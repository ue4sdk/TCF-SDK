// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MonsterNest_Plate_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.SetPlayerHasBait
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMonsterNest_Plate_WBP_C::SetPlayerHasBait(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.SetPlayerHasBait"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMonsterNest_Plate_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.ExecuteUbergraph_MonsterNest_Plate_WBP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMonsterNest_Plate_WBP_C::ExecuteUbergraph_MonsterNest_Plate_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MonsterNest_Plate_WBP.MonsterNest_Plate_WBP_C.ExecuteUbergraph_MonsterNest_Plate_WBP"));

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
