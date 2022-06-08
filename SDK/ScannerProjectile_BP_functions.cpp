// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ScannerProjectile_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::AnimationTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::AnimationTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerProjectile_BP.ScannerProjectile_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.StartScanFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::StartScanFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerProjectile_BP.ScannerProjectile_BP_C.StartScanFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.ExecuteUbergraph_ScannerProjectile_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScannerProjectile_BP_C::ExecuteUbergraph_ScannerProjectile_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ScannerProjectile_BP.ScannerProjectile_BP_C.ExecuteUbergraph_ScannerProjectile_BP"));

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
