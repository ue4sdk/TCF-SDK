// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIHitReactionComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.BlendPhysicsForBone
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TargetBlendTime                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UAIHitReactionComponent_BP_C::BlendPhysicsForBone(const struct FName& BoneName, float TargetBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.BlendPhysicsForBone");

	struct
	{
		struct FName                   BoneName;
		float                          TargetBlendTime;
	} params;

	params.BoneName = BoneName;
	params.TargetBlendTime = TargetBlendTime;

	UObject::ProcessEvent(fn, &params);
}


// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.UpdatePhysicsBlendWeights
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIHitReactionComponent_BP_C::UpdatePhysicsBlendWeights(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.UpdatePhysicsBlendWeights");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAIHitReactionComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.OnTakeDamage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void UAIHitReactionComponent_BP_C::OnTakeDamage(const struct FYDealtDamageData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.OnTakeDamage");

	struct
	{
		struct FYDealtDamageData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIHitReactionComponent_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ExecuteUbergraph_AIHitReactionComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIHitReactionComponent_BP_C::ExecuteUbergraph_AIHitReactionComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIHitReactionComponent_BP.AIHitReactionComponent_BP_C.ExecuteUbergraph_AIHitReactionComponent_BP");

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
