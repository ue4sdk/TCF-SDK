// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_DropPod_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DropPod_ABP.DropPod_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UDropPod_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_ABP.DropPod_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function DropPod_ABP.DropPod_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDropPod_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_ABP.DropPod_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropPod_ABP.DropPod_ABP_C.OnSpawnContextAssigned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPodActor*              podActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropPod_ABP_C::OnSpawnContextAssigned(class AYPodActor* podActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_ABP.DropPod_ABP_C.OnSpawnContextAssigned");

	struct
	{
		class AYPodActor*              podActor;
	} params;

	params.podActor = podActor;

	UObject::ProcessEvent(fn, &params);
}


// Function DropPod_ABP.DropPod_ABP_C.InitializeCustomization
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDropPod_ABP_C::InitializeCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_ABP.DropPod_ABP_C.InitializeCustomization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DropPod_ABP.DropPod_ABP_C.ExecuteUbergraph_DropPod_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDropPod_ABP_C::ExecuteUbergraph_DropPod_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropPod_ABP.DropPod_ABP_C.ExecuteUbergraph_DropPod_ABP");

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
