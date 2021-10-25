// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AA_MeteorRockSmallActor_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.FX-MeteorImpact
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorRockSmallActor_BP_C::FX_MeteorImpact()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.FX-MeteorImpact"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.FX-MeteorFlightAlpha
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorRockSmallActor_BP_C::FX_MeteorFlightAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.FX-MeteorFlightAlpha"));

	struct
	{
		float                          Alpha;
	} params;

	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.StartCountingDestroyedChunks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_MeteorRockSmallActor_BP_C::StartCountingDestroyedChunks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.StartCountingDestroyedChunks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAA_MeteorRockSmallActor_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.OnChunkDestroyed_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            chunkID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkLocation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 chunkExtends                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorRockSmallActor_BP_C::OnChunkDestroyed_Event_1(int chunkID, const struct FVector& chunkLocation, const struct FVector& chunkExtends)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.OnChunkDestroyed_Event_1"));

	struct
	{
		int                            chunkID;
		struct FVector                 chunkLocation;
		struct FVector                 chunkExtends;
	} params;

	params.chunkID = chunkID;
	params.chunkLocation = chunkLocation;
	params.chunkExtends = chunkExtends;

	UObject::ProcessEvent(fn, &params);
}


// Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.ExecuteUbergraph_AA_MeteorRockSmallActor_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_MeteorRockSmallActor_BP_C::ExecuteUbergraph_AA_MeteorRockSmallActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AA_MeteorRockSmallActor_BP.AA_MeteorRockSmallActor_BP_C.ExecuteUbergraph_AA_MeteorRockSmallActor_BP"));

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
