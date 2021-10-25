// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Sky_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sky_BP.Sky_BP_C.UpdateSunDirection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASky_BP_C::UpdateSunDirection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Sky_BP.Sky_BP_C.UpdateSunDirection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sky_BP.Sky_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASky_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Sky_BP.Sky_BP_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sky_BP.Sky_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Sky_BP.Sky_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sky_BP.Sky_BP_C.UpdateLightVector
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASky_BP_C::UpdateLightVector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Sky_BP.Sky_BP_C.UpdateLightVector"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sky_BP.Sky_BP_C.ExecuteUbergraph_Sky_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASky_BP_C::ExecuteUbergraph_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Sky_BP.Sky_BP_C.ExecuteUbergraph_Sky_BP"));

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
