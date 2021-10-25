// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_ScannerProjectile_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::AnimationTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::AnimationTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerProjectile_BP.ScannerProjectile_BP_C.AnimationTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerProjectile_BP.ScannerProjectile_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.StartScanFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AScannerProjectile_BP_C::StartScanFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerProjectile_BP.ScannerProjectile_BP_C.StartScanFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScannerProjectile_BP.ScannerProjectile_BP_C.ExecuteUbergraph_ScannerProjectile_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AScannerProjectile_BP_C::ExecuteUbergraph_ScannerProjectile_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScannerProjectile_BP.ScannerProjectile_BP_C.ExecuteUbergraph_ScannerProjectile_BP");

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
