// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_AIAggroComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateVisibilityValues
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  targetActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAITargetInfo          targetInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAIAggroComponent_BP_C::UpdateVisibilityValues(class AActor* targetActor, const struct FYAITargetInfo& targetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateVisibilityValues");

	struct
	{
		class AActor*                  targetActor;
		struct FYAITargetInfo          targetInfo;
	} params;

	params.targetActor = targetActor;
	params.targetInfo = targetInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function AIAggroComponent_BP.AIAggroComponent_BP_C.TrySetReplicatedCombatTarget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIAggroComponent_BP_C::TrySetReplicatedCombatTarget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.TrySetReplicatedCombatTarget");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateBlackboard
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  AggroActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAITargetInfo          targetInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAIAggroComponent_BP_C::UpdateBlackboard(class AActor* AggroActor, const struct FYAITargetInfo& targetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.UpdateBlackboard");

	struct
	{
		class AActor*                  AggroActor;
		struct FYAITargetInfo          targetInfo;
	} params;

	params.AggroActor = AggroActor;
	params.targetInfo = targetInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function AIAggroComponent_BP.AIAggroComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAIAggroComponent_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIAggroComponent_BP.AIAggroComponent_BP_C.BP_UpdateAggroTarget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYAITargetInfo          aiTargetInfo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UAIAggroComponent_BP_C::BP_UpdateAggroTarget(class AActor* Actor, const struct FYAITargetInfo& aiTargetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.BP_UpdateAggroTarget");

	struct
	{
		class AActor*                  Actor;
		struct FYAITargetInfo          aiTargetInfo;
	} params;

	params.Actor = Actor;
	params.aiTargetInfo = aiTargetInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function AIAggroComponent_BP.AIAggroComponent_BP_C.ExecuteUbergraph_AIAggroComponent_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIAggroComponent_BP_C::ExecuteUbergraph_AIAggroComponent_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAggroComponent_BP.AIAggroComponent_BP_C.ExecuteUbergraph_AIAggroComponent_BP");

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
