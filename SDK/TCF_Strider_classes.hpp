#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Strider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Strider.StriderMath
// 0x0000 (0x0028 - 0x0028)
class UStriderMath : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Strider.StriderMath");
		return ptr;
	}


	static float WrapAngle(float Angle);
	static void MoveTowardVector(const struct FVector& End, float MaxDelta, struct FVector* InStart);
	static float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta);
	static float MoveToward(float Start, float End, float MaxDelta);
	static void MoveComponentsToward(const struct FVector& End, float MaxDelta, struct FVector* InStart);
	static float GetRotationRelativeToVelocity(class AActor* Actor);
	static int GetNextCardinalDirection(int CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta);
	static float GetAngleDelta(float StartAngle, float EndAngle);
	static float CalculateStrideScale(float TotalSpeedScale, float PlayRate);
	static float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate);
	static float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime);
	static float AngleBetween(const struct FVector& A, const struct FVector& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
