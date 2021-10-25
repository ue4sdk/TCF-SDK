// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AB_OSI_Syringe_SK_Skeleton_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UAB_OSI_Syringe_SK_Skeleton_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.BlueprintBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAB_OSI_Syringe_SK_Skeleton_ABP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.BlueprintBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAB_OSI_Syringe_SK_Skeleton_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.ExecuteUbergraph_AB_OSI_Syringe_SK_Skeleton_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAB_OSI_Syringe_SK_Skeleton_ABP_C::ExecuteUbergraph_AB_OSI_Syringe_SK_Skeleton_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_OSI_Syringe_SK_Skeleton_ABP.AB_OSI_Syringe_SK_Skeleton_ABP_C.ExecuteUbergraph_AB_OSI_Syringe_SK_Skeleton_ABP");

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
