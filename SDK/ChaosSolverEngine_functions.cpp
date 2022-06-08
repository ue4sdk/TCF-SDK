// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ChaosSolverEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FChaosPhysicsCollisionInfo PhysicsCollision               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult"));

	struct
	{
		struct FChaosPhysicsCollisionInfo PhysicsCollision;
		struct FHitResult              ReturnValue;
	} params = {};

	params.PhysicsCollision = PhysicsCollision;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bActive                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AChaosSolverActor::SetSolverActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive"));

	struct
	{
		bool                           bActive;
	} params = {};

	params.bActive = bActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AChaosSolverActor::SetAsCurrentWorldSolver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
