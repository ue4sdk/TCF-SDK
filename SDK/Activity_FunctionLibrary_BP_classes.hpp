#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Activity_FunctionLibrary_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C
// 0x0000 (0x0030 - 0x0030)
class UActivity_FunctionLibrary_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Activity_FunctionLibrary_BP.Activity_FunctionLibrary_BP_C"));
		return ptr;
	}


	static void SetNavMeshRelevantForActor(class AActor* Actor, bool IsNavMeshRelevant, class UObject* __WorldContext);
	static void GetRotationAtIncrement(int Increment, int MaxIncrement, class UObject* __WorldContext, float* Rotation);
	void FindFloorLocation(const struct FVector& StartLocation, float traceExtent, const struct FVector& NavMeshSearchExtent, class UObject* optionalContextObject, class UObject* __WorldContext, bool* Result, struct FVector* HitLocation, struct FVector* HitNormal);
	static class AYActivityActorManager* GetActivityByType(EYActivityType activityType, class UObject* __WorldContext);
	static void GenerateBugItGoStringForActor(class AActor* Actor, class UObject* __WorldContext, struct FString* BugItGoString);
	static void FindDropLocation(class AYPlayerCharacter* Pawn, class UObject* __WorldContext, struct FVector* Location);
	static void GetGenericActivityBIData(class AActor* Actor, class UObject* __WorldContext, int* PositionX, int* PositionY, int* TimeSinceMatchStart);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
