// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "StormLighting_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StormLighting_BP.StormLighting_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AStormLighting_BP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StormLighting_BP.StormLighting_BP_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StormLighting_BP.StormLighting_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AStormLighting_BP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StormLighting_BP.StormLighting_BP_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StormLighting_BP.StormLighting_BP_C.BurstLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 lightningLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStormLighting_BP_C::BurstLight(const struct FVector& lightningLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StormLighting_BP.StormLighting_BP_C.BurstLight"));

	struct
	{
		struct FVector                 lightningLocation;
	} params = {};

	params.lightningLocation = lightningLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StormLighting_BP.StormLighting_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AStormLighting_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StormLighting_BP.StormLighting_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function StormLighting_BP.StormLighting_BP_C.ExecuteUbergraph_StormLighting_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AStormLighting_BP_C::ExecuteUbergraph_StormLighting_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function StormLighting_BP.StormLighting_BP_C.ExecuteUbergraph_StormLighting_BP"));

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
