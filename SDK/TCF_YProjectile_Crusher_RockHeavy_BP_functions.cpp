// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_YProjectile_Crusher_RockHeavy_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Crusher_RockHeavy_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.BP_OnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AYProjectile_Crusher_RockHeavy_BP_C::BP_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.BP_OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.ExecuteUbergraph_YProjectile_Crusher_RockHeavy_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AYProjectile_Crusher_RockHeavy_BP_C::ExecuteUbergraph_YProjectile_Crusher_RockHeavy_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function YProjectile_Crusher_RockHeavy_BP.YProjectile_Crusher_RockHeavy_BP_C.ExecuteUbergraph_YProjectile_Crusher_RockHeavy_BP");

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
