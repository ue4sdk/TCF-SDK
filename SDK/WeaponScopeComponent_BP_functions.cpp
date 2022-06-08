// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponScopeComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnEnterTargeting_BP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWeaponScopeComponent_BP_C::OnEnterTargeting_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnEnterTargeting_BP"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnLeaveTargeting_BP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           interrupted                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWeaponScopeComponent_BP_C::OnLeaveTargeting_BP(bool interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.OnLeaveTargeting_BP"));

	struct
	{
		bool                           interrupted;
	} params = {};

	params.interrupted = interrupted;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.ExecuteUbergraph_WeaponScopeComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponScopeComponent_BP_C::ExecuteUbergraph_WeaponScopeComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponScopeComponent_BP.WeaponScopeComponent_BP_C.ExecuteUbergraph_WeaponScopeComponent_BP"));

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
